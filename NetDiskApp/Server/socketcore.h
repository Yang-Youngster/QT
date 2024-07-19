#ifndef SOCKETCORE_H
#define SOCKETCORE_H

#include <QTcpSocket>



class socketCore : public QTcpSocket
{
    Q_OBJECT;
public:
    socketCore();
    //处理客户端传递的信息


    //信号声明
signals:
    void offline(socketCore* socket);
//信号槽函数
public slots:
       //客户端连接
       void receiveMsg();
       //客户端断开
       void clientoffline();

private:
      QString client_Name;
};

#endif // SOCKETCORE_H
