#include "socketcore.h"

SocketCore::SocketCore()
{
    //通过readyRead函数激发信号 调用SLOT中的函数
    connect(this,SIGNAL(readyRead()),this,SLOT(receiveMsg()));
    connect(this,SIGNAL(disconnected()),this,SLOT(clientoffline()));

    //是否启用文件上传
}


//处理收到的信息
void receiveMsg()
{
    
    

}


void offline(SocketCore* socket)
{

}
