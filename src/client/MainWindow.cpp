#include "MainWindow.hpp"
#include "ui_MainWindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    service.setEndPoint(QLatin1String("http://localhost:8081"));
    service.setSoapVersion(KDSoapClientInterface::SOAP1_2);
    service.clientInterface()->setStyle(KDSoapClientInterface::RPCStyle);

    typedef PayPalAPIInterfaceService::PayPalAPISoapBinding PPAPI;

    connect(&service, &PPAPI::getBalanceDone, this, &getBalanceDone);
    connect(&service, &PPAPI::getBalanceError, this, &getBalanceError);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getBalanceDone(const NS__GetBalanceResponseType &getBalanceResponse)
{
    ui->balanceLineEdit->setText(getBalanceResponse.balance().value());
}

void MainWindow::getBalanceError(const KDSoapMessage &fault)
{
    ui->balanceLineEdit->clear();

    processFaultMessage(fault);
}

void MainWindow::on_getBalancePushButton_clicked()
{
    NS__GetBalanceReq req;
    service.asyncGetBalance(req);
}

void MainWindow::updateLoginHeader()
{
    KDSoapMessage login;
    login.addArgument("Username", ui->usernameLineEdit->text());
    login.addArgument("Password", ui->passwordLineEdit->text());
    service.clientInterface()->setHeader("Login", login);
}

void MainWindow::processFaultMessage(const KDSoapMessage &fault)
{
    qDebug() << "Error:" << fault.faultAsString();
}
