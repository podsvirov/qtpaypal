#include "qclient_p.hpp"

QT_PAYPAL_BEGIN_NAMESPACE

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

QT_PAYPAL_END_NAMESPACE
