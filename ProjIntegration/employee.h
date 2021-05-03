#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QMessageBox>
#include <QDebug>
#include <QListView>

class Employee
{
protected:
    int phoneNumber;
    float salary;
    QString id,firstName,lastName,sex,adresse,birthDate,hireDate,jobTitle,email;


public:
    //Constructors
    Employee();
    Employee(int,float,QString,QString,QString,QString,QString,QString,QString,QString,QString);

    //Getters
    int getPhoneNumber(){return phoneNumber;};
    float getSalary(){return salary;};
    QString getId(){return id;};
    QString getFirstName(){return firstName;};
    QString getLastName(){return lastName;};
    QString getSex(){return sex;};
    QString getAdresse(){return adresse;};
    QString getBirthDate(){return birthDate;};
    QString getJobTitle(){return jobTitle;};
    QString getEmail(){return email;};

    //Setters
    void setPhoneNumber(int newPhoneNumber){phoneNumber=newPhoneNumber;};
    void setSalary(float newSalary){salary=newSalary;};
    void setId(QString newId){id=newId;};
    void setFirstName(QString newFirstName){firstName=newFirstName;};
    void setLastName(QString newLastName){lastName=newLastName;};
    void setSex(QString newSex){sex=newSex;};
    void setAdresse(QString newAdresse){adresse=newAdresse;};
    void setBirthDate(QString newBirthDate){birthDate=newBirthDate;};
    void setHireDate(QString newHireDate){hireDate=newHireDate;};
    void setJobTitle(QString newJobTitle){jobTitle=newJobTitle;};
    void setEmail(QString newEmail){email=newEmail;};

    //Methods
    bool create();
    QSqlQuery read(QString);
    bool Update();
    bool Delete(QString);
    QSqlQueryModel * loadData();
    QSqlQueryModel * search(QString);
    bool searchID(QString);

    void get_date(int*y,int*m,int*d);
    int nb_jours(int y,int m,int d);
    QString SET_Date(int*y,int*m,int*d);


};

#endif // EMPLOYEE_H
