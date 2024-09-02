#include "tcpserver.h"
/***
 *  主要负责 服务端 --> 客户端的连接处理
 *
 *  date: 2024.07.19
 *  author: LuoYang
 *
*/
Tcpserver::Tcpserver()
{

}
//单例模式 -类的实例化对象
Tcpserver& Tcpserver::getInstance()
{
    static Tcpserver tcp;
    return tcp;
}
//获取客户端的连接
void Tcpserver::incomingCnnection(qintptr handle)
{
    qDebug() << "new client connected ! ";
    SocketCore* socketcore=new SocketCore();
    socketcore->setSocketDescriptor(handle);
    socketList.append(socketcore);
    connect(socketcore,SIGNAL(offline(ScoketCore*)),this,SLOT(deleteSocket(ScoketCore*)));
}
void Tcpserver::deleteSocket(SocketCore *socket)
{
    auto temp=socketList.begin();
    for(;temp!=socketList.end();temp++)
    {
        if(socket ==*temp)
        {
            //释放该socketCore对象的value
            delete *temp;
            *temp=NULL;
            //在List集合中删除其指针地址
            socketList.erase(temp);
        }
    }
//    foreach (auto temp, socketList) {
//        if(temp==socket)
//        {

//        }
//    }
}



