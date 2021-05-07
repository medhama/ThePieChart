#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "notif.h"
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>
#include <QObject>
#include <QSqlTableModel>
#include <QTextStream>

#include <QVideoWidget>

#include <QMediaPlayer>

#include "videoplayer.h"
#include"historique1.h"
#include "chatconnection.h"
#include "MainWindowvideo.h"
#include "clientaff.h"
#include "gestions.h"
#include "gestionlivraisons.h"
#include "gestioneventpromo.h"


//hello
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadData();

    //Employees List
    ui->listView->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->listView, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(showContextMenu(QPoint)));

    //wa9et
    QTimer::singleShot(10 * 1000, this, SLOT(showInformation()));

    //Time
    QTimer *timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();

    //Place Holder
    ui->idEdit->setPlaceholderText("  Entrer l'ID");
    ui->idEdit_2->setPlaceholderText("  Entrer l'ID");
    ui->passwordEdit->setPlaceholderText("  Entrer Le Mot de passe");
    ui->passwordEdit_2->setPlaceholderText("  Entrer Le Mot de passe");
    ui->passwordConfirmationEdit->setPlaceholderText("  Réecrirer Le Mot de passe");
    ui->newPasswordLineEdit->setPlaceholderText(" Ecrire le nouveau mot de passe");
    ui->confirmPasswordLineEdit->setPlaceholderText(" Confirmer le mot de pase");
    ui->searchLineEdit->setPlaceholderText(" Recherche par l'iD");
    //End Place Holder


    //Controle De saisie
    ui->idEdit->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9]+")));
    ui->idEdit_2->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9]+")));
    ui->passwordEdit->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9]+")));
    ui->passwordEdit_2->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9]+")));
    ui->adressLineEdit->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9]+")));
    ui->salaryLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+")));
    ui->phoneNumberLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]{8}")));
    ui->salaryLineEdit_2->setValidator(new QRegExpValidator(QRegExp("[0-9]")));
    ui->emailLineEdit->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9@.]+")));

    //End Controle de saisie

    //chat
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(returnPressed()));
    //connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(returnPressed()));
    connect(&Clients, SIGNAL(newMessage(QString,QString)),
            this, SLOT(appendMessage(QString,QString)));
    //connect(&Clients, SIGNAL(newParticipant(QString)),
     //       this, SLOT(newParticipant(QString)));
    //connect(&Clients, SIGNAL(participantLeft(QString)),
      //      this, SLOT(participantLeft(QString)));

    myNickName = Clients.nickName();
    newParticipant(myNickName);
    tableFormat.setBorder(0);
    // end chat

   makePolt();

}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::showTime()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    ui->time->setText(time_text);
    ui->time_2->setText(time_text);
    //ui->time_3->setText(time_text);
    //ui->time_4->setText(time_text);
    //ui->time_5->setText(time_text);
    //ui->time_6->setText(time_text);
    //ui->time_7->setText(time_text);


    QDateTime dateTime = QDateTime::currentDateTime();
    QString datetimetext = dateTime.toString("d / M / yyyy");
    ui->date->setText(datetimetext);
    ui->date_2->setText(datetimetext);
    //ui->date_3->setText(datetimetext);
    //ui->date_4->setText(datetimetext);
    //ui->date_5->setText(datetimetext);
    //ui->date_6->setText(datetimetext);
    //ui->date_7->setText(datetimetext);

}
void MainWindow::on_goToSignUpButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_goToSignInButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_logOutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_signUpButton_clicked()
{
    //add sound effect

        QMediaPlayer *player = new QMediaPlayer;
        player->setMedia(QUrl::fromLocalFile("C:/Users/TAHATOU/Documents/ThePieShart/sounds/trashSound.mp3"));
        player->setVolume(50);
        player->play();


    //end sound effect

        bool test=true;

        QString id;
        QString password;
        QString jobTitle;

         if(ui->idEdit_2->text().isEmpty())
         {
             ui->idEdit_2->setStyleSheet("border: 2px solid red;");
             test=false;
         }

         if(ui->passwordEdit_2->text().isEmpty())
         {
             ui->passwordEdit_2->setStyleSheet("border: 2px solid red;");
             test=false;
         }
         if(test)
         {
             id = ui->idEdit_2->text();
             password = ui->passwordEdit_2->text();
             jobTitle = ui->jobTitleBox->currentText();

             Profile P(id,password,jobTitle);

             bool test_2 = P.searchIDSignUp(id);
             if(test_2)
             {
                 bool test_3=P.searchJobTitleSignUp(id,jobTitle);
                 if(test_3)
                 {
                     bool test_4=P.search(id);
                     if(test_4)
                     {
                         //QMessageBox :: warning(nullptr, QObject :: tr("Create Account"),
                           //                         QObject::tr("Error: This Account is Already Exist :("),QMessageBox::Cancel);
                         notif n("Error","This Account is Already Exist ");
                         n.afficher();
                     }
                     else
                     {
                         bool test_5 = P.create();
                         if(test_5)
                         {
                             //QMessageBox :: information(nullptr, QObject :: tr("Create Account"),
                               //                         QObject::tr("Account Created :)"),QMessageBox::Cancel);
                             notif n("Success"," Account created ");
                             n.afficher();
                             ui->stackedWidget->setCurrentIndex(0);
                             ui->idEdit_2->clear();
                             ui->passwordEdit_2->clear();
                         }
                         else
                         {
                             QMessageBox :: warning(nullptr, QObject :: tr("Create Account"),
                                                        QObject::tr("Error: Something Is Wrong :("),QMessageBox::Cancel);
                         }
                     }
                 }
               else
                 {
                     QMessageBox :: warning(nullptr, QObject :: tr("Create Account"),
                                                QObject::tr("Error: Your Job Title Is Wrong :("),QMessageBox::Cancel);
                 }
             }
             else
             {
                 QMessageBox :: warning(nullptr, QObject :: tr("Create Account"),
                                            QObject::tr("Error: This ID Is Not Exist :("),QMessageBox::Cancel);
             }
         }
         else
         {
              QMessageBox::warning(this, tr("Warning"),tr("Please Fill The required Fields Marked In Red."), QMessageBox::Ok);
         }
             foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                          le->clear();}
                     QFile file("C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique/historique.txt");
                     if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                         return;
                     QTextStream cout(&file);
                     QString message2="\n profils a ete ajouté  ";
                     cout << message2;


    }
void MainWindow::on_addEmployeeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_addButton_clicked()
{
    bool test=true;
    int phoneNumber;
    float salary;
    QString id;
    QString firstName;
    QString lastName;
    QString adresse;
    QString birthDate;
    QString hireDate;
    QString jobTitle;
    QString sex="";
    QString email;


    if(ui->idLineEdit_3->text().isEmpty())
    {
        ui->idLineEdit_3->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->phoneNumberLineEdit->text().isEmpty())
    {
        ui->phoneNumberLineEdit->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->salaryLineEdit->text().isEmpty())
    {
        ui->salaryLineEdit->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->firstNameLineEdit->text().isEmpty())
    {
        ui->firstNameLineEdit->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->lastNameLineEdit->text().isEmpty())
    {
        ui->lastNameLineEdit->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->adressLineEdit->text().isEmpty())
    {
        ui->adressLineEdit->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->emailLineEdit->text().isEmpty())
    {
        ui->emailLineEdit->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->maleRadioButton->isChecked())
    {
        sex="male";
    }

    if(ui->femaleRadioButton->isChecked())
    {
        sex="female";
    }

    if(sex == "")
    {
        ui->maleRadioButton->setStyleSheet("border: 2px solid red;");
        ui->femaleRadioButton->setStyleSheet("border: 2px solid red;");
        test=false;
    }


    int yp,mp,dp;

        ui->hireDateEdit->date().getDate(&yp,&mp,&dp);



    if(test)
    {
        Employee EE;
        bool testID = EE.searchID(ui->idLineEdit_3->text());

        if(testID == false)
        {
            phoneNumber = ui->phoneNumberLineEdit->text().toInt();
            salary = ui->salaryLineEdit->text().toFloat();
            id = ui->idLineEdit_3->text();
            firstName = ui->firstNameLineEdit->text();
            lastName = ui->lastNameLineEdit->text();
            adresse = ui->adressLineEdit->text();
            birthDate = ui->birthDateEdit->text();
           // hireDate = ui->hireDateEdit->text();
             hireDate =E.SET_Date(&yp,&mp,&dp);
            email = ui->emailLineEdit->text();
            jobTitle = ui->jobTitleBox_2->currentText();

            Employee E(phoneNumber,salary,id,firstName,lastName,sex,adresse,birthDate,hireDate,jobTitle,email);

            bool test2 = E.create();
            if(test2)
            {
                //QMessageBox :: information(nullptr, QObject :: tr("Add Employee"),
                  //                         QObject::tr("Employee Added"),QMessageBox::Cancel);
                notif n("Success"," Employee Added ");
                n.afficher();


                ui->stackedWidget->setCurrentIndex(4);
                ui->idLineEdit_3->clear();
                ui->firstNameLineEdit->clear();
                ui->lastNameLineEdit->clear();
                ui->adressLineEdit->clear();
                ui->phoneNumberLineEdit->clear();
                ui->salaryLineEdit->clear();
                ui->emailLineEdit->clear();


            }
            else
            {
                //QMessageBox :: warning(nullptr, QObject :: tr("Add Employee"),
                  //                         QObject::tr("Error,Employee Not Added :("),QMessageBox::Cancel);
                notif n("Eroor"," Employee not Added ");
                n.afficher();

            }

        }
        else
        {
            QMessageBox::warning(this, tr("Warning"),tr("This ID is already exist!"), QMessageBox::Ok);
            ui->idLineEdit_3->setStyleSheet("border: 2px solid red;");
        }

    }
    else
    {
         QMessageBox::warning(this, tr("Warning"),tr("Please Fill The required Fields Marked In Red."), QMessageBox::Ok);
    }
}

void MainWindow::loadData()
{
    Employee E;
   // QSqlQueryModel *model=new QSqlQueryModel();

     QSqlQueryModel *model=E.loadData();
    ui->listView->setModel(model);

}

void MainWindow::showContextMenu(const QPoint &pos)
{
    QPoint globalPos = ui->listView->mapToGlobal(pos);

    QMenu myMenu;
    myMenu.addAction("View", this, SLOT(viewEmployee()));
    myMenu.addAction("Edit",  this, SLOT(editEmployee()));
    myMenu.addAction("Delete", this, SLOT(deleteEmployee()));

    myMenu.exec(globalPos);
}
void MainWindow::deleteEmployee()
{

    QModelIndex index = ui->listView->currentIndex();
    QString info = index.data(Qt::DisplayRole).toString();

    Employee E;
    bool test=E.Delete(info);

    if(test)
    {
         loadData();
    }

}

void MainWindow::viewEmployee()
{
    QModelIndex index = ui->listView->currentIndex();
    QString info = index.data(Qt::DisplayRole).toString();
    QSqlQuery view;
    Employee E;
    view=E.read(info);

          ui->viewID_2->setText(view.value(0).toString());
          ui->viewFirstName->setText(view.value(1).toString());
          ui->viewLastName->setText(view.value(2).toString());
         ui->viewBirthDate->setText(view.value(5).toString());
          ui->viewSex->setText(view.value(3).toString());
          ui->viewAdress->setText(view.value(4).toString());
          ui->viewPhoneNumber->setText(view.value(9).toString());
          ui->viewSalary->setText(view.value(8).toString());
         ui->viewHireDate->setDate(view.value(10).toDate());
          ui->viewJobTitle_2->setText(view.value(6).toString());
          ui->viewEmail->setText(view.value(7).toString());


    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::editEmployee()
{
    QModelIndex index = ui->listView->currentIndex();
    QString info = index.data(Qt::DisplayRole).toString();
    QSqlQuery view;
    Employee E;
    view=E.read(info);

          ui->idLineEdit_4->setText(view.value(0).toString());
          ui->firstNameLineEdit_2->setText(view.value(1).toString());
          ui->lastNameLineEdit_2->setText(view.value(2).toString());
          ui->adressLineEdit_2->setText(view.value(4).toString());
          ui->phoneNumberLineEdit_2->setText(view.value(9).toString());
          ui->salaryLineEdit_2->setText(view.value(8).toString());
          ui->emailLineEdit_2->setText(view.value(7).toString());
          if(view.value(3).toString()=="male")
          {
              ui->maleRadioButton_2->setChecked(true);
          }
          else
          {
              ui->femaleRadioButton_2->setChecked(true);
          }


    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_signInButton_clicked()
{
    bool test=true;
    bool test2;

    if(ui->idEdit->text().isEmpty())
    {
        ui->idEdit->setStyleSheet("border: 2px solid red; border-radius:20px;");
        test=false;
    }

    if(ui->passwordEdit->text().isEmpty())
    {
        ui->passwordEdit->setStyleSheet("border: 2px solid red; border-radius:20px;");
        test=false;
    }

    if(test == false)
    {
        QMessageBox::warning(this, tr("Warning"),tr("Please Fill The Required Fields Marked In Red."), QMessageBox::Ok);
    }
    else
    {
        QString id = ui->idEdit->text();

        Profile P;
        test2=P.search(id);
        qDebug() << test2;
        if(test2 == true)
        {
            QSqlQuery view = P.read(id);
            if(view.value(1).toString() == ui->passwordEdit->text())
            {
                 ui->viewID->setText(view.value(0).toString());
                 ui->viewPassword->setText(view.value(1).toString());
                 ui->viewJobTitle->setText(view.value(2).toString());
                 ui->stackedWidget->setCurrentIndex(2);
                 ui->idEdit->clear();
                 ui->passwordEdit->clear();
            }
            else
            {
                QMessageBox::warning(this, tr("Warning"),tr("The password is wrong!"), QMessageBox::Ok);
            }

        }
        else if(test2 == false)
        {
            qDebug() << test2;
            QMessageBox::warning(this, tr("Warning"),tr("Account Not Found!"), QMessageBox::Ok);
        }

    }
}

void MainWindow::on_deleteAccountButton_clicked()
{
    QString info = ui->viewID->text();
    Profile P;
    bool test=P.Delete(info);

    if(test)
    {
         QMessageBox::information(this, tr("Delete Account"),tr("Account Deleted"), QMessageBox::Ok);
         ui->stackedWidget->setCurrentIndex(0);
    }
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                 le->clear();}
            QFile file("C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique/historique.txt");
            if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                return;
            QTextStream cout(&file);
            QString message2="\n profils a ete supprimé  ";
            cout << message2;
}

void MainWindow::on_changeInformationButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_logOutButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_returnButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_addButton_2_clicked()
{
    bool test=true;
    int phoneNumber;
    float salary;
    QString id;
    QString firstName;
    QString lastName;
    QString adresse;
    QString birthDate;
    QString hireDate;
    QString jobTitle;
    QString sex;
    QString email;

    if(ui->idLineEdit_4->text().isEmpty())
    {
        ui->idLineEdit_4->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->phoneNumberLineEdit_2->text().isEmpty())
    {
        ui->phoneNumberLineEdit_2->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->salaryLineEdit_2->text().isEmpty())
    {
        ui->salaryLineEdit_2->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->firstNameLineEdit_2->text().isEmpty())
    {
        ui->firstNameLineEdit_2->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->lastNameLineEdit_2->text().isEmpty())
    {
        ui->lastNameLineEdit_2->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->adressLineEdit_2->text().isEmpty())
    {
        ui->adressLineEdit_2->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->emailLineEdit_2->text().isEmpty())
    {
        ui->emailLineEdit_2->setStyleSheet("border: 2px solid red;");
        test=false;
    }

    if(ui->maleRadioButton_2->isChecked())
    {
        sex="male";
    }

    if(ui->femaleRadioButton_2->isChecked())
    {
        sex="female";
    }

    if(test)
    {
        phoneNumber = ui->phoneNumberLineEdit_2->text().toInt();
        salary = ui->salaryLineEdit_2->text().toFloat();
        id = ui->idLineEdit_4->text();
        firstName = ui->firstNameLineEdit_2->text();
        lastName = ui->lastNameLineEdit_2->text();
        adresse = ui->adressLineEdit_2->text();
        birthDate = ui->birthDateEdit_2->text();
        hireDate = ui->hireDateEdit_2->text();
        jobTitle = ui->jobTitleBox_3->currentText();
        email = ui->emailLineEdit_2->text();


        Employee E(phoneNumber,salary,id,firstName,lastName,sex,adresse,birthDate,hireDate,jobTitle,email);

        bool test2 = E.Update();
        if(test2)
        {
            //QMessageBox :: information(nullptr, QObject :: tr("Update Employee"),
              //                         QObject::tr("Employee Updated"),QMessageBox::Cancel);
            notif n("Success"," Employee Updated ");
            n.afficher();

            ui->idLineEdit_4->clear();
            ui->firstNameLineEdit_2->clear();
            ui->lastNameLineEdit_2->clear();
            ui->adressLineEdit_2->clear();
            ui->phoneNumberLineEdit_2->clear();
            ui->salaryLineEdit_2->clear();
            ui->emailLineEdit_2->clear();


        }
        else
        {
           // QMessageBox :: warning(nullptr, QObject :: tr("Update Employee"),
             //                          QObject::tr("Error,Employee Not Updated :("),QMessageBox::Cancel);
            notif n("Error"," Employee not Added ");
            n.afficher();

        }

    }
    else
    {
         QMessageBox::warning(this, tr("Warning"),tr("Please Fill The required Fields Marked In Red."), QMessageBox::Ok);
    }
}
void MainWindow::on_cancelButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_saveButton_clicked()
{

        bool test=true;
        QString id;
        QString jobTitle;
        QString newPassword;
        QString confirmPassword;

        if(ui->newPasswordLineEdit->text().isEmpty())
        {
            ui->newPasswordLineEdit->setStyleSheet("border: 2px solid red;");
            test=false;
        }

        if(ui->confirmPasswordLineEdit->text().isEmpty())
        {
            ui->confirmPasswordLineEdit->setStyleSheet("border: 2px solid red;");
            test=false;
        }

        if(test)
        {
            id = ui->viewID->text();
            jobTitle = ui->viewJobTitle->text();
            newPassword = ui->newPasswordLineEdit->text();
            confirmPassword = ui->confirmPasswordLineEdit->text();

            if(newPassword == confirmPassword)
            {
                Profile P(id,newPassword,jobTitle);

                bool test2 = P.Update();
                if(test2)
                {
                    //QMessageBox :: information(nullptr, QObject :: tr("Change Password"),
                      //                         QObject::tr("Password Updated :)"),QMessageBox::Cancel);
                    notif n("Success"," Password updated ");
                    n.afficher();

                    QSqlQuery view = P.read(id);
                    ui->viewID->setText(view.value(0).toString());
                    ui->viewPassword->setText(view.value(1).toString());
                    ui->viewJobTitle->setText(view.value(2).toString());
                    ui->stackedWidget->setCurrentIndex(2);
                    ui->newPasswordLineEdit->clear();
                    ui->confirmPasswordLineEdit->clear();
                }
                else
                {
                    QMessageBox :: warning(nullptr, QObject :: tr("Change password"),
                                               QObject::tr("Error: Password Not Updated :("),QMessageBox::Cancel);

                }

            }
            else
            {
                QMessageBox :: warning(nullptr, QObject :: tr("Change password"),
                                           QObject::tr("Error: Those passwords didn't match. Try again. :("),QMessageBox::Cancel);

            }


        }
        else
        {
             QMessageBox::warning(this, tr("Warning"),tr("Please Fill The required Fields Marked In Red."), QMessageBox::Ok);
        }
        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                     le->clear();}
                QFile file("C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique/historique.txt");
                if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                    return;
                QTextStream cout(&file);
                QString message2="\n Mot de passe Modifié  ";
                cout << message2;

    }


void MainWindow::on_searchLineEdit_textChanged(const QString &arg1)
{

        Employee E;
        QString info =arg1;
        QSortFilterProxyModel *proxy = new QSortFilterProxyModel;
        if(info!="")
        {
            proxy->setSourceModel(E.search(info));
            ui->listView->setModel(proxy);
        }
        else
        {
            loadData();
        }
    }





void MainWindow::on_excel_clicked()
{
    QListView *table;
                      table = ui->listView;
                      QString filters("mdb files (*.csv);;All files (*.*)");
                      QString defaultFilter("mdb files (*.csv)");
                      QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                         filters, &defaultFilter);
                      QFile file(fileName);
                      QAbstractItemModel *model =  table->model();
                      if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                          QTextStream data(&file);
                          QStringList strList;
                          for (int i = 0; i < model->columnCount(); i++) {
                              if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                                  strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                              else
                                  strList.append("");
                          }
                          data << strList.join(";") << "\n";
                          for (int i = 0; i < model->rowCount(); i++) {
                              strList.clear();
                              for (int j = 0; j < model->columnCount(); j++) {
                                  if (model->data(model->index(i, j)).toString().length() > 0)
                                      strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                                  else
                                      strList.append("");
                              }
                              data << strList.join(";") + "\n";
                          }
                          file.close();
                          QMessageBox::information(this,"Exporter To  export","Exporter En  export Avec Succées ");
}
                      }

void MainWindow::on_cancelButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}



void MainWindow::on_logOutButton_5_clicked()
{
   ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_logOutButton_4_clicked()
{
ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_cancelButton_2_clicked()
{
 ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_printButtom_clicked()
{
        QPlainTextEdit text;
        text.setStyleSheet("QPlainTextEdit{color: #ffff00; background-color: #303030;");
        QTextDocument *doc = text.document();
        QFont font = doc->defaultFont();
        font.setBold(true);
        font.setFamily("Arial");
        font.setPixelSize(20);
        doc->setDefaultFont(font);
        text.appendPlainText("                                        ThePieShart Company");
        text.appendPlainText("");
        text.appendPlainText("");
        text.appendPlainText("");
        text.appendPlainText("");
        text.appendPlainText("");
        text.appendPlainText("Employee information:");
        text.appendPlainText("");
        text.appendPlainText("ID: "+ui->viewID_2->text()+"");
        text.appendPlainText("First Name: "+ui->viewFirstName->text()+"");
        text.appendPlainText("Last Name: "+ui->viewLastName->text()+"");
        text.appendPlainText("Birth Date: "+ui->viewBirthDate->text()+"");
        text.appendPlainText("Sex: "+ui->viewSex->text()+"");
        text.appendPlainText("Email: "+ui->viewEmail->text()+"");
        text.appendPlainText("Address: "+ui->viewAdress->text()+"");
        text.appendPlainText("Phone Number: "+ui->viewPhoneNumber->text()+"");
        text.appendPlainText("Salary: "+ui->viewSalary->text()+"");
        text.appendPlainText("Hire Date: "+ui->viewHireDate->text()+"");
        text.appendPlainText("Job Title: "+ui->viewJobTitle_2->text()+"");

        QPrinter printer;
        printer.setPrinterName("Print");
        QPrintDialog dlg(&printer,this);
        if (dlg.exec() == QDialog::Rejected)
        {
            return;
        }
        text.print(&printer);

    }


//arduino

void MainWindow::makePolt()
{

       QLinearGradient gradient(0, 0, 0, 400);
       gradient.setColorAt(0, QColor(90, 90, 90));
       gradient.setColorAt(0.38, QColor(105, 105, 105));
       gradient.setColorAt(1, QColor(70, 70, 70));
       ui->customPlot->setBackground(QBrush(gradient));


       QCPBars *regen = new QCPBars(ui->customPlot->xAxis,ui-> customPlot->yAxis);

       regen->setAntialiased(false);

       regen->setStackingGap(1);




       regen->setName("Nombre de employee par rapport au role ");
       regen->setPen(QPen(QColor(0, 168, 140).lighter(130)));
       regen->setBrush(QColor(0, 168, 140));

       QVector<double> ticks;
       QVector<QString> labels;






       ticks << 1<<2<<3;

      labels <<"Agent RH"<<"Employee de depot"<<"Employee de stock";
       QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
       textTicker->addTicks(ticks, labels);
       ui->customPlot->xAxis->setTicker(textTicker);
       ui->customPlot->xAxis->setTickLabelRotation(60);
       ui->customPlot->xAxis->setSubTicks(false);
       ui->customPlot->xAxis->setTickLength(0, 3);
       ui->customPlot->xAxis->setRange(0, 8);
       ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
       ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
       ui->customPlot->xAxis->grid()->setVisible(true);
       ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
       ui->customPlot->xAxis->setTickLabelColor(Qt::white);
       ui->customPlot->xAxis->setLabelColor(Qt::white);


       ui->customPlot->yAxis->setRange(0,10);
       ui->customPlot->yAxis->setPadding(10); // a bit more space to the left border
       ui->customPlot->yAxis->setLabel("Nombre de employee");
       ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
       ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
       ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
       ui->customPlot->yAxis->grid()->setSubGridVisible(true);
       ui->customPlot->yAxis->setTickLabelColor(Qt::white);
       ui->customPlot->yAxis->setLabelColor(Qt::white);
       ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
       ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));


       QVector<double> regenData;
       int n1=0;
       int n2=0;
      int n3=0;

           QSqlQuery q1("select count(*) from Employee where jobTitle='Agent RH'");
           while (q1.next())
           {
               n1 = q1.value(0).toInt();
               qDebug()<<"Nombre Employee : "<<n1<<endl;
           }

           QSqlQuery q2("select count(*) from Employee where jobTitle='Employee de depot'");
           while (q2.next())
           {
               n2 = q2.value(0).toInt();
               qDebug()<<"Nombre Employee : "<<n2<<endl;
           }

           QSqlQuery q3("select count(*) from Employee where jobTitle='Employee de stock'");
           while (q3.next())
           {
                n3 = q3.value(0).toInt();
                qDebug()<<"Nombre Employee  : "<<n3<<endl;
           }




       regenData << n1<<n2<<n3;
       regen->setData(ticks, regenData);


       ui->customPlot->legend->setVisible(true);
       ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
       ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
       ui->customPlot->legend->setBorderPen(Qt::NoPen);
       QFont legendFont = font();
       legendFont.setPointSize(10);
       ui->customPlot->legend->setFont(legendFont);
       ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);


}

void MainWindow::on_stat_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_yearswork_clicked()
{
    ui->label_day->clear();
    ui->label_moi->clear();
    ui->label_year->clear();
    ui->label_d->clear();
    ui->label_m->clear();
    ui->label_y->clear();
    int y,m,d,yp,mp,dp;
    double ydiff=0,mdiff=0,daydiff=0;
    ui->viewHireDate->date().getDate(&yp,&mp,&dp);
    E.get_date(&y,&m,&d);
    ydiff = double (y)-(yp) ;
    mdiff=mp-m;
    mdiff=fabs(mdiff);
    daydiff=dp-d;
    daydiff=fabs(daydiff);
    long n1=E.nb_jours(yp,mp,dp);
    long n2=E.nb_jours(y,m,d);
    if(n2-n1 >= 0)
    {
        ui->label_day->setNum(daydiff);
        ui->label_moi->setNum(mdiff);
        ui->label_year->setNum(ydiff);
        ui->label_d->setText("jours");
        ui->label_m->setText("mois");
        ui->label_y->setText("annes");
    }

}


void MainWindow::on_logOutButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_logOutButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
//HISTORIQUE

void MainWindow::ouvriremploye()
{
    QFile file ("C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique/historique.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0,"info",file.errorString());
    }
    QTextStream in (&file);
   ui->texthistor->setText(in.readAll());

}

void MainWindow::on_pushButtonHisto_clicked()
{
    QString searchString = ui->historique->text();
       QTextDocument *document = ui->texthistor->document();
      ouvriremploye();
       bool found = false;

       document->undo();

       if (searchString.isEmpty()) {
           QMessageBox::information(this, tr("Empty Search Field"),
                                    tr("The search field is empty. "
                                       "Please enter a word and click Find."));
       } else {
           QTextCursor highlightCursor(document);
           QTextCursor cursor(document);

           cursor.beginEditBlock();


           QTextCharFormat plainFormat(highlightCursor.charFormat());
           QTextCharFormat colorFormat = plainFormat;
           colorFormat.setForeground(Qt::red);

           while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
               highlightCursor = document->find(searchString, highlightCursor,
                                                QTextDocument::FindWholeWords);

               if (!highlightCursor.isNull()) {
                   found = true;
                   highlightCursor.movePosition(QTextCursor::WordRight,
                                                QTextCursor::KeepAnchor);
                   highlightCursor.mergeCharFormat(colorFormat);

               }
           }


           cursor.endEditBlock();

       }
}

void MainWindow::on_stat_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_returnButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
//chat
void MainWindow::appendMessage(const QString &from, const QString &message)
{
    if (from.isEmpty() || message.isEmpty())
        return;

    QTextCursor cursor(ui->textEdit->textCursor());
    cursor.movePosition(QTextCursor::End);
    QTextTable *table = cursor.insertTable(1, 2, tableFormat);
    table->cellAt(0, 0).firstCursorPosition().insertText('<' + from + "> ");
    table->cellAt(0, 1).firstCursorPosition().insertText(message);
    QScrollBar *bar = ui->textEdit->verticalScrollBar();
    bar->setValue(bar->maximum());
}

void MainWindow::returnPressed()
{
    QString text = ui->lineEdit->text();
    if (text.isEmpty())
        return;

    if (text.startsWith(QChar('/'))) {
        QColor color = ui->textEdit->textColor();
        ui->textEdit->setTextColor(Qt::red);
        ui->textEdit->append(tr("! Unknown command: %1")
                         .arg(text.left(text.indexOf(' '))));
        ui->textEdit->setTextColor(color);
    } else {
        Clients.sendMessage(text);
        appendMessage(myNickName, text);
    }

    ui->lineEdit->clear();
}

void MainWindow::newParticipant(const QString &nick)
{
    if (nick.isEmpty())
        return;

    QColor color = ui->textEdit->textColor();
    ui->textEdit->setTextColor(Qt::gray);
    ui->textEdit->append(tr("* %1 has joined").arg(nick));
    ui->textEdit->setTextColor(color);
    ui->listWidget->addItem(nick);
}

void MainWindow::participantLeft(const QString &nick)
{
    if (nick.isEmpty())
        return;

    QList<QListWidgetItem *> items = ui->listWidget->findItems(nick,
                                                           Qt::MatchExactly);
    if (items.isEmpty())
        return;

    delete items.at(0);
    QColor color = ui->textEdit->textColor();
    ui->textEdit->setTextColor(Qt::gray);
    ui->textEdit->append(tr("* %1 has left").arg(nick));
    ui->textEdit->setTextColor(color);
}

void MainWindow::on_chatt_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_video_clicked()
{
    video=new MainWindowvideo(this);
         video->show();
}

void MainWindow::on_signInButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_ClientProduit_clicked()
{
    ClientAff d;
    d.exec();
}

void MainWindow::on_StockFourni_clicked()
{
    gestions G;
    G.exec();

}

void MainWindow::on_CommandeLivraison_clicked()
{
    GestionLivraisons F;
    F.exec();
}

void MainWindow::on_StockFourni_2_clicked()
{
    GestionEventPromo FG;
    FG.exec();

}







