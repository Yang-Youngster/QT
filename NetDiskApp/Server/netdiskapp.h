#ifndef NETDISKAPP_H
#define NETDISKAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class NetdiskApp; }
QT_END_NAMESPACE

class NetdiskApp : public QMainWindow
{
    Q_OBJECT

    //公开的变量或者函数
public:
    NetdiskApp(QWidget *parent = nullptr);
    ~NetdiskApp();
    void config();

private:
    Ui::NetdiskApp *ui;
    QString ipAdress;
    QString ipHost;
};
#endif // NETDISKAPP_H
