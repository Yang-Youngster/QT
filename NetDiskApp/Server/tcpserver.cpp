#include "tcpserver.h"
/**
 *  主要负责 服务端 --> 客户端的连接处理
 *
 *  date: 2024.07.19
 *  author: LuoYang
 *
*/
tcpserver::tcpserver()
{

}
//单例模式 -类的实例化对象
tcpserver& tcpserver::getInstance()
{
    static tcpserver tcp;
    return tcp;
}
//获取客户端的连接
void tcpserver::incomingCnnection(qintptr handle)
{

}



