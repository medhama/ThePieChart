/********************************************************************************
** Form generated from reading UI file 'clientaff.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTAFF_H
#define UI_CLIENTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientAff
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *Tab_client;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *LE_cin;
    QLabel *label_2;
    QLineEdit *LE_nom;
    QLabel *label_3;
    QLineEdit *LE_prenom;
    QLabel *label_4;
    QLineEdit *LE_adresse;
    QLabel *label_7;
    QLineEdit *LE_email;
    QLabel *label_6;
    QLineEdit *LE_NumTelephone;
    QLabel *label_5;
    QLineEdit *LE_nbrpt;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *SearchBar_Client;
    QPushButton *Rechercher_Client_button;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox1;
    QPushButton *SortButton;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *CreateClientPdfFile;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QLineEdit *LE_CIN_Supp;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_12;
    QFrame *frame;
    QLabel *label_17;
    QWidget *widget_4;
    QPushButton *GenWinner;
    QWidget *tab_2;
    QTableView *Tab_produit;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QLineEdit *LE_ID1;
    QLabel *label_10;
    QLineEdit *LE_NOM1;
    QLabel *label_11;
    QLineEdit *LE_PRIX1;
    QLabel *label_12;
    QLineEdit *LE_QT1;
    QLabel *label_16;
    QTextEdit *TE_description;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_3;
    QPushButton *SelectModifConfirm;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *CreatePDF;
    QPushButton *SelectModifProd;
    QPushButton *pushButton_4;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *LE_ID_SUPP;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_13;
    QFrame *frame_2;
    QLabel *label_18;
    QWidget *horizontalLayoutWidget_13;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *LE_ProdRecherche;
    QPushButton *RechercherProduit;
    QComboBox *comboBox22;
    QPushButton *SortButton_2;
    QWidget *widget;
    QWidget *tab_3;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLineEdit *LE_Subject_Mail;
    QLabel *label_14;
    QPlainTextEdit *PTE_Message_Mail;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *SendMail;
    QPushButton *ResetButton;
    QWidget *horizontalLayoutWidget_14;
    QHBoxLayout *horizontalLayout_16;
    QFrame *frame_3;
    QLabel *label_21;
    QWidget *widget_2;
    QWidget *tab_5;
    QLineEdit *LE_idprod_S;
    QLineEdit *LE_IdStock_P;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *Ajouter_Prod_Stock;
    QTableView *tab_prod_stock;
    QLabel *labelProdName;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *LE_idprod_S_2;
    QLineEdit *LE_IdStock_P_2;
    QPushButton *Supprimer_Ingred;
    QWidget *horizontalLayoutWidget_16;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Afficher_Ingredients;
    QPushButton *Afficher_Ingredients_2;
    QPushButton *MaxProd;
    QLineEdit *LE_Ingredients;
    QLineEdit *LE_QT_NE;
    QLabel *label_27;
    QLabel *maxProdLabel;
    QWidget *tab_6;
    QPushButton *pushButton_7;
    QLineEdit *SetTimeLE;
    QLabel *updatelabel;
    QWidget *tab_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *avrir;
    QPushButton *Play;
    QPushButton *pause;
    QPushButton *stop;
    QProgressBar *avance;
    QHBoxLayout *horizontalLayout;
    QPushButton *mute;
    QSlider *volumen;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_19;
    QPushButton *ClickSoundOnOff;
    QLabel *label_20;
    QWidget *horizontalLayoutWidget_15;
    QHBoxLayout *horizontalLayout_17;
    QFrame *frame_4;
    QLabel *label_22;
    QWidget *widget_3;

    void setupUi(QDialog *ClientAff)
    {
        if (ClientAff->objectName().isEmpty())
            ClientAff->setObjectName(QStringLiteral("ClientAff"));
        ClientAff->setEnabled(true);
        ClientAff->resize(817, 495);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        ClientAff->setPalette(palette);
        tabWidget = new QTabWidget(ClientAff);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 0, 791, 481));
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Medium"));
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("#tabWidget\n"
"{\n"
"\n"
"background-image: url(:/BgPic.jpg);\n"
"	image: url(:/BgPic.jpg);\n"
"\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Tab_client = new QTableView(tab);
        Tab_client->setObjectName(QStringLiteral("Tab_client"));
        Tab_client->setGeometry(QRect(300, 70, 471, 192));
        QFont font1;
        font1.setFamily(QStringLiteral("Franklin Gothic Medium"));
        Tab_client->setFont(font1);
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 30, 261, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(13);
        formLayout->setContentsMargins(0, 0, 0, 6);
        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        LE_cin = new QLineEdit(formLayoutWidget);
        LE_cin->setObjectName(QStringLiteral("LE_cin"));

        formLayout->setWidget(0, QFormLayout::FieldRole, LE_cin);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        LE_nom = new QLineEdit(formLayoutWidget);
        LE_nom->setObjectName(QStringLiteral("LE_nom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, LE_nom);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        LE_prenom = new QLineEdit(formLayoutWidget);
        LE_prenom->setObjectName(QStringLiteral("LE_prenom"));

        formLayout->setWidget(2, QFormLayout::FieldRole, LE_prenom);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        LE_adresse = new QLineEdit(formLayoutWidget);
        LE_adresse->setObjectName(QStringLiteral("LE_adresse"));

        formLayout->setWidget(3, QFormLayout::FieldRole, LE_adresse);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        LE_email = new QLineEdit(formLayoutWidget);
        LE_email->setObjectName(QStringLiteral("LE_email"));

        formLayout->setWidget(4, QFormLayout::FieldRole, LE_email);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        LE_NumTelephone = new QLineEdit(formLayoutWidget);
        LE_NumTelephone->setObjectName(QStringLiteral("LE_NumTelephone"));

        formLayout->setWidget(5, QFormLayout::FieldRole, LE_NumTelephone);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        LE_nbrpt = new QLineEdit(formLayoutWidget);
        LE_nbrpt->setObjectName(QStringLiteral("LE_nbrpt"));

        formLayout->setWidget(6, QFormLayout::FieldRole, LE_nbrpt);

        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(510, 20, 261, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        SearchBar_Client = new QLineEdit(horizontalLayoutWidget);
        SearchBar_Client->setObjectName(QStringLiteral("SearchBar_Client"));

        horizontalLayout_3->addWidget(SearchBar_Client);

        Rechercher_Client_button = new QPushButton(horizontalLayoutWidget);
        Rechercher_Client_button->setObjectName(QStringLiteral("Rechercher_Client_button"));
        Rechercher_Client_button->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(Rechercher_Client_button);

        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(290, 20, 218, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox1 = new QComboBox(horizontalLayoutWidget_2);
        comboBox1->setObjectName(QStringLiteral("comboBox1"));
        comboBox1->setStyleSheet(QStringLiteral(""));
        comboBox1->setDuplicatesEnabled(false);

        horizontalLayout_4->addWidget(comboBox1);

        SortButton = new QPushButton(horizontalLayoutWidget_2);
        SortButton->setObjectName(QStringLiteral("SortButton"));
        SortButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(SortButton);

        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(350, 310, 291, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        CreateClientPdfFile = new QPushButton(horizontalLayoutWidget_3);
        CreateClientPdfFile->setObjectName(QStringLiteral("CreateClientPdfFile"));
        CreateClientPdfFile->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(CreateClientPdfFile);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(pushButton_2);

        horizontalLayoutWidget_4 = new QWidget(tab);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(350, 270, 291, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        horizontalLayout_6->addWidget(label_15);

        LE_CIN_Supp = new QLineEdit(horizontalLayoutWidget_4);
        LE_CIN_Supp->setObjectName(QStringLiteral("LE_CIN_Supp"));
        LE_CIN_Supp->setAutoFillBackground(false);

        horizontalLayout_6->addWidget(LE_CIN_Supp);

        horizontalLayoutWidget_5 = new QWidget(tab);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 260, 261, 51));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(pushButton);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(pushButton_6);

        horizontalLayoutWidget_10 = new QWidget(tab);
        horizontalLayoutWidget_10->setObjectName(QStringLiteral("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(0, 350, 261, 101));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(horizontalLayoutWidget_10);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("image: url(:/Asset 9.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_12->addWidget(frame);

        label_17 = new QLabel(horizontalLayoutWidget_10);
        label_17->setObjectName(QStringLiteral("label_17"));
        QFont font2;
        font2.setFamily(QStringLiteral("Franklin Gothic Book"));
        font2.setPointSize(18);
        label_17->setFont(font2);

        horizontalLayout_12->addWidget(label_17);

        widget_4 = new QWidget(tab);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(640, 310, 141, 141));
        widget_4->setStyleSheet(QStringLiteral("image: url(:/picMasc.png);"));
        GenWinner = new QPushButton(tab);
        GenWinner->setObjectName(QStringLiteral("GenWinner"));
        GenWinner->setGeometry(QRect(450, 390, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Tab_produit = new QTableView(tab_2);
        Tab_produit->setObjectName(QStringLiteral("Tab_produit"));
        Tab_produit->setGeometry(QRect(260, 80, 461, 211));
        Tab_produit->setFont(font1);
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 20, 241, 221));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        LE_ID1 = new QLineEdit(formLayoutWidget_2);
        LE_ID1->setObjectName(QStringLiteral("LE_ID1"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LE_ID1);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        LE_NOM1 = new QLineEdit(formLayoutWidget_2);
        LE_NOM1->setObjectName(QStringLiteral("LE_NOM1"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, LE_NOM1);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_11);

        LE_PRIX1 = new QLineEdit(formLayoutWidget_2);
        LE_PRIX1->setObjectName(QStringLiteral("LE_PRIX1"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, LE_PRIX1);

        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_12);

        LE_QT1 = new QLineEdit(formLayoutWidget_2);
        LE_QT1->setObjectName(QStringLiteral("LE_QT1"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, LE_QT1);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_16);

        TE_description = new QTextEdit(formLayoutWidget_2);
        TE_description->setObjectName(QStringLiteral("TE_description"));
        TE_description->setStyleSheet(QLatin1String("  background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, TE_description);

        horizontalLayoutWidget_6 = new QWidget(tab_2);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 240, 241, 61));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_8->addWidget(pushButton_3);

        SelectModifConfirm = new QPushButton(horizontalLayoutWidget_6);
        SelectModifConfirm->setObjectName(QStringLiteral("SelectModifConfirm"));
        SelectModifConfirm->setStyleSheet(QStringLiteral(""));

        horizontalLayout_8->addWidget(SelectModifConfirm);

        horizontalLayoutWidget_7 = new QWidget(tab_2);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(330, 330, 301, 61));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        CreatePDF = new QPushButton(horizontalLayoutWidget_7);
        CreatePDF->setObjectName(QStringLiteral("CreatePDF"));
        CreatePDF->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(CreatePDF);

        SelectModifProd = new QPushButton(horizontalLayoutWidget_7);
        SelectModifProd->setObjectName(QStringLiteral("SelectModifProd"));
        SelectModifProd->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(SelectModifProd);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(pushButton_4);

        horizontalLayoutWidget_8 = new QWidget(tab_2);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(330, 300, 301, 51));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_8);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        horizontalLayout_10->addWidget(label_13);

        LE_ID_SUPP = new QLineEdit(horizontalLayoutWidget_8);
        LE_ID_SUPP->setObjectName(QStringLiteral("LE_ID_SUPP"));

        horizontalLayout_10->addWidget(LE_ID_SUPP);

        horizontalLayoutWidget_11 = new QWidget(tab_2);
        horizontalLayoutWidget_11->setObjectName(QStringLiteral("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(10, 340, 261, 101));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(horizontalLayoutWidget_11);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("image: url(:/Asset 9.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_13->addWidget(frame_2);

        label_18 = new QLabel(horizontalLayoutWidget_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font2);

        horizontalLayout_13->addWidget(label_18);

        horizontalLayoutWidget_13 = new QWidget(tab_2);
        horizontalLayoutWidget_13->setObjectName(QStringLiteral("horizontalLayoutWidget_13"));
        horizontalLayoutWidget_13->setGeometry(QRect(500, 30, 231, 51));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_13);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        LE_ProdRecherche = new QLineEdit(horizontalLayoutWidget_13);
        LE_ProdRecherche->setObjectName(QStringLiteral("LE_ProdRecherche"));

        horizontalLayout_15->addWidget(LE_ProdRecherche);

        RechercherProduit = new QPushButton(horizontalLayoutWidget_13);
        RechercherProduit->setObjectName(QStringLiteral("RechercherProduit"));

        horizontalLayout_15->addWidget(RechercherProduit);

        comboBox22 = new QComboBox(tab_2);
        comboBox22->setObjectName(QStringLiteral("comboBox22"));
        comboBox22->setEnabled(true);
        comboBox22->setGeometry(QRect(269, 41, 135, 20));
        comboBox22->setStyleSheet(QStringLiteral(""));
        comboBox22->setDuplicatesEnabled(false);
        SortButton_2 = new QPushButton(tab_2);
        SortButton_2->setObjectName(QStringLiteral("SortButton_2"));
        SortButton_2->setGeometry(QRect(410, 40, 75, 23));
        SortButton_2->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(tab_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(640, 310, 141, 141));
        widget->setStyleSheet(QStringLiteral("image: url(:/picMasc.png);"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        formLayoutWidget_3 = new QWidget(tab_3);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(210, 40, 351, 281));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        LE_Subject_Mail = new QLineEdit(formLayoutWidget_3);
        LE_Subject_Mail->setObjectName(QStringLiteral("LE_Subject_Mail"));
        LE_Subject_Mail->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, LE_Subject_Mail);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        PTE_Message_Mail = new QPlainTextEdit(formLayoutWidget_3);
        PTE_Message_Mail->setObjectName(QStringLiteral("PTE_Message_Mail"));
        PTE_Message_Mail->setFont(font1);
        PTE_Message_Mail->setStyleSheet(QLatin1String("  background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, PTE_Message_Mail);

        horizontalLayoutWidget_9 = new QWidget(tab_3);
        horizontalLayoutWidget_9->setObjectName(QStringLiteral("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(210, 320, 351, 41));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        SendMail = new QPushButton(horizontalLayoutWidget_9);
        SendMail->setObjectName(QStringLiteral("SendMail"));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        SendMail->setFont(font3);
        SendMail->setStyleSheet(QStringLiteral(""));

        horizontalLayout_11->addWidget(SendMail);

        ResetButton = new QPushButton(horizontalLayoutWidget_9);
        ResetButton->setObjectName(QStringLiteral("ResetButton"));

        horizontalLayout_11->addWidget(ResetButton);

        horizontalLayoutWidget_14 = new QWidget(tab_3);
        horizontalLayoutWidget_14->setObjectName(QStringLiteral("horizontalLayoutWidget_14"));
        horizontalLayoutWidget_14->setGeometry(QRect(0, 360, 211, 81));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_14);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(horizontalLayoutWidget_14);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QStringLiteral("image: url(:/Asset 9.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        horizontalLayout_16->addWidget(frame_3);

        label_21 = new QLabel(horizontalLayoutWidget_14);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font2);

        horizontalLayout_16->addWidget(label_21);

        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(640, 310, 141, 141));
        widget_2->setStyleSheet(QStringLiteral("image: url(:/picMasc.png);"));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        LE_idprod_S = new QLineEdit(tab_5);
        LE_idprod_S->setObjectName(QStringLiteral("LE_idprod_S"));
        LE_idprod_S->setGeometry(QRect(130, 90, 113, 20));
        LE_IdStock_P = new QLineEdit(tab_5);
        LE_IdStock_P->setObjectName(QStringLiteral("LE_IdStock_P"));
        LE_IdStock_P->setGeometry(QRect(130, 120, 113, 20));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(60, 90, 71, 16));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(60, 120, 47, 13));
        Ajouter_Prod_Stock = new QPushButton(tab_5);
        Ajouter_Prod_Stock->setObjectName(QStringLiteral("Ajouter_Prod_Stock"));
        Ajouter_Prod_Stock->setGeometry(QRect(140, 190, 75, 23));
        tab_prod_stock = new QTableView(tab_5);
        tab_prod_stock->setObjectName(QStringLiteral("tab_prod_stock"));
        tab_prod_stock->setGeometry(QRect(330, 20, 421, 211));
        labelProdName = new QLabel(tab_5);
        labelProdName->setObjectName(QStringLiteral("labelProdName"));
        labelProdName->setGeometry(QRect(340, 320, 171, 31));
        labelProdName->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(540, 350, 47, 13));
        label_26 = new QLabel(tab_5);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(540, 320, 71, 16));
        LE_idprod_S_2 = new QLineEdit(tab_5);
        LE_idprod_S_2->setObjectName(QStringLiteral("LE_idprod_S_2"));
        LE_idprod_S_2->setGeometry(QRect(610, 320, 113, 20));
        LE_IdStock_P_2 = new QLineEdit(tab_5);
        LE_IdStock_P_2->setObjectName(QStringLiteral("LE_IdStock_P_2"));
        LE_IdStock_P_2->setGeometry(QRect(610, 350, 113, 20));
        Supprimer_Ingred = new QPushButton(tab_5);
        Supprimer_Ingred->setObjectName(QStringLiteral("Supprimer_Ingred"));
        Supprimer_Ingred->setGeometry(QRect(620, 380, 75, 23));
        horizontalLayoutWidget_16 = new QWidget(tab_5);
        horizontalLayoutWidget_16->setObjectName(QStringLiteral("horizontalLayoutWidget_16"));
        horizontalLayoutWidget_16->setGeometry(QRect(330, 230, 381, 85));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_16);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Afficher_Ingredients = new QPushButton(horizontalLayoutWidget_16);
        Afficher_Ingredients->setObjectName(QStringLiteral("Afficher_Ingredients"));

        verticalLayout_2->addWidget(Afficher_Ingredients);

        Afficher_Ingredients_2 = new QPushButton(horizontalLayoutWidget_16);
        Afficher_Ingredients_2->setObjectName(QStringLiteral("Afficher_Ingredients_2"));

        verticalLayout_2->addWidget(Afficher_Ingredients_2);

        MaxProd = new QPushButton(horizontalLayoutWidget_16);
        MaxProd->setObjectName(QStringLiteral("MaxProd"));

        verticalLayout_2->addWidget(MaxProd);


        horizontalLayout_18->addLayout(verticalLayout_2);

        LE_Ingredients = new QLineEdit(horizontalLayoutWidget_16);
        LE_Ingredients->setObjectName(QStringLiteral("LE_Ingredients"));

        horizontalLayout_18->addWidget(LE_Ingredients);

        LE_QT_NE = new QLineEdit(tab_5);
        LE_QT_NE->setObjectName(QStringLiteral("LE_QT_NE"));
        LE_QT_NE->setGeometry(QRect(130, 150, 113, 20));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 150, 121, 20));
        maxProdLabel = new QLabel(tab_5);
        maxProdLabel->setObjectName(QStringLiteral("maxProdLabel"));
        maxProdLabel->setGeometry(QRect(230, 290, 101, 31));
        maxProdLabel->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton_7 = new QPushButton(tab_6);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(200, 140, 75, 23));
        SetTimeLE = new QLineEdit(tab_6);
        SetTimeLE->setObjectName(QStringLiteral("SetTimeLE"));
        SetTimeLE->setGeometry(QRect(290, 140, 113, 20));
        updatelabel = new QLabel(tab_6);
        updatelabel->setObjectName(QStringLiteral("updatelabel"));
        updatelabel->setGeometry(QRect(190, 60, 47, 13));
        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 40, 541, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        avrir = new QPushButton(layoutWidget);
        avrir->setObjectName(QStringLiteral("avrir"));

        horizontalLayout_2->addWidget(avrir);

        Play = new QPushButton(layoutWidget);
        Play->setObjectName(QStringLiteral("Play"));

        horizontalLayout_2->addWidget(Play);

        pause = new QPushButton(layoutWidget);
        pause->setObjectName(QStringLiteral("pause"));

        horizontalLayout_2->addWidget(pause);

        stop = new QPushButton(layoutWidget);
        stop->setObjectName(QStringLiteral("stop"));

        horizontalLayout_2->addWidget(stop);


        verticalLayout->addLayout(horizontalLayout_2);

        avance = new QProgressBar(layoutWidget);
        avance->setObjectName(QStringLiteral("avance"));
        avance->setValue(0);

        verticalLayout->addWidget(avance);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mute = new QPushButton(layoutWidget);
        mute->setObjectName(QStringLiteral("mute"));

        horizontalLayout->addWidget(mute);

        volumen = new QSlider(layoutWidget);
        volumen->setObjectName(QStringLiteral("volumen"));
        volumen->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(volumen);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayoutWidget_12 = new QWidget(tab_4);
        horizontalLayoutWidget_12->setObjectName(QStringLiteral("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(30, 300, 160, 41));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget_12);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_14->addWidget(label_19);

        ClickSoundOnOff = new QPushButton(horizontalLayoutWidget_12);
        ClickSoundOnOff->setObjectName(QStringLiteral("ClickSoundOnOff"));

        horizontalLayout_14->addWidget(ClickSoundOnOff);

        label_20 = new QLabel(tab_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(100, 20, 71, 16));
        horizontalLayoutWidget_15 = new QWidget(tab_4);
        horizontalLayoutWidget_15->setObjectName(QStringLiteral("horizontalLayoutWidget_15"));
        horizontalLayoutWidget_15->setGeometry(QRect(10, 360, 211, 81));
        horizontalLayout_17 = new QHBoxLayout(horizontalLayoutWidget_15);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(horizontalLayoutWidget_15);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setStyleSheet(QStringLiteral("image: url(:/Asset 9.png);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_17->addWidget(frame_4);

        label_22 = new QLabel(horizontalLayoutWidget_15);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font2);

        horizontalLayout_17->addWidget(label_22);

        widget_3 = new QWidget(tab_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(640, 310, 141, 141));
        widget_3->setStyleSheet(QStringLiteral("image: url(:/picMasc.png);"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(ClientAff);

        tabWidget->setCurrentIndex(0);
        comboBox1->setCurrentIndex(0);
        comboBox22->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClientAff);
    } // setupUi

    void retranslateUi(QDialog *ClientAff)
    {
        ClientAff->setWindowTitle(QApplication::translate("ClientAff", "The Pie Chart", Q_NULLPTR));
        label_8->setText(QApplication::translate("ClientAff", "CIN", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientAff", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("ClientAff", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("ClientAff", "Adresse", Q_NULLPTR));
        label_7->setText(QApplication::translate("ClientAff", "Email", Q_NULLPTR));
        label_6->setText(QApplication::translate("ClientAff", "Numero telephone", Q_NULLPTR));
        label_5->setText(QApplication::translate("ClientAff", "Nombre de points", Q_NULLPTR));
        Rechercher_Client_button->setText(QApplication::translate("ClientAff", "Rechercher", Q_NULLPTR));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("ClientAff", "Nom descendant", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Nom ascendant", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Prenom descendant", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Prenom ascendant", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Nombre de points desc", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Nombre de points Asc", Q_NULLPTR)
        );
        SortButton->setText(QApplication::translate("ClientAff", "Trier", Q_NULLPTR));
        CreateClientPdfFile->setText(QApplication::translate("ClientAff", "Create Pdf", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ClientAff", "Modifier", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ClientAff", "Supprimer", Q_NULLPTR));
        label_15->setText(QApplication::translate("ClientAff", "CIN", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClientAff", "Ajouter", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("ClientAff", "Confirmer", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        frame->setWhatsThis(QApplication::translate("ClientAff", "<html><head/><body><p><img src=\":/Asset 9.png\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_17->setText(QApplication::translate("ClientAff", "Gestion Clients", Q_NULLPTR));
        GenWinner->setText(QApplication::translate("ClientAff", "Winner!", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ClientAff", "Client", Q_NULLPTR));
        label_9->setText(QApplication::translate("ClientAff", "Id", Q_NULLPTR));
        label_10->setText(QApplication::translate("ClientAff", "Nom", Q_NULLPTR));
        label_11->setText(QApplication::translate("ClientAff", "Prix", Q_NULLPTR));
        label_12->setText(QApplication::translate("ClientAff", "Quantite", Q_NULLPTR));
        label_16->setText(QApplication::translate("ClientAff", "Description", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ClientAff", "Ajouter", Q_NULLPTR));
        SelectModifConfirm->setText(QApplication::translate("ClientAff", "Confirm", Q_NULLPTR));
        CreatePDF->setText(QApplication::translate("ClientAff", "Create PDF", Q_NULLPTR));
        SelectModifProd->setText(QApplication::translate("ClientAff", "Modifier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ClientAff", "Supprimer", Q_NULLPTR));
        label_13->setText(QApplication::translate("ClientAff", "Id", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        frame_2->setWhatsThis(QApplication::translate("ClientAff", "<html><head/><body><p><img src=\":/Asset 9.png\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_18->setText(QApplication::translate("ClientAff", "Gestion Produits", Q_NULLPTR));
        RechercherProduit->setText(QApplication::translate("ClientAff", "Rechercher", Q_NULLPTR));
        comboBox22->clear();
        comboBox22->insertItems(0, QStringList()
         << QApplication::translate("ClientAff", "Prix Ascendant", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Prix Descendant", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Quantite Asendant", Q_NULLPTR)
         << QApplication::translate("ClientAff", "Quantite Descendant", Q_NULLPTR)
        );
        SortButton_2->setText(QApplication::translate("ClientAff", "Trier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ClientAff", "Produit", Q_NULLPTR));
        label->setText(QApplication::translate("ClientAff", "Subject", Q_NULLPTR));
        label_14->setText(QApplication::translate("ClientAff", "Message", Q_NULLPTR));
        SendMail->setText(QApplication::translate("ClientAff", "Send Mail", Q_NULLPTR));
        ResetButton->setText(QApplication::translate("ClientAff", "Reset", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        frame_3->setWhatsThis(QApplication::translate("ClientAff", "<html><head/><body><p><img src=\":/Asset 9.png\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_21->setText(QApplication::translate("ClientAff", "Send Email", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ClientAff", "Send Mail", Q_NULLPTR));
        label_23->setText(QApplication::translate("ClientAff", "Id Produit", Q_NULLPTR));
        label_24->setText(QApplication::translate("ClientAff", "Id Stock", Q_NULLPTR));
        Ajouter_Prod_Stock->setText(QApplication::translate("ClientAff", "Ajouter", Q_NULLPTR));
        labelProdName->setText(QString());
        label_25->setText(QApplication::translate("ClientAff", "Id Stock", Q_NULLPTR));
        label_26->setText(QApplication::translate("ClientAff", "Id Produit", Q_NULLPTR));
        Supprimer_Ingred->setText(QApplication::translate("ClientAff", "Supprimer", Q_NULLPTR));
        Afficher_Ingredients->setText(QApplication::translate("ClientAff", "Afficher Produit => Ingredients", Q_NULLPTR));
        Afficher_Ingredients_2->setText(QApplication::translate("ClientAff", "Afficher Ingredient => Produits", Q_NULLPTR));
        MaxProd->setText(QApplication::translate("ClientAff", "Afficher max Produit", Q_NULLPTR));
        label_27->setText(QApplication::translate("ClientAff", "Quantit\303\251 necessaire", Q_NULLPTR));
        maxProdLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("ClientAff", "Stock_Produit", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("ClientAff", "Open", Q_NULLPTR));
        SetTimeLE->setText(QString());
        updatelabel->setText(QApplication::translate("ClientAff", "update", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ClientAff", "Arduino", Q_NULLPTR));
        avrir->setText(QApplication::translate("ClientAff", "Import media", Q_NULLPTR));
        Play->setText(QApplication::translate("ClientAff", "Play", Q_NULLPTR));
        pause->setText(QApplication::translate("ClientAff", "Pause", Q_NULLPTR));
        stop->setText(QApplication::translate("ClientAff", "Stop", Q_NULLPTR));
        mute->setText(QApplication::translate("ClientAff", "Mute", Q_NULLPTR));
        label_19->setText(QApplication::translate("ClientAff", "Click Sound", Q_NULLPTR));
        ClickSoundOnOff->setText(QApplication::translate("ClientAff", "On", Q_NULLPTR));
        label_20->setText(QApplication::translate("ClientAff", "Play Music", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        frame_4->setWhatsThis(QApplication::translate("ClientAff", "<html><head/><body><p><img src=\":/Asset 9.png\"/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_22->setText(QApplication::translate("ClientAff", "Settings", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ClientAff", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientAff: public Ui_ClientAff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTAFF_H
