#include "client.h"
#include "ui_client.h"
/***
 *  主要负责 客户端 --> 服务端
 *
 *  author: LuoYang
 *  肥肠教主
 *  date: 2024.10.01
*/
client::client(QWidget *parent): QWidget(parent), ui(new Ui::client)
{
    ui->setupUi(this);
    config();
    //连接服务器
    connect(&my_tcp_scoket,SIGNAL(connected()),this,SLOT(showConnected()));
    //等待指令处理业务逻辑
    connect(&my_tcp_scoket,SIGNAL(readyRead()),this,SLOT(handleReceived()));



}
client::~client()
{
    delete ui;
}
void client::config()
{
    //加载配置文件
    QFile file(":/client.config");
    if(file.open(QIODevice::ReadOnly))
    {
       QByteArray byteData=file.readAll();
       QString data=byteData.toStdString().c_str();
       data=data.replace("\r","");
       data=data.replace("\n","-");
       QList<QString> datalist= data.split("-");
       QString ipadddr=datalist.at(0);
       QString ipHost=datalist.at(1);
       qDebug() << "IP地址为：" << ipadddr << "端口为：" << ipHost;
       file.close();
    }
    else
    {
       QMessageBox::critical(this,"open config","open config failed");
    }
}
/***
 *
 * 功能描述：连接提示
 * 函数参数：void
 */
void showConnected()
{
     QMessageBox::information(nullptr, "温馨提示", "<html><body style='font-size:16px;color:blue;'><p>这是一个重要的信息提示。</p><p>请仔细阅读并根据提示操作。</p></body></html>");
}
/***
 *
 * 功能描述：处理传输的指令
 * 函数参数：void
 */
void handleReceived()
{

}






