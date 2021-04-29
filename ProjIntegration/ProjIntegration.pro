QT       += network core gui sql printsupport multimedia serialport location qml quickwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    clientaff.cpp \
    connection.cpp \
    main.cpp \
    mainwindow.cpp \
    produit.cpp \
    produit_stock.cpp \
    rfidmoteur.cpp \
    fournisseur.cpp \
        gestions.cpp \
        qcustomplot.cpp \
            stock.cpp\
            arduino.cpp\
    smtp.cpp

HEADERS += \
    client.h \
    fournisseur.h \
       gestions.h \
    clientaff.h \
    connection.h \
    mainwindow.h \
    produit.h \
    produit_stock.h \
    rfidmoteur.h \
    qcustomplot.h \
       stock.h\
       arduino.h\
    smtp.h

FORMS += \
    clientaff.ui \
    gestions.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    BgPic.jpg \
    pics/170033319_768811657404561_3443684265017038110_n.png \
    pics/Asset 10.png \
    pics/Asset 9.png \
    pics/BgPic.jpg \
    mapview.qml \
    pics/picMasc.png

RESOURCES += \
    pics/picc.qrc\
    qml.qrc


