/********************************************************************************
** Form generated from reading UI file 'gestioneventpromo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONEVENTPROMO_H
#define UI_GESTIONEVENTPROMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionEventPromo
{
public:
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
    QLabel *label_26;
    QLineEdit *rechercher_promo;
    QLabel *label_Vente_Flash;
    QPushButton *VenteFlash;
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
    QWidget *tab_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_1;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLabel *label_25;
    QPushButton *pushButton_add;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_7;
    QPushButton *pushButton_substract;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_multiply;
    QWidget *tab_4;
    QLabel *temp_label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *temp_lcdNumber;
    QLabel *label_alert;
    QWidget *tab_6;
    QProgressBar *avance;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mute;
    QSlider *volume;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *selection;
    QPushButton *play;
    QPushButton *pause;
    QPushButton *stop;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_29;
    QLabel *lbl_time_2;

    void setupUi(QDialog *GestionEventPromo)
    {
        if (GestionEventPromo->objectName().isEmpty())
            GestionEventPromo->setObjectName(QStringLiteral("GestionEventPromo"));
        GestionEventPromo->resize(1240, 658);
        tabWidget = new QTabWidget(GestionEventPromo);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 1191, 551));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 461, 201));
        groupBox->setStyleSheet(QStringLiteral(""));
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
        le_id->setStyleSheet(QStringLiteral(""));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(140, 90, 113, 22));
        le_nom->setStyleSheet(QStringLiteral(""));
        le_Date_Debut = new QLineEdit(groupBox);
        le_Date_Debut->setObjectName(QStringLiteral("le_Date_Debut"));
        le_Date_Debut->setGeometry(QRect(140, 130, 113, 22));
        le_Date_Debut->setStyleSheet(QStringLiteral(""));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(290, 100, 93, 28));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 170, 71, 16));
        le_Date_Fin = new QLineEdit(groupBox);
        le_Date_Fin->setObjectName(QStringLiteral("le_Date_Fin"));
        le_Date_Fin->setGeometry(QRect(140, 170, 113, 22));
        le_Date_Fin->setStyleSheet(QStringLiteral(""));
        groupBox_Nom_event = new QGroupBox(tab);
        groupBox_Nom_event->setObjectName(QStringLiteral("groupBox_Nom_event"));
        groupBox_Nom_event->setGeometry(QRect(520, 20, 561, 471));
        tab_etudiant = new QTableView(groupBox_Nom_event);
        tab_etudiant->setObjectName(QStringLiteral("tab_etudiant"));
        tab_etudiant->setGeometry(QRect(10, 80, 501, 311));
        tab_etudiant->setStyleSheet(QStringLiteral(""));
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
        groupBox_3->setStyleSheet(QStringLiteral(""));
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
        groupBox_7->setStyleSheet(QStringLiteral(""));
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
        le_id_modifier->setStyleSheet(QStringLiteral(""));
        le_nom_modifier = new QLineEdit(groupBox_7);
        le_nom_modifier->setObjectName(QStringLiteral("le_nom_modifier"));
        le_nom_modifier->setGeometry(QRect(140, 90, 113, 22));
        le_nom_modifier->setStyleSheet(QStringLiteral(""));
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
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(720, 440, 55, 31));
        label_26->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        rechercher_promo = new QLineEdit(tab_2);
        rechercher_promo->setObjectName(QStringLiteral("rechercher_promo"));
        rechercher_promo->setGeometry(QRect(560, 440, 131, 22));
        label_Vente_Flash = new QLabel(tab_2);
        label_Vente_Flash->setObjectName(QStringLiteral("label_Vente_Flash"));
        label_Vente_Flash->setGeometry(QRect(720, 480, 55, 31));
        label_Vente_Flash->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        VenteFlash = new QPushButton(tab_2);
        VenteFlash->setObjectName(QStringLiteral("VenteFlash"));
        VenteFlash->setGeometry(QRect(580, 480, 93, 28));
        VenteFlash->setStyleSheet(QLatin1String("background-color: rgb(197, 0, 0);\n"
"color: rgb(255, 255, 255);"));
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
        label_26->raise();
        rechercher_promo->raise();
        label_Vente_Flash->raise();
        VenteFlash->raise();
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
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 230, 61, 61));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(460, 170, 61, 61));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 290, 61, 61));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(520, 230, 61, 61));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_divide = new QPushButton(tab_3);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(580, 110, 61, 61));
        pushButton_divide->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(215, 151, 57);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_decimal = new QPushButton(tab_3);
        pushButton_decimal->setObjectName(QStringLiteral("pushButton_decimal"));
        pushButton_decimal->setGeometry(QRect(520, 350, 61, 61));
        pushButton_decimal->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_1 = new QPushButton(tab_3);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(400, 290, 61, 61));
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plusMinus = new QPushButton(tab_3);
        pushButton_plusMinus->setObjectName(QStringLiteral("pushButton_plusMinus"));
        pushButton_plusMinus->setGeometry(QRect(460, 110, 61, 61));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 290, 61, 61));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(460, 230, 61, 61));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        label_25 = new QLabel(tab_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(400, 50, 241, 61));
        label_25->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignements: 'AlignVCenter | AlignRight';\n"
"  border : 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_add = new QPushButton(tab_3);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(580, 290, 61, 61));
        pushButton_add->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(215, 151, 57);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_percent = new QPushButton(tab_3);
        pushButton_percent->setObjectName(QStringLiteral("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(520, 110, 61, 61));
        pushButton_equals = new QPushButton(tab_3);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(580, 350, 61, 61));
        pushButton_equals->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(215, 151, 57);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(400, 170, 61, 61));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_substract = new QPushButton(tab_3);
        pushButton_substract->setObjectName(QStringLiteral("pushButton_substract"));
        pushButton_substract->setGeometry(QRect(580, 230, 61, 61));
        pushButton_substract->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(215, 151, 57);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(520, 170, 61, 61));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(tab_3);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(400, 350, 121, 61));
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_clear = new QPushButton(tab_3);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(400, 110, 61, 61));
        pushButton_multiply = new QPushButton(tab_3);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(580, 170, 61, 61));
        pushButton_multiply->setStyleSheet(QLatin1String("QPushButton {\n"
" background-color: rgb(215, 151, 57);\n"
" color: white;\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#FF7832, stop: 1 #FF9739);\n"
"}"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        temp_label = new QLabel(tab_4);
        temp_label->setObjectName(QStringLiteral("temp_label"));
        temp_label->setGeometry(QRect(230, 70, 241, 89));
        layoutWidget_2 = new QWidget(tab_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(490, 60, 241, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        temp_lcdNumber = new QLCDNumber(layoutWidget_2);
        temp_lcdNumber->setObjectName(QStringLiteral("temp_lcdNumber"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 94, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        QBrush brush2(QColor(60, 60, 60, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(76, 76, 76, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(60, 60, 60, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        QBrush brush5(QColor(60, 60, 60, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush6(QColor(60, 60, 60, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        temp_lcdNumber->setPalette(palette);
        temp_lcdNumber->setDigitCount(7);

        horizontalLayout->addWidget(temp_lcdNumber);

        label_alert = new QLabel(tab_4);
        label_alert->setObjectName(QStringLiteral("label_alert"));
        label_alert->setGeometry(QRect(220, 200, 571, 91));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_alert->setFont(font);
        label_alert->setStyleSheet(QStringLiteral("color:RED;"));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        avance = new QProgressBar(tab_6);
        avance->setObjectName(QStringLiteral("avance"));
        avance->setGeometry(QRect(160, 170, 511, 31));
        avance->setValue(0);
        layoutWidget = new QWidget(tab_6);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 230, 371, 30));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mute = new QPushButton(layoutWidget);
        mute->setObjectName(QStringLiteral("mute"));

        horizontalLayout_5->addWidget(mute);

        volume = new QSlider(layoutWidget);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(volume);

        layoutWidget1 = new QWidget(tab_6);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 110, 395, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        selection = new QPushButton(layoutWidget1);
        selection->setObjectName(QStringLiteral("selection"));

        horizontalLayout_4->addWidget(selection);

        play = new QPushButton(layoutWidget1);
        play->setObjectName(QStringLiteral("play"));

        horizontalLayout_4->addWidget(play);

        pause = new QPushButton(layoutWidget1);
        pause->setObjectName(QStringLiteral("pause"));

        horizontalLayout_4->addWidget(pause);

        stop = new QPushButton(layoutWidget1);
        stop->setObjectName(QStringLiteral("stop"));

        horizontalLayout_4->addWidget(stop);

        tabWidget->addTab(tab_6, QString());
        layoutWidget_3 = new QWidget(GestionEventPromo);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(950, 590, 228, 38));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 158, 61);"));

        horizontalLayout_3->addWidget(label_29);

        lbl_time_2 = new QLabel(layoutWidget_3);
        lbl_time_2->setObjectName(QStringLiteral("lbl_time_2"));
        lbl_time_2->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";\n"
"color: rgb(38, 38, 38);\n"
"background-color: rgb(195, 195, 195);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(lbl_time_2);


        retranslateUi(GestionEventPromo);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(GestionEventPromo);
    } // setupUi

    void retranslateUi(QDialog *GestionEventPromo)
    {
        GestionEventPromo->setWindowTitle(QApplication::translate("GestionEventPromo", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("GestionEventPromo", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("GestionEventPromo", "Identifiant", Q_NULLPTR));
        label_2->setText(QApplication::translate("GestionEventPromo", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("GestionEventPromo", "Date Debut", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("GestionEventPromo", "Ajouter", Q_NULLPTR));
        label_9->setText(QApplication::translate("GestionEventPromo", "Date Fin", Q_NULLPTR));
        groupBox_Nom_event->setTitle(QApplication::translate("GestionEventPromo", "Affichage", Q_NULLPTR));
        pb_recherche_event->setText(QApplication::translate("GestionEventPromo", "Rechercher", Q_NULLPTR));
        radioButton_nom_event->setText(QApplication::translate("GestionEventPromo", "Nom ", Q_NULLPTR));
        radioButton_id_event->setText(QApplication::translate("GestionEventPromo", "Id", Q_NULLPTR));
        label_23->setText(QApplication::translate("GestionEventPromo", "Trie : ", Q_NULLPTR));
        radioButton_DateDebut_event->setText(QApplication::translate("GestionEventPromo", "Date Debut", Q_NULLPTR));
        radioButton_DateFin_event->setText(QApplication::translate("GestionEventPromo", "Date Fin", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("GestionEventPromo", "Suppression", Q_NULLPTR));
        label_7->setText(QApplication::translate("GestionEventPromo", "Identifiant", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("GestionEventPromo", "Supprimer", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("GestionEventPromo", "Modification", Q_NULLPTR));
        label_11->setText(QApplication::translate("GestionEventPromo", "Identifiant", Q_NULLPTR));
        label_12->setText(QApplication::translate("GestionEventPromo", "Nom", Q_NULLPTR));
        label_13->setText(QApplication::translate("GestionEventPromo", "Date Debut", Q_NULLPTR));
        pb_modifier_event->setText(QApplication::translate("GestionEventPromo", "Modifier", Q_NULLPTR));
        label_14->setText(QApplication::translate("GestionEventPromo", "Date Fin", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GestionEventPromo", "Evennement", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("GestionEventPromo", "Ajout", Q_NULLPTR));
        label_4->setText(QApplication::translate("GestionEventPromo", "Identifiant", Q_NULLPTR));
        label_5->setText(QApplication::translate("GestionEventPromo", "Prix Initial", Q_NULLPTR));
        label_6->setText(QApplication::translate("GestionEventPromo", "Prix Final", Q_NULLPTR));
        pb_ajouterpro->setText(QApplication::translate("GestionEventPromo", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("GestionEventPromo", "Date Initiale", Q_NULLPTR));
        label_15->setText(QApplication::translate("GestionEventPromo", "Date Finale", Q_NULLPTR));
        label_16->setText(QApplication::translate("GestionEventPromo", "Pourcentage", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("GestionEventPromo", "Suppression", Q_NULLPTR));
        label_8->setText(QApplication::translate("GestionEventPromo", "Identifiant", Q_NULLPTR));
        pb_supprimer_2->setText(QApplication::translate("GestionEventPromo", "Supprimer", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("GestionEventPromo", "Affichage", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("GestionEventPromo", "Modification", Q_NULLPTR));
        label_17->setText(QApplication::translate("GestionEventPromo", "Identifiant", Q_NULLPTR));
        label_18->setText(QApplication::translate("GestionEventPromo", "Prix Initial", Q_NULLPTR));
        label_19->setText(QApplication::translate("GestionEventPromo", "Prix Final", Q_NULLPTR));
        pb_modifier_promotion->setText(QApplication::translate("GestionEventPromo", "Modifier", Q_NULLPTR));
        label_20->setText(QApplication::translate("GestionEventPromo", "Date Initiale", Q_NULLPTR));
        label_21->setText(QApplication::translate("GestionEventPromo", "Date Finale", Q_NULLPTR));
        label_22->setText(QApplication::translate("GestionEventPromo", "Pourcentage", Q_NULLPTR));
        excel->setText(QApplication::translate("GestionEventPromo", "EXCEL", Q_NULLPTR));
        PDF->setText(QApplication::translate("GestionEventPromo", "PDF", Q_NULLPTR));
        label_24->setText(QString());
        InsertImage->setText(QApplication::translate("GestionEventPromo", "InsertImage", Q_NULLPTR));
        lbl_image->setText(QString());
        label_26->setText(QString());
        label_Vente_Flash->setText(QString());
        VenteFlash->setText(QApplication::translate("GestionEventPromo", "Vente Flash !!", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GestionEventPromo", "Promotions", Q_NULLPTR));
        label_56->setText(QApplication::translate("GestionEventPromo", "Subject:", Q_NULLPTR));
        label_57->setText(QApplication::translate("GestionEventPromo", "Recipant to:", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("GestionEventPromo", "Send", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("GestionEventPromo", "Exit", Q_NULLPTR));
        port_2->setText(QApplication::translate("GestionEventPromo", "465", Q_NULLPTR));
        label_58->setText(QApplication::translate("GestionEventPromo", "Password:", Q_NULLPTR));
        label_59->setText(QApplication::translate("GestionEventPromo", "Smtp-server:", Q_NULLPTR));
        label_60->setText(QApplication::translate("GestionEventPromo", "Message:", Q_NULLPTR));
        paswd_2->setInputMask(QString());
        label_61->setText(QApplication::translate("GestionEventPromo", "Server port:", Q_NULLPTR));
        label_62->setText(QApplication::translate("GestionEventPromo", "Username:", Q_NULLPTR));
        server_2->setText(QApplication::translate("GestionEventPromo", "smtp.gmail.com", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("GestionEventPromo", "Mailing", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GestionEventPromo", "4", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("GestionEventPromo", "8", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GestionEventPromo", "3", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("GestionEventPromo", "6", Q_NULLPTR));
        pushButton_divide->setText(QApplication::translate("GestionEventPromo", " \303\267 ", Q_NULLPTR));
        pushButton_decimal->setText(QApplication::translate("GestionEventPromo", ".", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("GestionEventPromo", "1", Q_NULLPTR));
        pushButton_plusMinus->setStyleSheet(QApplication::translate("GestionEventPromo", "QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#BEBEBE, stop: 1 #D7D7D7);\n"
"}", Q_NULLPTR));
        pushButton_plusMinus->setText(QApplication::translate("GestionEventPromo", "+/-", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GestionEventPromo", "2", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GestionEventPromo", "5", Q_NULLPTR));
        label_25->setText(QApplication::translate("GestionEventPromo", "0", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("GestionEventPromo", "+", Q_NULLPTR));
        pushButton_percent->setStyleSheet(QApplication::translate("GestionEventPromo", "QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#BEBEBE, stop: 1 #D7D7D7);\n"
"}", Q_NULLPTR));
        pushButton_percent->setText(QApplication::translate("GestionEventPromo", "%", Q_NULLPTR));
        pushButton_equals->setText(QApplication::translate("GestionEventPromo", "=", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("GestionEventPromo", "7", Q_NULLPTR));
        pushButton_substract->setText(QApplication::translate("GestionEventPromo", "-", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("GestionEventPromo", "9", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("GestionEventPromo", "0", Q_NULLPTR));
        pushButton_clear->setStyleSheet(QApplication::translate("GestionEventPromo", "QPushButton {\n"
" background-color: rgb(215, 215, 215);\n"
" border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                  stop: 0#BEBEBE, stop: 1 #D7D7D7);\n"
"}", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("GestionEventPromo", "C", Q_NULLPTR));
        pushButton_multiply->setText(QApplication::translate("GestionEventPromo", "x", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GestionEventPromo", "Calculator", Q_NULLPTR));
        temp_label->setText(QApplication::translate("GestionEventPromo", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#ff0000;\">Temperature \302\260C:</span></p></body></html>", Q_NULLPTR));
        label_alert->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GestionEventPromo", "Arduino", Q_NULLPTR));
        mute->setText(QApplication::translate("GestionEventPromo", "Mute", Q_NULLPTR));
        selection->setText(QApplication::translate("GestionEventPromo", "Selection", Q_NULLPTR));
        play->setText(QApplication::translate("GestionEventPromo", "Play", Q_NULLPTR));
        pause->setText(QApplication::translate("GestionEventPromo", "Pause", Q_NULLPTR));
        stop->setText(QApplication::translate("GestionEventPromo", "Stop", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("GestionEventPromo", "Music", Q_NULLPTR));
        label_29->setText(QApplication::translate("GestionEventPromo", "Current time", Q_NULLPTR));
        lbl_time_2->setText(QApplication::translate("GestionEventPromo", "00:00:00", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GestionEventPromo: public Ui_GestionEventPromo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONEVENTPROMO_H
