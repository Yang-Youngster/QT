#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include <QTcpSocket>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QHostAddress>

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


//获取value
public slots:
   void showConnected();


private slots:

   void handleReceived();

   void on_login_clicked();

private:
    Ui::client *ui;
    QTcpSocket tcp_scoket;
    QString clientName;
    QString ipadddr;
    quint16 ipHost;



};
#endif // CLIENT_H
