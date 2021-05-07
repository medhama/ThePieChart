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
    query.prepare("select * from Employee");
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

int Employee::nb_jours(int y,int m,int d)
{
    return y*365+m*30+d;
}

void Employee ::get_date(int*y,int*m,int*d)
{
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    *y=now->tm_year + 1900;
    *m=now->tm_mon + 1;
    *d=now->tm_mday;

}
QString Employee::SET_Date(int*y,int*m,int*d)
{
    //QString mp=QString::number(*m);
    QString mp;
    QString yp=QString::number(*y);
    QString dp=QString::number(*d);
    switch (*m)
    {
    case 1:
        mp="JAN";
        break;
    case 2:
        mp="FEB";
        break;
    case 3:
        mp="MAR";
        break;
    case 4:
        mp="APR";
        break;
    case 5:
        mp="MAY";
        break;
    case 6:
        mp="JUN";
        break;
    case 7:
        mp="JUL";
        break;
    case 8:
        mp="AUG";
        break;
    case 9:
        mp="SEP";
        break;
    case 10:
        mp="OCT";
        break;
    case 11:
        mp="NOV";
        break;
    case 12:
        mp="DEC";
        break;
    }
    QString DATE=dp+"-"+mp+"-"+yp;
    return  DATE;

}

