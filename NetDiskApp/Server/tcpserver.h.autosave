#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QTcpServer>
#include <QList>
#include "socketcore.h"

class tcpserver : public QTcpServer
{
    //宏
    Q_OBJECT
public:
    tcpserver();
    static tcpserver& getInstance();
    void incomingCnnection(qintptr handle);

private:
    QList<socketcore*> socketList;
};

#endif // TCPSERVER_H
