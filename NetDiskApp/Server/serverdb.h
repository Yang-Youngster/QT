#ifndef SERVERDB_H
#define SERVERDB_H
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>
#include <QtDebug>
#include <QMessageBox>

class OpenDB : public QObject
{
    Q_OBJECT
public:
    explicit OpenDB(QObject *parent=nullptr);
    static OpenDB &getInstance();
    void init();
    bool isTableExist(QSqlQuery& query, QString tableName);
    void isFileExist(QString filename);
    //账号下线需要进行对数据库的状态进行更改
    void handleOffline();




    ~OpenDB();
private:
    QSqlDatabase conn;
};

#endif // SERVERDB_H
