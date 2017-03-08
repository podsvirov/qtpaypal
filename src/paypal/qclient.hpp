#ifndef QT_PAYPAL_CLIENT_HPP
#define QT_PAYPAL_CLIENT_HPP

#include "qpaypalglobal.hpp"

#include <QObject>

QT_PAYPAL_BEGIN_NAMESPACE

class QClientPrivate;

class QT_PAYPAL_EXPORT QClient : public QObject
{
    Q_OBJECT
    Q_PROPERTY(EndpointType endpointType READ endpointType WRITE setEndpointType NOTIFY endpointTypeChanged)
    Q_ENUMS(EndpointType)

public:
    enum EndpointType {
        EndpointTypeDefault,
        EndpointTypeCustom,
        EndpointTypeTesting,
        EndpointTypeLive
    };

protected:
    QClient(QClientPrivate &d, QObject *parent = nullptr);

public:
    explicit QClient(QObject *parent = nullptr);

    EndpointType endpointType() const;

signals:
    void endpointTypeChanged(EndpointType endpointType);

public slots:
    virtual void setEndpointType(EndpointType endpointType);

protected:
    QScopedPointer<QClientPrivate> d_ptr;
};

QT_PAYPAL_END_NAMESPACE

#endif // QT_PAYPAL_CLIENT_HPP
