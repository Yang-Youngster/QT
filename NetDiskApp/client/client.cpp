#include "client.h"
#include "ui_client.h"
#include "protocol.h"
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
    connect(&tcp_scoket,SIGNAL(connected()),this,SLOT(showConnected()));
    //等待指令处理业务逻辑
    connect(&tcp_scoket,SIGNAL(readyRead()),this,SLOT(handleReceived()));

    //连接服务器
    tcp_scoket.connectToHost(QHostAddress(ipadddr),ipHost);
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

       ipadddr=datalist.at(0);

       ipHost=datalist.at(1).toUShort();
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

//login 信号槽
void client::on_login_clicked()
{
    //获取信息
    QString username=ui->account->text();
    QString password=ui->password->text();

    if(!username.isNull()&& !password.isNull())
    {
        //更新当前用户名
        clientName=username;
        //将信息传送给服务端
        PDU *pdu=mkPDU(0);
        pdu->uiMsgType=ENUM_MSG_TYPE_LOGIN_REQUEST;

        //size_t msgLength =std::min(sizeof(PDU)-1,username.length());
        //可能出现字符串溢出情况
        strncpy(pdu->caData,username.toStdString().c_str(),32);
        strncpy(pdu->caData+32,password.toStdString().c_str(),32);
        //写入函数
        tcp_scoket.write((char*)pdu,pdu->uiPDULen);
    }
    else
    {
           QMessageBox::information(nullptr,"Note","输入账号和密码错误！");
    }
}
