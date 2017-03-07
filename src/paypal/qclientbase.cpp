#include "qclientbase.hpp"
#include "qclientbase_p.hpp"

QT_PAYPAL_BEGIN_NAMESPACE

QClientBase::QClientBase(QObject *parent)
    : QObject(parent)
    , d_ptr(new QClientBasePrivate(this))
{
}

QClientBasePrivate::QClientBasePrivate(QClientBase *q)
    : q_ptr(q)
{
}

QClientBasePrivate::~QClientBasePrivate()
{
}

QT_PAYPAL_END_NAMESPACE
