#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QDialog>
#include <QTimer>
#include <QDateTime>
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
#include <QPlainTextEdit>
#include <QPrinter>
#include <QPrintDialog>
#include <QPlainTextEdit>
#include "employee.h"
#include "profile.h"
#include <QDate>
#include <QMediaPlayer>
#include <QVideoWidget>
#include "Clients.h"
#include "MainWindowvideo.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void appendMessage(const QString &from, const QString &message);

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

    void on_cancelButton_clicked();

    void on_saveButton_clicked();

    void on_searchLineEdit_textChanged(const QString &arg1);

    void on_excel_clicked();

    void on_cancelButton_3_clicked();

    void on_logOutButton_5_clicked();

    void on_logOutButton_4_clicked();

    void on_cancelButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_printButtom_clicked();


    void showTime();

    void makePolt();

    void on_stat_clicked();



    void on_yearswork_clicked();


    void on_logOutButton_8_clicked();

    void on_logOutButton_9_clicked();
    //historique
void ouvriremploye();

void on_pushButtonHisto_clicked();

void on_stat_2_clicked();

void on_returnButton_2_clicked();
void newParticipant(const QString &nick);
void participantLeft(const QString &nick);
void returnPressed();

void on_chatt_clicked();

void on_video_clicked();

void on_signInButton_2_clicked();

void on_ClientProduit_clicked();

void on_StockFourni_clicked();

void on_CommandeLivraison_clicked();

void on_StockFourni_2_clicked();

private:
    Ui::MainWindow *ui;
    Employee E;
    QByteArray data;
    QMediaPlayer* player;
        QVideoWidget* vw;
        Clients Clients;
        QString myNickName;
        QTextTableFormat tableFormat;
        MainWindowvideo* video;
};
#endif // MAINWINDOW_H
