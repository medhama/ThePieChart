#include "employee.h"

Employee::Employee()
{

}

Employee::Employee(int phoneNumber,float salary,QString id,QString firstName,QString lastName,QString sex,QString adresse,QString birthDate,QString hireDate,QString jobTitle,QString email)
{
    this->id=id;
    this->phoneNumber=phoneNumber;
    this->salary=salary;
    this->firstName=firstName;
    this->lastName=lastName;
    this->sex=sex;
    this->adresse=adresse;
    this->birthDate=birthDate;
    this->hireDate=hireDate;
    this->jobTitle=jobTitle;
    this->email=email;
}

bool Employee::create()
{
    QSqlQuery query;
    QString sphoneNumber=QString::number(phoneNumber);
    QString ssalary=QString::number(salary);
    query.prepare("INSERT INTO Employee (id,firstName,lastName,sex,birthDate,hireDate,adresse,phoneNumber,salary,jobTitle,email)" "VALUES (:id,:firstName,:lastName,:sex,:birthDate,:hireDate,:adresse,:phoneNumber,:salary,:jobTitle,:email)");
    query.bindValue(":id",id);
    query.bindValue(":phoneNumber",sphoneNumber);
    query.bindValue(":salary",ssalary);
    query.bindValue(":firstName",firstName);
    query.bindValue(":lastName",lastName);
    query.bindValue(":sex",sex);
    query.bindValue(":adresse",adresse);
    query.bindValue(":birthDate",birthDate);
    query.bindValue(":hireDate",hireDate);
    query.bindValue(":jobTitle",jobTitle);
    query.bindValue(":email",email);

    return query.exec();
}

QSqlQuery Employee::read(QString info)
{
    QSqlQuery query;
    query.prepare("select * from Employee where id='"+info+"'");
    query.exec();
    query.next();

    return query;

}

bool Employee::Delete(QString info)
{
    QSqlQuery query;
    query.prepare("Delete from Employee where id='"+info+"'");
    return query.exec();
}

QSqlQueryModel * Employee::loadData()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select id from Employee");
    query.exec();
    model->setQuery(query);
    return model;
}

bool Employee::Update()
{
    QSqlQuery query;

    QString sphoneNumber=QString::number(phoneNumber);
    QString ssalary=QString::number(salary);

    query.prepare("update Employee set id='"+id+"',firstName='"+firstName+"',lastName='"+lastName+"',sex='"+sex+"',birthDate='"+birthDate+"',hireDate='"+hireDate+"',adresse='"+adresse+"',phoneNumber='"+sphoneNumber+"',salary='"+ssalary+"',jobTitle='"+jobTitle+"',email='"+email+"' where id='"+id+"'");

    //Creation des variables liées
    query.bindValue(":id",id);
    query.bindValue(":phoneNumber",sphoneNumber);
    query.bindValue(":salary",ssalary);
    query.bindValue(":firstName",firstName);
    query.bindValue(":lastName",lastName);
    query.bindValue(":sex",sex);
    query.bindValue(":adresse",adresse);
    query.bindValue(":birthDate",birthDate);
    query.bindValue(":hireDate",hireDate);
    query.bindValue(":jobTitle",jobTitle);
    query.bindValue(":email",email);

    //exec() envoie la requete pour l'executer
    return query.exec();
}

QSqlQueryModel * Employee::search(QString info)
{
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select id from Employee where id='"+info+"'");
    query.exec();
    model->setQuery(query);
    return model;
}



bool Employee::searchID(QString info)
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



