#include "serverdb.h"
#include "protocol.h"
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
void SocketCore::receiveMsg()
{
    //接受的字节大小
    qDebug()<<"Socket传输的数据："<<this->bytesAvailable()<<"字节！";
    uint uiAllLength;
    //读取缓冲区中的最开始的4字节的数据，就是消息体的长度
    this->read((char*)&uiAllLength,sizeof(uint));
    //获取实际消息长度
    uint uiMsg=uiAllLength-sizeof(PDU);
    //创建PDU内存块，存放缓冲区的数据
    PDU * tempdu=mkPDU(uiMsg);
    //读取缓冲区数据，从第5个字节起
    this->read((char*)&tempdu+sizeof(uint),uiAllLength-sizeof(uint));
    //获取对象之后的处理方式

}
//处理下线消息
void SocketCore::clientoffline()
{
    //状态下线
    QString ClientName=this->getClientName();
    if(ClientName==NULL)
    {
        throw "字符串不能为空" ;
    }
    //提示下线
    OpenDB::getInstance().handleOffline(ClientName);
    emit offline(this);
    qDebug()<<"账户："<< ClientName <<"成功下线！";
}
