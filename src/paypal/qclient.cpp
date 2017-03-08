#include "qclient_p.hpp"

QT_PAYPAL_BEGIN_NAMESPACE

QClient::QClient(QClientPrivate &d, QObject *parent)
    : QObject(parent)
    , d_ptr(&d)
{
}

QClient::QClient(QObject *parent)
    : QObject(parent)
    , d_ptr(new QClientPrivate(this))
{
}

QClientPrivate::QClientPrivate(QClient *q)
    : q_ptr(q)
{
}

QClientPrivate::~QClientPrivate()
{
}

QClient::EndpointType QClient::endpointType() const
{
    return d_ptr->m_endpointType;
}

void QClient::setEndpointType(QClient::EndpointType endpointType)
{
    if (d_ptr->m_endpointType == endpointType)
        return;

    d_ptr->m_endpointType = endpointType;
    emit endpointTypeChanged(endpointType);
}

QT_PAYPAL_END_NAMESPACE
