#ifndef QT_PAYPAL_SOAPCLIENT_P_HPP
#define QT_PAYPAL_SOAPCLIENT_P_HPP

#include "qsoapclient.hpp"
#include "qclient_p.hpp"

#include "../client/PayPalSvc.hpp"

QT_PAYPAL_BEGIN_NAMESPACE

class QT_PAYPAL_EXPORT QSoapClientPrivate : public QClientPrivate
{
    Q_OBJECT

public:
    QSoapClientPrivate(QSoapClient *q);
    ~QSoapClientPrivate();

protected:
    PayPalAPIInterfaceService::PayPalAPISoapBinding m_api;

private:
    friend class QSoapClient;
};

QT_PAYPAL_END_NAMESPACE

#endif // QT_PAYPAL_SOAPCLIENT_P_HPP
