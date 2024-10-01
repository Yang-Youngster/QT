#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include <QTcpSocket>
#include <QFile>
#include <QMessageBox>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class client; }
QT_END_NAMESPACE

class client : public QWidget
{
    Q_OBJECT

public:
    client(QWidget *parent = nullptr);
    ~client();
    void config();

public slots:
   void showConnected();

private slots:
   void handleReceived();


private:
    Ui::client *ui;

    QTcpSocket my_tcp_scoket;


};
#endif // CLIENT_H
