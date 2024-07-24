#ifndef TCPSERVER_H
#define TCPSERVER_H
#include <QTcpServer>
#include <QList>
#include "socketcore.h"

class Tcpserver : public QTcpServer
{
    //宏
    Q_OBJECT
public:
    Tcpserver();
    //界面的UI控制对象
    static Tcpserver& getInstance();
    void incomingCnnection(qintptr handle);

public slots:
    void deleteSocket(SocketCore*);

private:
    //每个Client的集合
    QList<SocketCore*> socketList;
};
#endif // TCPSERVER_H
