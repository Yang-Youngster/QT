#include "socketcore.h"

socketCore::socketCore()
{
    //通过readyRead函数激发信号 调用SLOT中的函数
    connect(this,SIGNAL(readyRead()),this,SLOT(receive()));
    connect();



}
