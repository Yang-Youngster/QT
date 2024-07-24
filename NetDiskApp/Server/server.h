#ifndef NETDISKAPP_H
#define NETDISKAPP_H

#include <QMainWindow>
#include "socketcore.h"

QT_BEGIN_NAMESPACE
namespace Ui { class NetdiskApp; }
QT_END_NAMESPACE

class NetdiskApp : public QMainWindow
{
    Q_OBJECT
public:
    NetdiskApp(QWidget *parent = nullptr);
    ~NetdiskApp();
    void config();

private:
    Ui::NetdiskApp *ui;

    //其他函数通信
    QString ipAdress;
    QString ipHost;


};
#endif // NETDISKAPP_H
