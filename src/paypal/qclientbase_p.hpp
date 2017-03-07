#ifndef QT_PAYPAL_CLIENTBASE_P_HPP
#define QT_PAYPAL_CLIENTBASE_P_HPP

#include "qclientbase.hpp"

QT_PAYPAL_BEGIN_NAMESPACE

class QT_PAYPAL_EXPORT QClientBasePrivate : public QObject
{
    Q_OBJECT

public:
    QClientBasePrivate(QClientBase *q);
    ~QClientBasePrivate();

protected:
    QClientBase *q_ptr;
};

QT_PAYPAL_END_NAMESPACE

#endif // QT_PAYPAL_CLIENTBASE_P_HPP
