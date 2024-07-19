#ifndef SOCKETCORE_H
#define SOCKETCORE_H

#include <QTcpSocket>



class socketCore : public QTcpSocket
{
    Q_OBJECT;
public:
    socketCore();

    //信号声明
signals:
    void offline(socketCore* socket);
//信号槽函数
public slots:

};

#endif // SOCKETCORE_H
