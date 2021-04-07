/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_Date_Debut;
    QPushButton *pb_ajouter;
    QLabel *label_9;
    QLineEdit *le_Date_Fin;
    QGroupBox *groupBox_Nom_event;
    QTableView *tab_etudiant;
    QLineEdit *rechercher_event;
    QPushButton *pb_recherche_event;
    QRadioButton *radioButton_nom_event;
    QRadioButton *radioButton_id_event;
    QLabel *label_23;
    QRadioButton *radioButton_DateDebut_event;
    QRadioButton *radioButton_DateFin_event;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLineEdit *le_id_supp;
    QPushButton *pb_supprimer;
    QGroupBox *groupBox_7;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *le_id_modifier;
    QLineEdit *le_nom_modifier;
    QLineEdit *le_Date_Debut_modifier;
    QPushButton *pb_modifier_event;
    QLabel *label_14;
    QLineEdit *le_Date_Fin_modifier;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_idpro;
    QLineEdit *le_prix_initial;
    QLineEdit *le_prix_final;
    QPushButton *pb_ajouterpro;
    QLabel *label_10;
    QLineEdit *le_date_initiale;
    QLabel *label_15;
    QLineEdit *le_date_finale;
    QLabel *label_16;
    QLineEdit *le_pourcentage;
    QGroupBox *groupBox_5;
    QLabel *label_8;
    QLineEdit *le_id_supp_2;
    QPushButton *pb_supprimer_2;
    QGroupBox *groupBox_6;
    QTableView *tab_promotion;
    QGroupBox *groupBox_8;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *id_modifier_promotion;
    QLineEdit *Prix_initial_modifier;
    QLineEdit *Prix_final_modifier;
    QPushButton *pb_modifier_promotion;
    QLabel *label_20;
    QLineEdit *Date_initiale_modifier;
    QLabel *label_21;
    QLineEdit *Date_finale_modifier_promotion;
    QLabel *label_22;
    QLineEdit *pourcentage_modifier_promotion;
    QPushButton *excel;
    QPushButton *PDF;
    QLabel *label_24;
    QPushButton *InsertImage;
    QLabel *lbl_image;
    QWidget *tab_5;
    QLabel *label_56;
    QLabel *label_57;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QLineEdit *port_2;
    QLabel *label_58;
    QLabel *label_59;
    QLineEdit *rcpt_2;
    QLabel *label_60;
    QLineEdit *uname_2;
    QLineEdit *paswd_2;
    QLineEdit *subject_2;
    QPlainTextEdit *msg_2;
    QLabel *label_61;
    QLabel *label_62;
    QLineEdit *server_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1141, 638);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 1081, 551));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 461, 201));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 71, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 55, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 71, 16));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(140, 50, 113, 22));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(140, 90, 113, 22));
        le_Date_Debut = new QLineEdit(groupBox);
        le_Date_Debut->setObjectName(QStringLiteral("le_Date_Debut"));
        le_Date_Debut->setGeometry(QRect(140, 130, 113, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(290, 100, 93, 28));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 170, 71, 16));
        le_Date_Fin = new QLineEdit(groupBox);
        le_Date_Fin->setObjectName(QStringLiteral("le_Date_Fin"));
        le_Date_Fin->setGeometry(QRect(140, 170, 113, 22));
        groupBox_Nom_event = new QGroupBox(tab);
        groupBox_Nom_event->setObjectName(QStringLiteral("groupBox_Nom_event"));
        groupBox_Nom_event->setGeometry(QRect(520, 20, 521, 471));
        tab_etudiant = new QTableView(groupBox_Nom_event);
        tab_etudiant->setObjectName(QStringLiteral("tab_etudiant"));
        tab_etudiant->setGeometry(QRect(10, 80, 501, 311));
        rechercher_event = new QLineEdit(groupBox_Nom_event);
        rechercher_event->setObjectName(QStringLiteral("rechercher_event"));
        rechercher_event->setGeometry(QRect(20, 40, 131, 22));
        pb_recherche_event = new QPushButton(groupBox_Nom_event);
        pb_recherche_event->setObjectName(QStringLiteral("pb_recherche_event"));
        pb_recherche_event->setGeometry(QRect(160, 40, 93, 28));
        radioButton_nom_event = new QRadioButton(groupBox_Nom_event);
        radioButton_nom_event->setObjectName(QStringLiteral("radioButton_nom_event"));
        radioButton_nom_event->setGeometry(QRect(70, 410, 95, 20));
        radioButton_id_event = new QRadioButton(groupBox_Nom_event);
        radioButton_id_event->setObjectName(QStringLiteral("radioButton_id_event"));
        radioButton_id_event->setGeometry(QRect(70, 430, 95, 20));
        label_23 = new QLabel(groupBox_Nom_event);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 410, 61, 16));
        radioButton_DateDebut_event = new QRadioButton(groupBox_Nom_event);
        radioButton_DateDebut_event->setObjectName(QStringLiteral("radioButton_DateDebut_event"));
        radioButton_DateDebut_event->setGeometry(QRect(150, 410, 95, 20));
        radioButton_DateFin_event = new QRadioButton(groupBox_Nom_event);
        radioButton_DateFin_event->setObjectName(QStringLiteral("radioButton_DateFin_event"));
        radioButton_DateFin_event->setGeometry(QRect(150, 430, 95, 20));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 430, 461, 71));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 30, 61, 16));
        le_id_supp = new QLineEdit(groupBox_3);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(120, 30, 113, 22));
        pb_supprimer = new QPushButton(groupBox_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(280, 30, 93, 28));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 220, 461, 201));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 50, 71, 16));
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 90, 55, 16));
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 130, 71, 16));
        le_id_modifier = new QLineEdit(groupBox_7);
        le_id_modifier->setObjectName(QStringLiteral("le_id_modifier"));
        le_id_modifier->setGeometry(QRect(140, 50, 113, 22));
        le_nom_modifier = new QLineEdit(groupBox_7);
        le_nom_modifier->setObjectName(QStringLiteral("le_nom_modifier"));
        le_nom_modifier->setGeometry(QRect(140, 90, 113, 22));
        le_Date_Debut_modifier = new QLineEdit(groupBox_7);
        le_Date_Debut_modifier->setObjectName(QStringLiteral("le_Date_Debut_modifier"));
        le_Date_Debut_modifier->setGeometry(QRect(140, 130, 113, 22));
        pb_modifier_event = new QPushButton(groupBox_7);
        pb_modifier_event->setObjectName(QStringLiteral("pb_modifier_event"));
        pb_modifier_event->setGeometry(QRect(290, 100, 93, 28));
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 170, 71, 16));
        le_Date_Fin_modifier = new QLineEdit(groupBox_7);
        le_Date_Fin_modifier->setObjectName(QStringLiteral("le_Date_Fin_modifier"));
        le_Date_Fin_modifier->setGeometry(QRect(140, 170, 113, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 20, 261, 331));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 50, 71, 16));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 90, 71, 16));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 130, 61, 16));
        le_idpro = new QLineEdit(groupBox_4);
        le_idpro->setObjectName(QStringLiteral("le_idpro"));
        le_idpro->setGeometry(QRect(120, 50, 113, 22));
        le_prix_initial = new QLineEdit(groupBox_4);
        le_prix_initial->setObjectName(QStringLiteral("le_prix_initial"));
        le_prix_initial->setGeometry(QRect(120, 90, 113, 22));
        le_prix_final = new QLineEdit(groupBox_4);
        le_prix_final->setObjectName(QStringLiteral("le_prix_final"));
        le_prix_final->setGeometry(QRect(120, 130, 113, 22));
        pb_ajouterpro = new QPushButton(groupBox_4);
        pb_ajouterpro->setObjectName(QStringLiteral("pb_ajouterpro"));
        pb_ajouterpro->setGeometry(QRect(130, 290, 93, 28));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 170, 71, 16));
        le_date_initiale = new QLineEdit(groupBox_4);
        le_date_initiale->setObjectName(QStringLiteral("le_date_initiale"));
        le_date_initiale->setGeometry(QRect(120, 170, 113, 22));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 210, 71, 16));
        le_date_finale = new QLineEdit(groupBox_4);
        le_date_finale->setObjectName(QStringLiteral("le_date_finale"));
        le_date_finale->setGeometry(QRect(120, 210, 113, 22));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 250, 81, 16));
        le_pourcentage = new QLineEdit(groupBox_4);
        le_pourcentage->setObjectName(QStringLiteral("le_pourcentage"));
        le_pourcentage->setGeometry(QRect(120, 250, 113, 22));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(230, 370, 281, 131));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 40, 71, 16));
        le_id_supp_2 = new QLineEdit(groupBox_5);
        le_id_supp_2->setObjectName(QStringLiteral("le_id_supp_2"));
        le_id_supp_2->setGeometry(QRect(160, 40, 113, 22));
        pb_supprimer_2 = new QPushButton(groupBox_5);
        pb_supprimer_2->setObjectName(QStringLiteral("pb_supprimer_2"));
        pb_supprimer_2->setGeometry(QRect(170, 80, 93, 28));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(520, 20, 541, 411));
        tab_promotion = new QTableView(groupBox_6);
        tab_promotion->setObjectName(QStringLiteral("tab_promotion"));
        tab_promotion->setGeometry(QRect(10, 30, 521, 361));
        groupBox_8 = new QGroupBox(tab_2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(260, 20, 261, 331));
        label_17 = new QLabel(groupBox_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 50, 71, 16));
        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 90, 71, 16));
        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 130, 61, 16));
        id_modifier_promotion = new QLineEdit(groupBox_8);
        id_modifier_promotion->setObjectName(QStringLiteral("id_modifier_promotion"));
        id_modifier_promotion->setGeometry(QRect(120, 50, 113, 22));
        Prix_initial_modifier = new QLineEdit(groupBox_8);
        Prix_initial_modifier->setObjectName(QStringLiteral("Prix_initial_modifier"));
        Prix_initial_modifier->setGeometry(QRect(120, 90, 113, 22));
        Prix_final_modifier = new QLineEdit(groupBox_8);
        Prix_final_modifier->setObjectName(QStringLiteral("Prix_final_modifier"));
        Prix_final_modifier->setGeometry(QRect(120, 130, 113, 22));
        pb_modifier_promotion = new QPushButton(groupBox_8);
        pb_modifier_promotion->setObjectName(QStringLiteral("pb_modifier_promotion"));
        pb_modifier_promotion->setGeometry(QRect(130, 290, 93, 28));
        label_20 = new QLabel(groupBox_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 170, 71, 16));
        Date_initiale_modifier = new QLineEdit(groupBox_8);
        Date_initiale_modifier->setObjectName(QStringLiteral("Date_initiale_modifier"));
        Date_initiale_modifier->setGeometry(QRect(120, 170, 113, 22));
        label_21 = new QLabel(groupBox_8);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 210, 71, 16));
        Date_finale_modifier_promotion = new QLineEdit(groupBox_8);
        Date_finale_modifier_promotion->setObjectName(QStringLiteral("Date_finale_modifier_promotion"));
        Date_finale_modifier_promotion->setGeometry(QRect(120, 210, 113, 22));
        label_22 = new QLabel(groupBox_8);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 250, 81, 16));
        pourcentage_modifier_promotion = new QLineEdit(groupBox_8);
        pourcentage_modifier_promotion->setObjectName(QStringLiteral("pourcentage_modifier_promotion"));
        pourcentage_modifier_promotion->setGeometry(QRect(120, 250, 113, 22));
        excel = new QPushButton(tab_2);
        excel->setObjectName(QStringLiteral("excel"));
        excel->setGeometry(QRect(900, 440, 93, 28));
        PDF = new QPushButton(tab_2);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(900, 480, 93, 28));
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(0, 10, 1071, 511));
        label_24->setStyleSheet(QLatin1String("background-color:tranparent;\n"
"\n"
"border-image:url(:/img/fatma.jpg);\n"
"\n"
"background:none;\n"
"\n"
"border:none;\n"
"\n"
"background-repeat:none;"));
        InsertImage = new QPushButton(tab_2);
        InsertImage->setObjectName(QStringLiteral("InsertImage"));
        InsertImage->setGeometry(QRect(20, 480, 93, 28));
        lbl_image = new QLabel(tab_2);
        lbl_image->setObjectName(QStringLiteral("lbl_image"));
        lbl_image->setGeometry(QRect(30, 375, 171, 81));
        tabWidget->addTab(tab_2, QString());
        label_24->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        groupBox_6->raise();
        groupBox_8->raise();
        excel->raise();
        PDF->raise();
        InsertImage->raise();
        lbl_image->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_56 = new QLabel(tab_5);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(227, 213, 48, 22));
        label_57 = new QLabel(tab_5);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(227, 182, 69, 22));
        sendBtn = new QPushButton(tab_5);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(470, 450, 93, 28));
        exitBtn = new QPushButton(tab_5);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(590, 450, 93, 28));
        port_2 = new QLineEdit(tab_5);
        port_2->setObjectName(QStringLiteral("port_2"));
        port_2->setGeometry(QRect(310, 89, 377, 22));
        label_58 = new QLabel(tab_5);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(227, 151, 60, 22));
        label_59 = new QLabel(tab_5);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(227, 58, 76, 22));
        rcpt_2 = new QLineEdit(tab_5);
        rcpt_2->setObjectName(QStringLiteral("rcpt_2"));
        rcpt_2->setGeometry(QRect(310, 182, 377, 22));
        label_60 = new QLabel(tab_5);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(227, 244, 55, 28));
        uname_2 = new QLineEdit(tab_5);
        uname_2->setObjectName(QStringLiteral("uname_2"));
        uname_2->setGeometry(QRect(310, 120, 377, 22));
        paswd_2 = new QLineEdit(tab_5);
        paswd_2->setObjectName(QStringLiteral("paswd_2"));
        paswd_2->setGeometry(QRect(310, 151, 377, 22));
        paswd_2->setEchoMode(QLineEdit::Password);
        subject_2 = new QLineEdit(tab_5);
        subject_2->setObjectName(QStringLiteral("subject_2"));
        subject_2->setGeometry(QRect(310, 213, 377, 22));
        msg_2 = new QPlainTextEdit(tab_5);
        msg_2->setObjectName(QStringLiteral("msg_2"));
        msg_2->setGeometry(QRect(310, 244, 377, 175));
        label_61 = new QLabel(tab_5);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(227, 89, 70, 22));
        label_62 = new QLabel(tab_5);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(227, 120, 63, 22));
        server_2 = new QLineEdit(tab_5);
        server_2->setObjectName(QStringLiteral("server_2"));
        server_2->setGeometry(QRect(310, 58, 377, 22));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1141, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Date Debut", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Date Fin", Q_NULLPTR));
        groupBox_Nom_event->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        pb_recherche_event->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        radioButton_nom_event->setText(QApplication::translate("MainWindow", "Nom ", Q_NULLPTR));
        radioButton_id_event->setText(QApplication::translate("MainWindow", "Id", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Trie : ", Q_NULLPTR));
        radioButton_DateDebut_event->setText(QApplication::translate("MainWindow", "Date Debut", Q_NULLPTR));
        radioButton_DateFin_event->setText(QApplication::translate("MainWindow", "Date Fin", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Date Debut", Q_NULLPTR));
        pb_modifier_event->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Date Fin", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Evennement", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Prix Initial", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Prix Final", Q_NULLPTR));
        pb_ajouterpro->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Date Initiale", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Date Finale", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Pourcentage", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        pb_supprimer_2->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Affichage", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Prix Initial", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Prix Final", Q_NULLPTR));
        pb_modifier_promotion->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Date Initiale", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Date Finale", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Pourcentage", Q_NULLPTR));
        excel->setText(QApplication::translate("MainWindow", "EXCEL", Q_NULLPTR));
        PDF->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        InsertImage->setText(QApplication::translate("MainWindow", "InsertImage", Q_NULLPTR));
        lbl_image->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Promotions", Q_NULLPTR));
        label_56->setText(QApplication::translate("MainWindow", "Subject:", Q_NULLPTR));
        label_57->setText(QApplication::translate("MainWindow", "Recipant to:", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        port_2->setText(QApplication::translate("MainWindow", "465", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        label_59->setText(QApplication::translate("MainWindow", "Smtp-server:", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "Message:", Q_NULLPTR));
        paswd_2->setInputMask(QString());
        label_61->setText(QApplication::translate("MainWindow", "Server port:", Q_NULLPTR));
        label_62->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        server_2->setText(QApplication::translate("MainWindow", "smtp.gmail.com", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Mailing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
