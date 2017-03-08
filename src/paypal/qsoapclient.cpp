#include "qsoapclient_p.hpp"

#include <QMap>
#include <QUrl>

QT_PAYPAL_BEGIN_NAMESPACE

static const QMap<QClient::EndpointType, QUrl> endpoints = {
    { QClient::EndpointTypeDefault, QUrl("http://localhost:8081") }
    , { QClient::EndpointTypeTesting, QUrl("https://api-3t.sandbox.paypal.com/2.0/") }
    , { QClient::EndpointTypeLive, QUrl("https://api-3t.paypal.com/2.0/") }
};

QSoapClient::QSoapClient(QObject *parent)
    : QClient(*new QSoapClientPrivate(this), parent)
{
}

void QSoapClient::setEndpointType(QClient::EndpointType endpointType)
{
    Q_D(QSoapClient);

    auto it = endpoints.find(endpointType);
    if (it != endpoints.end())
        d->m_api.setEndPoint(it->toString());

    QClient::setEndpointType(endpointType);
}

QSoapClientPrivate::QSoapClientPrivate(QSoapClient *q)
    : QClientPrivate(q)
{
}

QSoapClientPrivate::~QSoapClientPrivate()
{
}

QT_PAYPAL_END_NAMESPACE
