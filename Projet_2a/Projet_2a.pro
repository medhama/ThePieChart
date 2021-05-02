QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT +=  network printsupport sql widgets multimedia
TARGET = smtp
CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connexion.cpp \
    gestioncommandes.cpp \
    gestionlivraisons.cpp \
    main.cpp \
    mainwindow.cpp \
    smtp.cpp

HEADERS += \
    connexion.h \
    gestioncommandes.h \
    gestionlivraisons.h \
    mainwindow.h \
    smtp.h

FORMS += \
    gestionlivraisons.ui \
    mainwindow.ui

RC_ICONS = icono.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pics.qrc
