QT       += network core gui sql printsupport multimedia serialport location qml quickwidgets multimediawidgets widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

RC_ICONS = myappico.ico

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
            popgas.cpp\
            gestioncommandes.cpp \
            gestionlivraisons.cpp \
            evennement.cpp \
            gestioneventpromo.cpp \
            mailling.cpp \
            promotion.cpp\
            chatconnection.cpp \
            Clients.cpp \
             employee.cpp \
             historique1.cpp \
             mainwindowvideo.cpp \
             notif.cpp \
             peermanager.cpp \
             profile.cpp \
             server.cpp\
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
       popgas.h\
       gestioncommandes.h \
       gestionlivraisons.h \
       promotion.h\
       evennement.h \
       gestioneventpromo.h \
       mailling.h \
       chatconnection.h \
       mainwindowvideo.h\
       Clients.h \
       employee.h \
       historique1.h \
       notif.h \
       peermanager.h \
       profile.h \
       server.h\
    smtp.h

FORMS += \
    clientaff.ui \
    gestions.ui \
    gestionlivraisons.ui \
    gestioneventpromo.ui \
    mainwindowvideo.ui\
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    BgPic.jpg \
    pics/170033319_768811657404561_3443684265017038110_n.png \
    pics/Asset 10.png \
    pics/Asset 10.png \
    pics/Asset 9.png \
    pics/Asset 9.png \
    pics/BgPic.jpg \
    mapview.qml \
    pics/EditerStatistiques.png \
    pics/EnvoyerMail.png \
    pics/arrow.png \
    pics/asset9.png \
    pics/biscuit.png \
    pics/cake.png \
    pics/cake1.png \
    pics/finalmiceshelf.png \
    pics/fournisseur.png \
    pics/icono.ico \
    pics/image1.jpg \
    pics/image2jpg.jpg \
    pics/image3.jpg \
    pics/image4.jpg \
    pics/image5.jpg \
    pics/logo.png \
    pics/mousealone (1).png \
    pics/music.png \
    pics/picMasc.png \
    pics/supp.png \
    pics/supplier.png \
    pics/thepiechart.png \
    russian.qm

RESOURCES += \
    pics/picc.qrc \
    pics/picc.qrc\
    qml.qrc \
    pics.qrc\
    Resource.qrc\
    translations.qrc


