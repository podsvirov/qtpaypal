#include <QCoreApplication>

#include <KDSoapServer/KDSoapServer.h>

#include <iostream>

#include "PayPalAPIServerObject.hpp"

class PayPalAPIServer : public KDSoapServer
{
public:
    QObject* createServerObject() override
    {
        return new PayPalAPIServerObject;
    }
};

int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);
    PayPalAPIServer server;
    server.setLogLevel(PayPalAPIServer::LogEveryCall);
    const bool listening = server.listen(QHostAddress::Any, 8081);
    if ( !listening ) {
        std::cerr << "Cannot start server: " << qPrintable(server.errorString()) << std::endl;
        return 1;
    } else {
        std::cout << "Listening..." << std::endl;
    }
    return app.exec();
}
