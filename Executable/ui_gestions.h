/********************************************************************************
** Form generated from reading UI file 'gestions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONS_H
#define UI_GESTIONS_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_gestions
{
public:
    QTabWidget *tabWidget_4;
    QWidget *tab_4;
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QPushButton *EnvoyerMail_pushButton;
    QPushButton *pushButton_12;
    QWidget *imagemail;
    QWidget *imagestat;
    QPushButton *AccStockpb;
    QPushButton *AccFournisseurpb;
    QPushButton *pushButton;
    QPushButton *Soundoffpb;
    QSlider *slidervolume;
    QWidget *widget_7;
    QWidget *widget_9;
    QWidget *widget_10;
    QWidget *widget_8;
    QWidget *tab;
    QLabel *label_26;
    QLineEdit *le_qtestock;
    QLabel *label_15;
    QLabel *label_2;
    QLineEdit *le_libstock;
    QLabel *label_3;
    QLabel *label_17;
    QLineEdit *le_prixstock;
    QPushButton *pb_ajouters;
    QPushButton *pbmodifierstock;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_10;
    QTableView *tab_stock_2;
    QLineEdit *recherchestock;
    QPushButton *pushButton_date_diifrence;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_day;
    QLabel *label_d;
    QLabel *label_moi;
    QLabel *label_m;
    QLabel *label_year;
    QLabel *label_y;
    QLabel *total;
    QLabel *label_total;
    QPushButton *pushButton_total;
    QLabel *label_dt;
    QWidget *widget_23;
    QPushButton *pb_supprimers;
    QLabel *label_4;
    QLineEdit *le_idstock;
    QDateEdit *le_datestock;
    QWidget *widget;
    QLabel *label;
    QLabel *label_12;
    QWidget *widget_11;
    QWidget *widget_12;
    QWidget *tab_2;
    QLabel *label_6;
    QPushButton *pb_ajouterf;
    QLineEdit *le_nomsoc;
    QLineEdit *le_lieu;
    QLabel *label_7;
    QLineEdit *le_numero;
    QLabel *label_5;
    QLabel *label_8;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_11;
    QTableView *tab_fournisseur_2;
    QLineEdit *lineEdit_num_4;
    QWidget *widget_5;
    QPushButton *pb_supprimerf;
    QLabel *label_9;
    QLineEdit *le_id;
    QPushButton *pbmodifierfournisseur_2;
    QComboBox *le_typeeq;
    QWidget *widget_2;
    QPushButton *pbgotomap;
    QLineEdit *le_lieumap;
    QLabel *label_11;
    QWidget *widget_4;
    QWidget *widget_6;
    QLabel *label_10;
    QWidget *tab_3;
    QCustomPlot *customPlot;
    QPushButton *imp;
    QWidget *tab_5;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_55;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_60;
    QLineEdit *rcpt;
    QWidget *tab_7;
    QLabel *label_13;
    QPushButton *Pbtime;
    QDateEdit *le_datestock_3;
    QLineEdit *le_prixstock_3;
    QLineEdit *le_idstock_3;
    QLabel *label_33;
    QLineEdit *le_qtestock_3;
    QLabel *label_34;
    QLineEdit *le_libstock_3;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QComboBox *TimerMode;
    QLineEdit *Timer;
    QWidget *tab_8;
    QPushButton *pbarduinoT_O;
    QPushButton *sonore;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QLabel *label_14;
    QWidget *tab_9;
    QPushButton *chercher;
    QQuickWidget *quickWidget;
    QLineEdit *le_adresspart2;
    QLabel *labelLatitude;
    QLineEdit *editLongitude;
    QLineEdit *editLatitude;
    QLabel *labelLongitude;
    QLabel *labelInformations_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelPositionLatitude_2;
    QLabel *positionLatitude_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelPositionLongitude_2;
    QLabel *positionLongitude_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *boutonAller;

    void setupUi(QDialog *gestions)
    {
        if (gestions->objectName().isEmpty())
            gestions->setObjectName(QStringLiteral("gestions"));
        gestions->resize(877, 536);
        tabWidget_4 = new QTabWidget(gestions);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 1091, 581));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1081, 561));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        EnvoyerMail_pushButton = new QPushButton(tab_6);
        EnvoyerMail_pushButton->setObjectName(QStringLiteral("EnvoyerMail_pushButton"));
        EnvoyerMail_pushButton->setGeometry(QRect(90, 210, 128, 23));
        pushButton_12 = new QPushButton(tab_6);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(300, 210, 128, 23));
        imagemail = new QWidget(tab_6);
        imagemail->setObjectName(QStringLiteral("imagemail"));
        imagemail->setGeometry(QRect(100, 100, 101, 101));
        imagemail->setStyleSheet(QStringLiteral("image: url(:/pics/EnvoyerMail.png);"));
        imagestat = new QWidget(tab_6);
        imagestat->setObjectName(QStringLiteral("imagestat"));
        imagestat->setGeometry(QRect(300, 99, 120, 101));
        imagestat->setStyleSheet(QStringLiteral("image: url(:/pics/EditerStatistiques.png);"));
        AccStockpb = new QPushButton(tab_6);
        AccStockpb->setObjectName(QStringLiteral("AccStockpb"));
        AccStockpb->setGeometry(QRect(90, 380, 121, 23));
        AccFournisseurpb = new QPushButton(tab_6);
        AccFournisseurpb->setObjectName(QStringLiteral("AccFournisseurpb"));
        AccFournisseurpb->setGeometry(QRect(300, 380, 121, 23));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(790, 60, 75, 23));
        Soundoffpb = new QPushButton(tab_6);
        Soundoffpb->setObjectName(QStringLiteral("Soundoffpb"));
        Soundoffpb->setGeometry(QRect(710, 60, 75, 23));
        slidervolume = new QSlider(tab_6);
        slidervolume->setObjectName(QStringLiteral("slidervolume"));
        slidervolume->setGeometry(QRect(690, 90, 160, 22));
        slidervolume->setValue(0);
        slidervolume->setOrientation(Qt::Horizontal);
        widget_7 = new QWidget(tab_6);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(-40, -11, 921, 521));
        widget_7->setStyleSheet(QStringLiteral("/*background-image: url(:/pics/image3.jpg);*/"));
        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(130, 300, 120, 80));
        widget_9->setStyleSheet(QStringLiteral("image: url(:/pics/box.png);"));
        widget_10 = new QWidget(widget_7);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(329, 299, 131, 81));
        widget_10->setStyleSheet(QLatin1String("\n"
"image: url(:/pics/supplier.png);"));
        widget_8 = new QWidget(tab_6);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(440, 180, 521, 391));
        widget_8->setStyleSheet(QStringLiteral("image: url(:/pics/finalmiceshelf.png);"));
        tabWidget->addTab(tab_6, QString());
        widget_7->raise();
        EnvoyerMail_pushButton->raise();
        pushButton_12->raise();
        imagemail->raise();
        imagestat->raise();
        AccStockpb->raise();
        AccFournisseurpb->raise();
        pushButton->raise();
        Soundoffpb->raise();
        slidervolume->raise();
        widget_8->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_26 = new QLabel(tab);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(-152, -42, 131, 16));
        le_qtestock = new QLineEdit(tab);
        le_qtestock->setObjectName(QStringLiteral("le_qtestock"));
        le_qtestock->setGeometry(QRect(80, 120, 113, 22));
        le_qtestock->setStyleSheet(QLatin1String("/*#le_qtestock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 210, 56, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 71, 16));
        le_libstock = new QLineEdit(tab);
        le_libstock->setObjectName(QStringLiteral("le_libstock"));
        le_libstock->setGeometry(QRect(80, 80, 113, 22));
        le_libstock->setStyleSheet(QLatin1String("/*#le_libstock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 47, 13));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 160, 81, 16));
        le_prixstock = new QLineEdit(tab);
        le_prixstock->setObjectName(QStringLiteral("le_prixstock"));
        le_prixstock->setGeometry(QRect(80, 210, 113, 22));
        le_prixstock->setStyleSheet(QLatin1String("/*#le_prixstock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        pb_ajouters = new QPushButton(tab);
        pb_ajouters->setObjectName(QStringLiteral("pb_ajouters"));
        pb_ajouters->setGeometry(QRect(20, 330, 101, 41));
        pb_ajouters->setStyleSheet(QLatin1String("/*#pb_ajouters\n"
"{\n"
"border-radius:20px;\n"
"    background:rgb(255, 170, 0);\n"
"    border:2px solid rgb(255, 170, 0);\n"
"	font: italic 11pt \"Franklin Gothic Medium\";\n"
"}\n"
"\n"
"#pb_ajouters:hover\n"
"{\n"
"    background:rgb(255, 170, 0);\n"
"}*/"));
        pbmodifierstock = new QPushButton(tab);
        pbmodifierstock->setObjectName(QStringLiteral("pbmodifierstock"));
        pbmodifierstock->setGeometry(QRect(140, 330, 111, 41));
        pbmodifierstock->setStyleSheet(QLatin1String("/*#pbmodifierstock\n"
"{\n"
"border-radius:20px;\n"
"    background:transparent;\n"
"    border:2px solid rgb(255, 170, 0);\n"
"}\n"
"\n"
"#pbmodifierstock:hover\n"
"{\n"
"    background:rgb(255, 170, 0);\n"
"}*/"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(410, 0, 661, 511));
        groupBox_4->setStyleSheet(QStringLiteral(""));
        pushButton_10 = new QPushButton(groupBox_4);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(140, 10, 93, 28));
        pushButton_10->setStyleSheet(QLatin1String("/*QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"  background:rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}*/"));
        tab_stock_2 = new QTableView(groupBox_4);
        tab_stock_2->setObjectName(QStringLiteral("tab_stock_2"));
        tab_stock_2->setGeometry(QRect(10, 50, 441, 191));
        tab_stock_2->setStyleSheet(QLatin1String("QScrollBar:vertical {           \n"
"      border: 1px solid #999999;\n"
"      background:white;\n"
"      width:10px;    \n"
"      margin: 0px 0px 0px 0px;\n"
"    }\n"
"QScrollBar::handle:vertical {\n"
"      background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130), stop:1 rgb(32, 47, 130));\n"
"        min-height: 0px;\n"
"    }\n"
" QScrollBar::add-line:vertical {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"    stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"        height: 0px;\n"
"        subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"    QScrollBar::sub-line:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"     stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"     height: 0 px;\n"
"        subcontrol-position: top;\n"
"     subcontrol-origin: margin;\n"
"    }\n"
"   "));
        recherchestock = new QLineEdit(groupBox_4);
        recherchestock->setObjectName(QStringLiteral("recherchestock"));
        recherchestock->setGeometry(QRect(240, 10, 113, 22));
        pushButton_date_diifrence = new QPushButton(groupBox_4);
        pushButton_date_diifrence->setObjectName(QStringLiteral("pushButton_date_diifrence"));
        pushButton_date_diifrence->setGeometry(QRect(220, 270, 75, 23));
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 270, 191, 20));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_day = new QLabel(layoutWidget);
        label_day->setObjectName(QStringLiteral("label_day"));

        horizontalLayout_6->addWidget(label_day);

        label_d = new QLabel(layoutWidget);
        label_d->setObjectName(QStringLiteral("label_d"));

        horizontalLayout_6->addWidget(label_d);

        label_moi = new QLabel(layoutWidget);
        label_moi->setObjectName(QStringLiteral("label_moi"));

        horizontalLayout_6->addWidget(label_moi);

        label_m = new QLabel(layoutWidget);
        label_m->setObjectName(QStringLiteral("label_m"));

        horizontalLayout_6->addWidget(label_m);

        label_year = new QLabel(layoutWidget);
        label_year->setObjectName(QStringLiteral("label_year"));

        horizontalLayout_6->addWidget(label_year);

        label_y = new QLabel(layoutWidget);
        label_y->setObjectName(QStringLiteral("label_y"));

        horizontalLayout_6->addWidget(label_y);

        total = new QLabel(groupBox_4);
        total->setObjectName(QStringLiteral("total"));
        total->setGeometry(QRect(99, 300, 75, 23));
        label_total = new QLabel(groupBox_4);
        label_total->setObjectName(QStringLiteral("label_total"));
        label_total->setGeometry(QRect(19, 300, 74, 23));
        pushButton_total = new QPushButton(groupBox_4);
        pushButton_total->setObjectName(QStringLiteral("pushButton_total"));
        pushButton_total->setGeometry(QRect(260, 300, 75, 23));
        label_dt = new QLabel(groupBox_4);
        label_dt->setObjectName(QStringLiteral("label_dt"));
        label_dt->setGeometry(QRect(180, 300, 74, 23));
        widget_23 = new QWidget(groupBox_4);
        widget_23->setObjectName(QStringLiteral("widget_23"));
        widget_23->setGeometry(QRect(220, 340, 241, 151));
        widget_23->setStyleSheet(QStringLiteral("image: url(:/pics/mousealone (1).png);"));
        pb_supprimers = new QPushButton(tab);
        pb_supprimers->setObjectName(QStringLiteral("pb_supprimers"));
        pb_supprimers->setGeometry(QRect(272, 330, 101, 41));
        pb_supprimers->setStyleSheet(QLatin1String("/*#pb_supprimers\n"
"{\n"
"border-radius:20px;\n"
"    background:transparent;\n"
"    border:2px solid rgb(255, 170, 0);\n"
"}\n"
"#pb_supprimers:hover\n"
"{\n"
"    background:rgb(255, 170, 0);\n"
"}*/"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 160, 71, 16));
        le_idstock = new QLineEdit(tab);
        le_idstock->setObjectName(QStringLiteral("le_idstock"));
        le_idstock->setGeometry(QRect(280, 160, 113, 22));
        le_idstock->setStyleSheet(QLatin1String("/*#le_idstock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        le_datestock = new QDateEdit(tab);
        le_datestock->setObjectName(QStringLiteral("le_datestock"));
        le_datestock->setGeometry(QRect(90, 160, 110, 22));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-120, 0, 100, 491));
        widget->setStyleSheet(QLatin1String("#widget {\n"
"/*	background-image: url(:/pics/image5.jpg);*/\n"
"	\n"
"	image: url(:/pics/image5.jpg);\n"
"\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 20, 181, 31));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 30, 201, 21));
        label_12->setStyleSheet(QStringLiteral("font: 15pt \"MV Boli\";"));
        widget_11 = new QWidget(tab);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setGeometry(QRect(20, 0, 120, 80));
        widget_11->setStyleSheet(QStringLiteral("image: url(:/pics/logo.png);"));
        widget_12 = new QWidget(tab);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setGeometry(QRect(0, 410, 171, 80));
        widget_12->setStyleSheet(QStringLiteral("image: url(:/pics/thepiechart.png);"));
        tabWidget->addTab(tab, QString());
        widget->raise();
        label_26->raise();
        le_qtestock->raise();
        label_15->raise();
        label_2->raise();
        le_libstock->raise();
        label_3->raise();
        label_17->raise();
        le_prixstock->raise();
        pb_ajouters->raise();
        pbmodifierstock->raise();
        groupBox_4->raise();
        pb_supprimers->raise();
        label_4->raise();
        le_idstock->raise();
        le_datestock->raise();
        widget_11->raise();
        widget_12->raise();
        label_12->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 180, 81, 16));
        label_6->setStyleSheet(QStringLiteral("font: 15pt \"MV Boli\";"));
        pb_ajouterf = new QPushButton(tab_2);
        pb_ajouterf->setObjectName(QStringLiteral("pb_ajouterf"));
        pb_ajouterf->setGeometry(QRect(30, 290, 101, 41));
        pb_ajouterf->setStyleSheet(QLatin1String("/*QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:rgb(0, 190, 155);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}*/\n"
"/*\n"
"#pb_ajouterf\n"
"{\n"
"border-radius:20px;\n"
"    background:rgb(255, 170, 0);\n"
"    border:2px solid rgb(255, 170, 0);\n"
"	font: italic 11pt \"Franklin Gothic Medium\";\n"
"}\n"
"\n"
"#pb_ajouterf:hover\n"
"{\n"
"    background:rgb(255, 170, 0);\n"
"}*/"));
        le_nomsoc = new QLineEdit(tab_2);
        le_nomsoc->setObjectName(QStringLiteral("le_nomsoc"));
        le_nomsoc->setGeometry(QRect(130, 180, 113, 22));
        le_lieu = new QLineEdit(tab_2);
        le_lieu->setObjectName(QStringLiteral("le_lieu"));
        le_lieu->setGeometry(QRect(130, 100, 113, 22));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 100, 56, 16));
        label_7->setStyleSheet(QStringLiteral("font: 15pt \"MV Boli\";"));
        le_numero = new QLineEdit(tab_2);
        le_numero->setObjectName(QStringLiteral("le_numero"));
        le_numero->setGeometry(QRect(130, 220, 113, 22));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 220, 121, 20));
        label_5->setStyleSheet(QStringLiteral("font: 15pt \"MV Boli\";"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 130, 191, 31));
        label_8->setStyleSheet(QStringLiteral("font: 15pt \"MV Boli\";"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(410, 0, 661, 521));
        pushButton_11 = new QPushButton(groupBox_5);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(170, 50, 93, 28));
        pushButton_11->setStyleSheet(QLatin1String("/*QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"  background:rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}*/"));
        tab_fournisseur_2 = new QTableView(groupBox_5);
        tab_fournisseur_2->setObjectName(QStringLiteral("tab_fournisseur_2"));
        tab_fournisseur_2->setGeometry(QRect(10, 90, 441, 192));
        lineEdit_num_4 = new QLineEdit(groupBox_5);
        lineEdit_num_4->setObjectName(QStringLiteral("lineEdit_num_4"));
        lineEdit_num_4->setGeometry(QRect(270, 50, 113, 22));
        widget_5 = new QWidget(groupBox_5);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(210, 290, 341, 211));
        widget_5->setStyleSheet(QStringLiteral("image: url(:/pics/mousealone (1).png);"));
        pb_supprimerf = new QPushButton(tab_2);
        pb_supprimerf->setObjectName(QStringLiteral("pb_supprimerf"));
        pb_supprimerf->setGeometry(QRect(290, 290, 101, 41));
        pb_supprimerf->setStyleSheet(QLatin1String("/*QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:rgb(0, 190, 155);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"} */\n"
"/*\n"
"#pb_supprimerf\n"
"{\n"
"border-radius:20px;\n"
"    background:rgb(255, 170, 0);\n"
"    border:2px solid rgb(255, 170, 0);\n"
"	font: italic 11pt \"Franklin Gothic Medium\";\n"
"}\n"
"\n"
"#pb_supprimerf:hover\n"
"{\n"
"    background:rgb(255, 170, 0);\n"
"}*/"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(260, 100, 56, 16));
        label_9->setStyleSheet(QStringLiteral("font: 15pt \"MV Boli\";"));
        le_id = new QLineEdit(tab_2);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(280, 100, 113, 22));
        pbmodifierfournisseur_2 = new QPushButton(tab_2);
        pbmodifierfournisseur_2->setObjectName(QStringLiteral("pbmodifierfournisseur_2"));
        pbmodifierfournisseur_2->setGeometry(QRect(150, 290, 101, 41));
        pbmodifierfournisseur_2->setStyleSheet(QLatin1String("/*QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:rgb(0, 190, 155);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}*/\n"
"/*\n"
"#pbmodifierfournisseur_2\n"
"{\n"
"border-radius:20px;\n"
"    background:rgb(255, 170, 0);\n"
"    border:2px solid rgb(255, 170, 0);\n"
"	font: italic 11pt \"Franklin Gothic Medium\";\n"
"}\n"
"\n"
"#pbmodifierfournisseur_2:hover\n"
"{\n"
"    background:rgb(255, 170, 0);\n"
"}*/"));
        le_typeeq = new QComboBox(tab_2);
        le_typeeq->setObjectName(QStringLiteral("le_typeeq"));
        le_typeeq->setGeometry(QRect(130, 140, 101, 22));
        widget_2 = new QWidget(tab_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(-10, 0, 891, 511));
        widget_2->setStyleSheet(QStringLiteral("/*background-image: url(:/pics/image3.jpg);*/"));
        pbgotomap = new QPushButton(widget_2);
        pbgotomap->setObjectName(QStringLiteral("pbgotomap"));
        pbgotomap->setGeometry(QRect(250, 370, 75, 23));
        le_lieumap = new QLineEdit(widget_2);
        le_lieumap->setObjectName(QStringLiteral("le_lieumap"));
        le_lieumap->setGeometry(QRect(130, 370, 113, 20));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(500, 500, 181, 31));
        widget_4 = new QWidget(tab_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(30, 0, 120, 80));
        widget_4->setStyleSheet(QStringLiteral("image: url(:/pics/logo.png);"));
        widget_6 = new QWidget(tab_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(0, 410, 171, 80));
        widget_6->setStyleSheet(QStringLiteral("image: url(:/pics/thepiechart.png);"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 30, 201, 21));
        label_10->setStyleSheet(QStringLiteral("font: 15pt \"MV Boli\";"));
        tabWidget->addTab(tab_2, QString());
        widget_2->raise();
        label_6->raise();
        pb_ajouterf->raise();
        le_nomsoc->raise();
        le_lieu->raise();
        label_7->raise();
        le_numero->raise();
        label_5->raise();
        label_8->raise();
        groupBox_5->raise();
        pb_supprimerf->raise();
        label_9->raise();
        le_id->raise();
        pbmodifierfournisseur_2->raise();
        le_typeeq->raise();
        label_11->raise();
        widget_4->raise();
        widget_6->raise();
        label_10->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        customPlot = new QCustomPlot(tab_3);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(60, 20, 661, 381));
        imp = new QPushButton(tab_3);
        imp->setObjectName(QStringLiteral("imp"));
        imp->setGeometry(QRect(390, 420, 75, 23));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        layoutWidget_2 = new QWidget(tab_5);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(260, 210, 228, 25));
        horizontalLayout_55 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        horizontalLayout_55->setContentsMargins(0, 0, 0, 0);
        sendBtn = new QPushButton(layoutWidget_2);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_55->addWidget(sendBtn);

        exitBtn = new QPushButton(layoutWidget_2);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_55->addWidget(exitBtn);

        layoutWidget_3 = new QWidget(tab_5);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(160, 70, 401, 131));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_60 = new QLabel(layoutWidget_3);
        label_60->setObjectName(QStringLiteral("label_60"));

        horizontalLayout->addWidget(label_60);

        rcpt = new QLineEdit(layoutWidget_3);
        rcpt->setObjectName(QStringLiteral("rcpt"));

        horizontalLayout->addWidget(rcpt);

        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_13 = new QLabel(tab_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 40, 47, 13));
        Pbtime = new QPushButton(tab_7);
        Pbtime->setObjectName(QStringLiteral("Pbtime"));
        Pbtime->setGeometry(QRect(270, 40, 121, 23));
        le_datestock_3 = new QDateEdit(tab_7);
        le_datestock_3->setObjectName(QStringLiteral("le_datestock_3"));
        le_datestock_3->setGeometry(QRect(140, 160, 110, 22));
        le_prixstock_3 = new QLineEdit(tab_7);
        le_prixstock_3->setObjectName(QStringLiteral("le_prixstock_3"));
        le_prixstock_3->setGeometry(QRect(130, 210, 113, 22));
        le_prixstock_3->setStyleSheet(QLatin1String("/*#le_prixstock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        le_idstock_3 = new QLineEdit(tab_7);
        le_idstock_3->setObjectName(QStringLiteral("le_idstock_3"));
        le_idstock_3->setGeometry(QRect(330, 160, 113, 22));
        le_idstock_3->setStyleSheet(QLatin1String("/*#le_idstock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        label_33 = new QLabel(tab_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(60, 160, 71, 16));
        le_qtestock_3 = new QLineEdit(tab_7);
        le_qtestock_3->setObjectName(QStringLiteral("le_qtestock_3"));
        le_qtestock_3->setGeometry(QRect(130, 120, 113, 22));
        le_qtestock_3->setStyleSheet(QLatin1String("/*#le_qtestock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        label_34 = new QLabel(tab_7);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(90, 210, 31, 16));
        le_libstock_3 = new QLineEdit(tab_7);
        le_libstock_3->setObjectName(QStringLiteral("le_libstock_3"));
        le_libstock_3->setGeometry(QRect(130, 80, 113, 22));
        le_libstock_3->setStyleSheet(QLatin1String("/*#le_libstock\n"
"{\n"
"                border-radius:20px;\n"
"        border:2px solid rgb(255, 170, 0);\n"
"    color: rgb(255, 170, 0);\n"
"}*/"));
        label_35 = new QLabel(tab_7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(70, 120, 47, 13));
        label_36 = new QLabel(tab_7);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(310, 160, 16, 16));
        label_37 = new QLabel(tab_7);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(70, 80, 41, 16));
        TimerMode = new QComboBox(tab_7);
        TimerMode->setObjectName(QStringLiteral("TimerMode"));
        TimerMode->setGeometry(QRect(190, 40, 69, 22));
        Timer = new QLineEdit(tab_7);
        Timer->setObjectName(QStringLiteral("Timer"));
        Timer->setGeometry(QRect(140, 40, 31, 20));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        pbarduinoT_O = new QPushButton(tab_8);
        pbarduinoT_O->setObjectName(QStringLiteral("pbarduinoT_O"));
        pbarduinoT_O->setGeometry(QRect(150, 42, 111, 121));
        sonore = new QPushButton(tab_8);
        sonore->setObjectName(QStringLiteral("sonore"));
        sonore->setGeometry(QRect(270, 40, 111, 121));
        sonore->setStyleSheet(QStringLiteral(""));
        layoutWidget1 = new QWidget(tab_8);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 170, 251, 16));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_2->addWidget(label_16);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_2->addWidget(label_14);

        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        chercher = new QPushButton(tab_9);
        chercher->setObjectName(QStringLiteral("chercher"));
        chercher->setGeometry(QRect(9, 344, 827, 23));
        quickWidget = new QQuickWidget(tab_9);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(9, 7, 827, 331));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quickWidget->sizePolicy().hasHeightForWidth());
        quickWidget->setSizePolicy(sizePolicy);
        quickWidget->setMinimumSize(QSize(0, 0));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        quickWidget->setSource(QUrl(QStringLiteral("qrc:/qml/mapview.qml")));
        le_adresspart2 = new QLineEdit(tab_9);
        le_adresspart2->setObjectName(QStringLiteral("le_adresspart2"));
        le_adresspart2->setGeometry(QRect(9, 373, 827, 20));
        labelLatitude = new QLabel(tab_9);
        labelLatitude->setObjectName(QStringLiteral("labelLatitude"));
        labelLatitude->setGeometry(QRect(20, 400, 46, 23));
        editLongitude = new QLineEdit(tab_9);
        editLongitude->setObjectName(QStringLiteral("editLongitude"));
        editLongitude->setGeometry(QRect(349, 401, 133, 20));
        editLatitude = new QLineEdit(tab_9);
        editLatitude->setObjectName(QStringLiteral("editLatitude"));
        editLatitude->setGeometry(QRect(70, 401, 133, 20));
        labelLongitude = new QLabel(tab_9);
        labelLongitude->setObjectName(QStringLiteral("labelLongitude"));
        labelLongitude->setGeometry(QRect(291, 400, 54, 23));
        labelInformations_2 = new QLabel(tab_9);
        labelInformations_2->setObjectName(QStringLiteral("labelInformations_2"));
        labelInformations_2->setGeometry(QRect(10, 470, 825, 13));
        labelInformations_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        layoutWidget_4 = new QWidget(tab_9);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 430, 821, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelPositionLatitude_2 = new QLabel(layoutWidget_4);
        labelPositionLatitude_2->setObjectName(QStringLiteral("labelPositionLatitude_2"));

        horizontalLayout_4->addWidget(labelPositionLatitude_2);

        positionLatitude_2 = new QLabel(layoutWidget_4);
        positionLatitude_2->setObjectName(QStringLiteral("positionLatitude_2"));

        horizontalLayout_4->addWidget(positionLatitude_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        labelPositionLongitude_2 = new QLabel(layoutWidget_4);
        labelPositionLongitude_2->setObjectName(QStringLiteral("labelPositionLongitude_2"));

        horizontalLayout_4->addWidget(labelPositionLongitude_2);

        positionLongitude_2 = new QLabel(layoutWidget_4);
        positionLongitude_2->setObjectName(QStringLiteral("positionLongitude_2"));

        horizontalLayout_4->addWidget(positionLongitude_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        boutonAller = new QPushButton(tab_9);
        boutonAller->setObjectName(QStringLiteral("boutonAller"));
        boutonAller->setGeometry(QRect(730, 400, 75, 23));
        tabWidget->addTab(tab_9, QString());
        tabWidget_4->addTab(tab_4, QString());

        retranslateUi(gestions);

        tabWidget_4->setCurrentIndex(0);
        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(gestions);
    } // setupUi

    void retranslateUi(QDialog *gestions)
    {
        gestions->setWindowTitle(QApplication::translate("gestions", "The Pie Chart", Q_NULLPTR));
        EnvoyerMail_pushButton->setText(QApplication::translate("gestions", "Envoyer Mail", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("gestions", "Consulter Statistiques", Q_NULLPTR));
        AccStockpb->setText(QApplication::translate("gestions", "Stock", Q_NULLPTR));
        AccFournisseurpb->setText(QApplication::translate("gestions", "Fournisseur", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestions", "MusicOn", Q_NULLPTR));
        Soundoffpb->setText(QApplication::translate("gestions", "MusicOff", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("gestions", "Acceuil", Q_NULLPTR));
        label_26->setText(QApplication::translate("gestions", "Ajouter Produit du stock", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestions", "Prix", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestions", "Libelle", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestions", "Quantit\303\251", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestions", "Date validation", Q_NULLPTR));
        pb_ajouters->setText(QApplication::translate("gestions", "confirmer", Q_NULLPTR));
        pbmodifierstock->setText(QApplication::translate("gestions", "Modifier", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("gestions", "Affichage des Stocks", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("gestions", "Rechercher", Q_NULLPTR));
        pushButton_date_diifrence->setText(QApplication::translate("gestions", "voir rest", Q_NULLPTR));
        label_day->setText(QString());
        label_d->setText(QString());
        label_moi->setText(QString());
        label_m->setText(QString());
        label_year->setText(QString());
        label_y->setText(QString());
        total->setText(QString());
        label_total->setText(QApplication::translate("gestions", "Total:", Q_NULLPTR));
        pushButton_total->setText(QApplication::translate("gestions", "Total", Q_NULLPTR));
        label_dt->setText(QString());
        pb_supprimers->setText(QApplication::translate("gestions", "Supprimer", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestions", "id", Q_NULLPTR));
        label->setText(QApplication::translate("gestions", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Stock</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestions", "Gestion Stock", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestions", "Stock", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestions", "nom soc", Q_NULLPTR));
        pb_ajouterf->setText(QApplication::translate("gestions", "confirmer", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestions", "lieu", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestions", "num\303\251ro tel", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestions", "type eq", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("gestions", "Affichage des Fournisseur", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("gestions", "Rechercher", Q_NULLPTR));
        pb_supprimerf->setText(QApplication::translate("gestions", "Supprimer", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestions", "id", Q_NULLPTR));
        le_id->setText(QString());
        pbmodifierfournisseur_2->setText(QApplication::translate("gestions", "Modifier", Q_NULLPTR));
        le_typeeq->clear();
        le_typeeq->insertItems(0, QStringList()
         << QApplication::translate("gestions", "alimentation", Q_NULLPTR)
         << QApplication::translate("gestions", "decoration", Q_NULLPTR)
         << QApplication::translate("gestions", "Autre", Q_NULLPTR)
        );
        pbgotomap->setText(QApplication::translate("gestions", "GotoMap", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestions", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">.</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestions", "Gestion Fournisseur", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestions", "Fournisseur", Q_NULLPTR));
        imp->setText(QApplication::translate("gestions", "imprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gestions", "Statistique", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("gestions", "Envoyer les produit expirees", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("gestions", "Exit", Q_NULLPTR));
        label_60->setText(QApplication::translate("gestions", "destinataire \303\240\n"
"", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("gestions", "Mail", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestions", "Time", Q_NULLPTR));
        Pbtime->setText(QApplication::translate("gestions", "AjouterApersTemp", Q_NULLPTR));
        label_33->setText(QApplication::translate("gestions", "Date validation", Q_NULLPTR));
        label_34->setText(QApplication::translate("gestions", "Prix", Q_NULLPTR));
        label_35->setText(QApplication::translate("gestions", "Quantit\303\251", Q_NULLPTR));
        label_36->setText(QApplication::translate("gestions", "id", Q_NULLPTR));
        label_37->setText(QApplication::translate("gestions", "Libelle", Q_NULLPTR));
        TimerMode->clear();
        TimerMode->insertItems(0, QStringList()
         << QApplication::translate("gestions", "secondes", Q_NULLPTR)
         << QApplication::translate("gestions", "minutes", Q_NULLPTR)
         << QApplication::translate("gestions", "heurs", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("gestions", "stock planifier ", Q_NULLPTR));
        pbarduinoT_O->setText(QApplication::translate("gestions", "TurnOn", Q_NULLPTR));
        sonore->setText(QApplication::translate("gestions", "desactiver alarme", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestions", "Etat:", Q_NULLPTR));
        label_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("gestions", "Arduino", Q_NULLPTR));
        chercher->setText(QApplication::translate("gestions", "Find Location", Q_NULLPTR));
        labelLatitude->setText(QApplication::translate("gestions", "Latitude :", Q_NULLPTR));
        labelLongitude->setText(QApplication::translate("gestions", "Longitude :", Q_NULLPTR));
        labelInformations_2->setText(QApplication::translate("gestions", "Informations :", Q_NULLPTR));
        labelPositionLatitude_2->setText(QApplication::translate("gestions", "Latitude :", Q_NULLPTR));
        positionLatitude_2->setText(QApplication::translate("gestions", "---", Q_NULLPTR));
        labelPositionLongitude_2->setText(QApplication::translate("gestions", "Longitude :", Q_NULLPTR));
        positionLongitude_2->setText(QApplication::translate("gestions", "---", Q_NULLPTR));
        boutonAller->setText(QApplication::translate("gestions", "Aller !", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("gestions", "Map", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_4), QApplication::translate("gestions", "Fournisseur_stock", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestions: public Ui_gestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONS_H
