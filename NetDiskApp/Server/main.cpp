#include "server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //初始化函数
    NetdiskApp w;
    w.show();
    return a.exec();
}
