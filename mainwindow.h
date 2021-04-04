#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QDialog>
#include <QListWidgetItem>
#include <QMenu>
#include <QHeaderView>
#include <QDebug>
#include <QWidget>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QPlainTextEdit>
#include <QString>
#include <QSortFilterProxyModel>
#include<QtMultimedia/QMediaPlayer>
#include<QTextTable>
#include<QScrollBar>
#include "employee.h"
#include "profile.h"

//Update Excel


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_goToSignUpButton_clicked();

    void on_goToSignInButton_clicked();

    void on_logOutButton_clicked();

    void on_signUpButton_clicked();

    void on_addEmployeeButton_clicked();

    void loadData();

    void on_addButton_clicked();

    void showContextMenu(const QPoint&);
    void deleteEmployee();
    void viewEmployee();
    void editEmployee();

    void on_signInButton_clicked();

    void on_deleteAccountButton_clicked();

    void on_changeInformationButton_clicked();

    void on_logOutButton_3_clicked();

    void on_returnButton_clicked();

    void on_addButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
