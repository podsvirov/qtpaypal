#ifndef QT_PAYPAL_CLIENT_HPP
#define QT_PAYPAL_CLIENT_HPP

#include "qpaypalglobal.hpp"

#include <QObject>

QT_PAYPAL_BEGIN_NAMESPACE

class QClientPrivate;

class QT_PAYPAL_EXPORT QClient : public QObject
{
    Q_OBJECT

public:
    explicit QClient(QObject *parent = nullptr);

signals:

public slots:

private:
    QScopedPointer<QClientPrivate> d_ptr;
};

QT_PAYPAL_END_NAMESPACE

#endif // QT_PAYPAL_CLIENT_HPP
