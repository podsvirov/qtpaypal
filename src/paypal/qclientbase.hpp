#ifndef QT_PAYPAL_CLIENTBASE_HPP
#define QT_PAYPAL_CLIENTBASE_HPP

#include "qpaypalglobal.hpp"

#include <QObject>

QT_PAYPAL_BEGIN_NAMESPACE

class QClientBasePrivate;

class QT_PAYPAL_EXPORT QClientBase : public QObject
{
    Q_OBJECT

public:
    explicit QClientBase(QObject *parent = nullptr);

signals:

public slots:

private:
    QScopedPointer<QClientBasePrivate> d_ptr;
};

QT_PAYPAL_END_NAMESPACE

#endif // QT_PAYPAL_CLIENTBASE_HPP
