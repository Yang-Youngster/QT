#include "serverdb.h"

OpenDB::OpenDB(QObject *parent) : QObject(parent)
{
    //获取初始化连接对象
    conn = QSqlDatabase::addDatabase("QSQLITE");
}
//生成实例
OpenDB& OpenDB::getInstance()
{
    static OpenDB temp;
    return temp;
}
//初始化数据库
void OpenDB::init()
{
    conn.setHostName("localhost");
    isFileExist("D:\\QT_Code\\NetDiskApp\\SQL\\serverdb.db"); //不存在，创建文件
    conn.setDatabaseName("D:\\QT_Code\\NetDiskApp\\SQL\\serverdb.db");
    //判断是否存在响应的表结构
    QSqlQuery query;
    if(conn.open())
    {
        if(isTableExist(query,"UserInfo"))
        {
           QString createTable="CREATE TABLE UserInfo(id INT PRIMARY KEY  NOT NULL, name TEXT NOT NULL, pwd TEXT  NOT NULL,online INT DEFAULT 0 );";
           query.exec(createTable);
        }
        query.exec("select * from UserInfo");
        while(query.next())
        {
            QString data = QString("%1,%2,%3").arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString());
            qDebug() << data;
        }
    }
    else
    {
      //连接失败异常
      QMessageBox::critical(NULL,"打开数据库","打开数据库失败");
    }
}
// 析构函数-对象销毁前使用
OpenDB::~OpenDB()
{
    conn.close();
}
//处理下线操作
bool OpenDB::handleOffline(QString clientName)
{
    //更改其中状态
    QString sql =QString("UPDATE usrInfo set online=0 WHERE name=\'%1\'").arg(clientName);
    QSqlQuery query;
    return  query.exec(sql);
}
bool OpenDB::isTableExist(QSqlQuery& query, QString tableName) {
    QString sql = QString("select 1 from sqlite_master where type='table' and name=\'%1\'").arg(tableName);
    query.exec(sql);
    return query.next();
}
void OpenDB::isFileExist(QString filename)
{
    QFile file(filename);
    if(!file.exists())
    {
        //如果不存在会自动创建
       qDebug() << "文件不存在，开始创建……" ;
       file.open(QIODevice::ReadWrite);
       file.close();
       qDebug() << "创建完成" ;
    }
}
