#ifndef QT_PAYPAL_SOAPCLIENT_HPP
#define QT_PAYPAL_SOAPCLIENT_HPP

#include "qclient.hpp"

QT_PAYPAL_BEGIN_NAMESPACE

class QSoapClientPrivate;

class QT_PAYPAL_EXPORT QSoapClient : public QClient
{
    Q_OBJECT

public:
    explicit QSoapClient(QObject *parent = nullptr);

signals:

public slots:
    virtual void setEndpointType(EndpointType endpointType) override;

private:
    Q_DECLARE_PRIVATE(QSoapClient)
};

QT_PAYPAL_END_NAMESPACE

#endif // QT_PAYPAL_SOAPCLIENT_HPP
