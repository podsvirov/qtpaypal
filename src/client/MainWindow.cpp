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

    // Get ballance
    {
        NS__GetBalanceReq req;
        service.asyncGetBalance(req);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getBalanceDone(const NS__GetBalanceResponseType &getBalanceResponse)
{
    qDebug() << "Balance:" << getBalanceResponse.balance().value();
}

void MainWindow::getBalanceError(const KDSoapMessage &fault)
{
    qDebug() << "Error:" << fault.faultAsString();
}
