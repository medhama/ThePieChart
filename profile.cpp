#include "profile.h"

Profile::Profile()
{

}

Profile::Profile(QString id, QString password, QString jobTitle)
{
    this->id=id;
    this->password=password;
    this->jobTitle=jobTitle;

}

bool Profile::create()
{
    QSqlQuery query;
    query.prepare("INSERT INTO Profile (id,password,jobTitle)" "VALUES (:id,:password,:jobTitle)");
    query.bindValue(":id",id);
    query.bindValue(":password",password);
    query.bindValue(":jobTitle",jobTitle);

    return query.exec();

}

QSqlQuery Profile::read(QString info)
{
    QSqlQuery query;
    query.prepare("select * from Profile where id='"+info+"'");
    query.exec();
    query.next();
    return query;
}

bool Profile::Delete(QString info)
{
    QSqlQuery query;
    query.prepare("Delete from Profile where id='"+info+"'");
    return query.exec();
}

bool Profile::Update()
{
    QSqlQuery query;

    query.prepare("update Profile set id='"+id+"',password='"+password+"',jobTitle='"+jobTitle+"' where id='"+id+"'");

    query.bindValue(":id",id);
    query.bindValue(":password",password);
    query.bindValue(":jobTitle",jobTitle);

    return query.exec();
}

bool Profile::search(QString info)
{
    QSqlQuery query;
    query.prepare("select * from Profile where id='"+info+"'");
    query.exec();
    if(query.next())
    {
        return true;
    }

    return false;
}

bool Profile::searchIDSignUp(QString info)
{
    QSqlQuery query;
    query.prepare("select * from Employee where id='"+info+"'");
    query.exec();
    if(query.next())
    {
        return true;
    }

    return false;
}

bool Profile::searchJobTitleSignUp(QString id,QString jobTitle)
{
    QSqlQuery query;
    query.prepare("select'"+id+"'from Employee where JobTitle='"+jobTitle+"'");
    query.exec();
    if(query.next())
    {
        return true;
    }

    return false;
}



