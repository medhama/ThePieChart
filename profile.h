#ifndef PROFILE_H
#define PROFILE_H
#include "QString"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QMessageBox>
#include <QDebug>

class Profile
{

protected:

    QString id,password,jobTitle;


public:
    //Constructors
    Profile();
    Profile(QString,QString,QString);

    //Getters
    QString getId(){return id;};
    QString getJobTitle(){return jobTitle;};
    QString getPassword(){return password;};

    //Setters
    void setId(QString newId){id=newId;};
    void setJobTitle(QString newJobTitle){jobTitle=newJobTitle;};
    void setPassword(QString newPassword){password=newPassword;};

    //Methods
    bool create();
    QSqlQuery read(QString);
    bool Update();
    bool Delete(QString);
    bool search(QString);
    bool searchIDSignUp(QString);
    bool searchJobTitleSignUp(QString,QString);


};

#endif // CPROFILE_H
