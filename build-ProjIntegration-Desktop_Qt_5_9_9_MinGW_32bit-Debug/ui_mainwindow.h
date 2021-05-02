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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QPushButton *Clientproduit;
    QPushButton *Clientproduit_2;
    QWidget *tab_2;
    QPushButton *GestionStock;
    QPushButton *LivraisonCommande;
    QPushButton *PromotionEvenement;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        widget = new QWidget(MainWindow);
        widget->setObjectName(QStringLiteral("widget"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 50, 571, 241));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 101, 16));
        Clientproduit = new QPushButton(tab);
        Clientproduit->setObjectName(QStringLiteral("Clientproduit"));
        Clientproduit->setGeometry(QRect(180, 30, 181, 71));
        Clientproduit_2 = new QPushButton(tab);
        Clientproduit_2->setObjectName(QStringLiteral("Clientproduit_2"));
        Clientproduit_2->setGeometry(QRect(180, 110, 181, 71));
        tabWidget->addTab(tab, QString());
        Clientproduit->raise();
        label->raise();
        Clientproduit_2->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        GestionStock = new QPushButton(widget);
        GestionStock->setObjectName(QStringLiteral("GestionStock"));
        GestionStock->setGeometry(QRect(250, 290, 161, 71));
        LivraisonCommande = new QPushButton(widget);
        LivraisonCommande->setObjectName(QStringLiteral("LivraisonCommande"));
        LivraisonCommande->setGeometry(QRect(240, 370, 191, 91));
        PromotionEvenement = new QPushButton(widget);
        PromotionEvenement->setObjectName(QStringLiteral("PromotionEvenement"));
        PromotionEvenement->setGeometry(QRect(240, 480, 191, 71));
        MainWindow->setCentralWidget(widget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ThePieChart", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Client Produit", Q_NULLPTR));
        Clientproduit->setText(QApplication::translate("MainWindow", "Client/Produit", Q_NULLPTR));
        Clientproduit_2->setText(QApplication::translate("MainWindow", "Close Client/produit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
        GestionStock->setText(QApplication::translate("MainWindow", "Gestion", Q_NULLPTR));
        LivraisonCommande->setText(QApplication::translate("MainWindow", "Gestion livraison/commande", Q_NULLPTR));
        PromotionEvenement->setText(QApplication::translate("MainWindow", "Gestion promotion/evenement", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
