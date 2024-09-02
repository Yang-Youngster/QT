#ifndef SOCKETCORE_H
#define SOCKETCORE_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QtDebug>
#include "server.h"

class SocketCore : public QTcpSocket
{
    Q_OBJECT;
public:
      Ui::server *ui;
      SocketCore();
      QString getClientName();
    //处理客户端传递的信息
    //信号声明
signals:
    //用户下线信号用于发送信息
    void offline(SocketCore* socket);
public slots:
       //客户端连接
       void receiveMsg();
       //客户端断开
       void clientoffline();
       //发送文件
  //     void sendFileToClient();
private:
      QString client_Name;

};

#endif // SOCKETCORE_H
