#include "client.h"
#include "ui_client.h"

client::client(QWidget *parent): QWidget(parent), ui(new Ui::client)
{
    ui->setupUi(this);
    config();
}
client::~client()
{
    delete ui;
}

void client::config()
{
    QFile file(":/client.config");
    if(file.open(QIODevice::ReadOnly))
    {
       QByteArray byteData=file.readAll();
       QString data=byteData.toStdString().c_str();
       data=data.replace("\n","-");
       QList<QString> datalist= data.split("-");
       QString ipadddr=datalist.at(0);
       QString ipHost=datalist.at(1);

    }
}
