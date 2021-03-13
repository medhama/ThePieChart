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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientAff
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *LE_CIN_Supp;
    QLineEdit *LE_nom;
    QLineEdit *LE_prenom;
    QLineEdit *LE_adresse;
    QLineEdit *LE_email;
    QLineEdit *LE_NumTelephone;
    QLineEdit *LE_nbrpt;
    QPushButton *pushButton;
    QTableView *Tab_client;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLineEdit *LE_cin;
    QWidget *tab_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *LE_ID1;
    QLineEdit *LE_NOM1;
    QLineEdit *LE_PRIX1;
    QLineEdit *LE_QT1;
    QPushButton *pushButton_3;
    QTableView *Tab_produit;
    QPushButton *pushButton_4;
    QLineEdit *LE_ID_SUPP;
    QLabel *label_13;

    void setupUi(QDialog *ClientAff)
    {
        if (ClientAff->objectName().isEmpty())
            ClientAff->setObjectName(QStringLiteral("ClientAff"));
        ClientAff->resize(692, 418);
        tabWidget = new QTabWidget(ClientAff);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(90, 70, 551, 311));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 210, 47, 13));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 47, 13));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 47, 13));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 47, 13));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 200, 91, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 170, 91, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 140, 47, 13));
        LE_CIN_Supp = new QLineEdit(tab);
        LE_CIN_Supp->setObjectName(QStringLiteral("LE_CIN_Supp"));
        LE_CIN_Supp->setGeometry(QRect(400, 210, 113, 20));
        LE_nom = new QLineEdit(tab);
        LE_nom->setObjectName(QStringLiteral("LE_nom"));
        LE_nom->setGeometry(QRect(120, 50, 113, 20));
        LE_prenom = new QLineEdit(tab);
        LE_prenom->setObjectName(QStringLiteral("LE_prenom"));
        LE_prenom->setGeometry(QRect(120, 80, 113, 20));
        LE_adresse = new QLineEdit(tab);
        LE_adresse->setObjectName(QStringLiteral("LE_adresse"));
        LE_adresse->setGeometry(QRect(120, 110, 113, 20));
        LE_email = new QLineEdit(tab);
        LE_email->setObjectName(QStringLiteral("LE_email"));
        LE_email->setGeometry(QRect(120, 140, 113, 20));
        LE_NumTelephone = new QLineEdit(tab);
        LE_NumTelephone->setObjectName(QStringLiteral("LE_NumTelephone"));
        LE_NumTelephone->setGeometry(QRect(120, 170, 113, 20));
        LE_nbrpt = new QLineEdit(tab);
        LE_nbrpt->setObjectName(QStringLiteral("LE_nbrpt"));
        LE_nbrpt->setGeometry(QRect(120, 200, 113, 20));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 75, 23));
        Tab_client = new QTableView(tab);
        Tab_client->setObjectName(QStringLiteral("Tab_client"));
        Tab_client->setGeometry(QRect(260, 10, 256, 192));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 240, 75, 23));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 20, 47, 13));
        LE_cin = new QLineEdit(tab);
        LE_cin->setObjectName(QStringLiteral("LE_cin"));
        LE_cin->setGeometry(QRect(120, 20, 113, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 80, 47, 13));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 110, 47, 13));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 140, 47, 13));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 170, 47, 13));
        LE_ID1 = new QLineEdit(tab_2);
        LE_ID1->setObjectName(QStringLiteral("LE_ID1"));
        LE_ID1->setGeometry(QRect(90, 80, 113, 20));
        LE_NOM1 = new QLineEdit(tab_2);
        LE_NOM1->setObjectName(QStringLiteral("LE_NOM1"));
        LE_NOM1->setGeometry(QRect(90, 110, 113, 20));
        LE_PRIX1 = new QLineEdit(tab_2);
        LE_PRIX1->setObjectName(QStringLiteral("LE_PRIX1"));
        LE_PRIX1->setGeometry(QRect(90, 140, 113, 20));
        LE_QT1 = new QLineEdit(tab_2);
        LE_QT1->setObjectName(QStringLiteral("LE_QT1"));
        LE_QT1->setGeometry(QRect(90, 170, 113, 20));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 220, 75, 23));
        Tab_produit = new QTableView(tab_2);
        Tab_produit->setObjectName(QStringLiteral("Tab_produit"));
        Tab_produit->setGeometry(QRect(260, 10, 256, 192));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(430, 250, 75, 23));
        LE_ID_SUPP = new QLineEdit(tab_2);
        LE_ID_SUPP->setObjectName(QStringLiteral("LE_ID_SUPP"));
        LE_ID_SUPP->setGeometry(QRect(370, 220, 113, 20));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(340, 220, 31, 16));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(ClientAff);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClientAff);
    } // setupUi

    void retranslateUi(QDialog *ClientAff)
    {
        ClientAff->setWindowTitle(QApplication::translate("ClientAff", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ClientAff", "CIN", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientAff", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("ClientAff", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("ClientAff", "Adresse", Q_NULLPTR));
        label_5->setText(QApplication::translate("ClientAff", "Nombre de points", Q_NULLPTR));
        label_6->setText(QApplication::translate("ClientAff", "Numero telephone", Q_NULLPTR));
        label_7->setText(QApplication::translate("ClientAff", "Email", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClientAff", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ClientAff", "Supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("ClientAff", "CIN", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ClientAff", "Client", Q_NULLPTR));
        label_9->setText(QApplication::translate("ClientAff", "Id", Q_NULLPTR));
        label_10->setText(QApplication::translate("ClientAff", "Nom", Q_NULLPTR));
        label_11->setText(QApplication::translate("ClientAff", "Prix", Q_NULLPTR));
        label_12->setText(QApplication::translate("ClientAff", "Quantite", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ClientAff", "Ajouter", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ClientAff", "Supprimer", Q_NULLPTR));
        label_13->setText(QApplication::translate("ClientAff", "Id", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ClientAff", "Produit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientAff: public Ui_ClientAff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTAFF_H
