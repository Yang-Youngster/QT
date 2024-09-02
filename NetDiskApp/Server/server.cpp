#include "server.h"
#include "ui_server.h"
#include "socketcore.h"

server::server(QWidget *parent): QWidget(parent), ui(new Ui::server){
    ui->setupUi(this);
    config();   //加载配置文件
}
//构析函数：用于该类的最后的生命周期，用于回收
server::~server()
{
    delete ui;
}
//配置服务端的加载文件
void server :: config()
{
    QFile file(":/db.config");
    if(file.open(QIODevice::ReadOnly))
    {
        QByteArray localReadAll = file.readAll();
        QString buffer =localReadAll.toStdString().c_str();
        buffer.replace("\r\n","-");
        QStringList ipList=buffer.split("-");
//      qDebug() << "显示数据" <<ipList;
        ipAdress =ipList.at(0);
        ipHost=ipList.at(1);
        //组合显示在服务端
        ui->showInfo->setText("服务端地址："+ipAdress + "服务器端口: "+ipHost);

        file.close();
    }
    else
    {
        QMessageBox::critical(this,"初始化配置文件","初始化文件失败！");
    }
}
