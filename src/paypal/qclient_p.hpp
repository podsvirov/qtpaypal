#ifndef QT_PAYPAL_CLIENT_P_HPP
#define QT_PAYPAL_CLIENT_P_HPP

#include "qclient.hpp"

QT_PAYPAL_BEGIN_NAMESPACE

class QT_PAYPAL_EXPORT QClientPrivate : public QObject
{
    Q_OBJECT

public:
    QClientPrivate(QClient *q);
    ~QClientPrivate();

protected:
    QClient *q_ptr;
    QClient::EndpointType m_endpointType;

private:
    friend class QClient;
};

QT_PAYPAL_END_NAMESPACE

#endif // QT_PAYPAL_CLIENT_P_HPP
