/********************************************************************************
** Form generated from reading UI file 'mainwindowvideo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWVIDEO_H
#define UI_MAINWINDOWVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowvideo
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuvideo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowvideo)
    {
        if (MainWindowvideo->objectName().isEmpty())
            MainWindowvideo->setObjectName(QStringLiteral("MainWindowvideo"));
        MainWindowvideo->resize(738, 600);
        actionOpen = new QAction(MainWindowvideo);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icones/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionPlay = new QAction(MainWindowvideo);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icones/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon1);
        actionPause = new QAction(MainWindowvideo);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("icones/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStop = new QAction(MainWindowvideo);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icones/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        centralwidget = new QWidget(MainWindowvideo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindowvideo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowvideo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 738, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuvideo = new QMenu(menubar);
        menuvideo->setObjectName(QStringLiteral("menuvideo"));
        MainWindowvideo->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowvideo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowvideo->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuvideo->menuAction());
        menuFile->addAction(actionOpen);
        menuvideo->addAction(actionPlay);
        menuvideo->addSeparator();
        menuvideo->addAction(actionPause);
        menuvideo->addSeparator();
        menuvideo->addAction(actionStop);

        retranslateUi(MainWindowvideo);

        QMetaObject::connectSlotsByName(MainWindowvideo);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowvideo)
    {
        MainWindowvideo->setWindowTitle(QApplication::translate("MainWindowvideo", "MainWindow", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindowvideo", "Open", Q_NULLPTR));
        actionPlay->setText(QApplication::translate("MainWindowvideo", "Play", Q_NULLPTR));
        actionPause->setText(QApplication::translate("MainWindowvideo", "Pause", Q_NULLPTR));
        actionStop->setText(QApplication::translate("MainWindowvideo", "Stop", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindowvideo", "File", Q_NULLPTR));
        menuvideo->setTitle(QApplication::translate("MainWindowvideo", "video", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowvideo: public Ui_MainWindowvideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWVIDEO_H
