#include "Server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetdiskApp w;
    w.show();
    return a.exec();
}
