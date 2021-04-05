#ifndef CONNECT_H
#define CONNECT_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
//CHANGEdb

class Connect
{
private:
    QSqlDatabase db;

public:
    Connect();
    bool openConnection();
    void closeConnection();
};

#endif // CONNECT_H
