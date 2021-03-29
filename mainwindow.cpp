#include "mainwindow.h"
#include "ui_mainwindow.h"
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

    //Place Holder
    ui->idEdit->setPlaceholderText("  Entrer l'ID");
    ui->idEdit_2->setPlaceholderText("  Entrer l'ID");
    ui->passwordEdit->setPlaceholderText("  Entrer Le Mot de passe");
    ui->passwordEdit_2->setPlaceholderText("  Entrer Le Mot de passe");
    ui->passwordConfirmationEdit->setPlaceholderText("  Réecrirer Le Mot de passe");
    ui->newPasswordLineEdit->setPlaceholderText(" Ecrire le nouveau mot de passe");
    ui->confirmPasswordLineEdit->setPlaceholderText(" Confirmer le mot de pase");
    ui->searchLineEdit->setPlaceholderText(" Recherche par l'iD");

    //Time
   // QTimer::singleShot(10 * 1000, this, SLOT(showInformation()));
    //QTimer *timer=new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    //timer->start();


}
MainWindow::~MainWindow()
{
    delete ui;
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
                         QMessageBox :: warning(nullptr, QObject :: tr("Create Account"),
                                                    QObject::tr("Error: This Account is Already Exist :("),QMessageBox::Cancel);
                     }
                     else
                     {
                         bool test_5 = P.create();
                         if(test_5)
                         {
                             QMessageBox :: information(nullptr, QObject :: tr("Create Account"),
                                                        QObject::tr("Account Created :)"),QMessageBox::Cancel);
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
            hireDate = ui->hireDateEdit->text();
            email = ui->emailLineEdit->text();
            jobTitle = ui->jobTitleBox_2->currentText();

            Employee E(phoneNumber,salary,id,firstName,lastName,sex,adresse,birthDate,hireDate,jobTitle,email);

            bool test2 = E.create();
            if(test2)
            {
                QMessageBox :: information(nullptr, QObject :: tr("Add Employee"),
                                           QObject::tr("Employee Added"),QMessageBox::Cancel);


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
                QMessageBox :: warning(nullptr, QObject :: tr("Add Employee"),
                                           QObject::tr("Error,Employee Not Added :("),QMessageBox::Cancel);

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
    QSqlQueryModel *model=new QSqlQueryModel();
    model=E.loadData();
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
          ui->viewHireDate->setText(view.value(10).toString());
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
          ui->adressLineEdit_2->setText(view.value(8).toString());
          ui->phoneNumberLineEdit_2->setText(view.value(9).toString());
          ui->salaryLineEdit_2->setText(view.value(4).toString());
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
            QMessageBox :: information(nullptr, QObject :: tr("Update Employee"),
                                       QObject::tr("Employee Updated"),QMessageBox::Cancel);

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
            QMessageBox :: warning(nullptr, QObject :: tr("Update Employee"),
                                       QObject::tr("Error,Employee Not Updated :("),QMessageBox::Cancel);

        }

    }
    else
    {
         QMessageBox::warning(this, tr("Warning"),tr("Please Fill The required Fields Marked In Red."), QMessageBox::Ok);
    }
}
