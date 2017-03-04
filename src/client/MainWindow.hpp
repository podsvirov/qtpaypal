#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

#include "PayPalSvc.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void getBalanceDone( const NS__GetBalanceResponseType& getBalanceResponse );
    void getBalanceError( const KDSoapMessage& fault );

    void on_getBalancePushButton_clicked();

    void updateRequesterCredentials();
    void processFaultMessage(const KDSoapMessage &fault);

    void on_endpointComboBox_activated(const QString &arg1);
    void on_endpointComboBox_activated(int index);

    void on_styleComboBox_currentIndexChanged(int index);

private:
    void prepareRequest(EBL__AbstractRequestType& request);

private:
    Ui::MainWindow *ui;

    PayPalAPIInterfaceService::PayPalAPISoapBinding service;
};

#endif // MAINWINDOW_HPP
