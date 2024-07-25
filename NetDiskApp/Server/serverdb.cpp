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
    //设立连接的IP
    conn.setHostName("localhost");
    //设立连接的SQL名称
    conn.setDatabaseName("D:\\QT_Code\\NetDiskApp\\SQL\\serverdb.db");
    //判断是否存在响应的表结构
    QSqlQuery query;
    if(conn.open())
    {
        if(isTableExist(query,"userinfo"))
        {
            //表不存在就创建


        }

    }
    else
    {
        //连接失败异常

    }
}
bool OpenDB::isTableExist(QSqlQuery& query, QString tableName) {
    QString sql = QString("select 1 from sqlite_master where type='table' and name='%1'").arg(tableName);
    query.exec(sql);
    return query.next();
}
