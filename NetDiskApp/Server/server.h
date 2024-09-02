#ifndef SERVER_H
#define SERVER_H
#include <QWidget>
#include <QFile>
#include <QtDebug>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui {
  class server;
}
QT_END_NAMESPACE

class server : public QWidget
{
    Q_OBJECT
public:
    server(QWidget *parent = nullptr);
    ~server();
    void config();

private:
    Ui::server *ui;

    //其他函数通信
    QString ipAdress;
    QString ipHost;
};
#endif // NETDISKAPP_H
