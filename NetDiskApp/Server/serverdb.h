#ifndef SERVERDB_H
#define SERVERDB_H
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class OpenDB : public QObject
{
    Q_OBJECT
public:
    explicit OpenDB(QObject *parent=nullptr);

    static OpenDB &getInstance();
    void init();
    bool isTableExist(QSqlQuery& query, QString tableName);

    ~OpenDB();

private:
    QSqlDatabase conn;
};

#endif // SERVERDB_H
