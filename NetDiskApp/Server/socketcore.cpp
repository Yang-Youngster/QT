#include "socketcore.h"

SocketCore::SocketCore()
{

    //通过readyRead函数激发信号 调用SLOT中的函数
    connect(this,SIGNAL(readyRead()),this,SLOT(receiveMsg()));
    connect(this,SIGNAL(disconnected()),this,SLOT(clientoffline()));

    //功能是否启用文件上传
}
//获取本对象的用户名
QString SocketCore::getClientName()
{
  return client_Name;
}
//处理收到的信息
void receiveMsg()
{


}
void offline(SocketCore* socket)
{
    //状态下线
    QString ClientName=socket->getClientName();
    if(ClientName==NULL)
    {
        throw "字符串不能为空" ;
    }
    //提示下线
    OpenDB::getInstance().handleOffline(ClientName);
    qDebug()<<"账户："<< ClientName <<"成功下线！";
}
