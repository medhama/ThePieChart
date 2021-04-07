QT       += network core gui sql printsupport multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
DEFINES += SMTP_BUILD

#LIBS += "C:/Qt/Tools/OpenSSL/lib/libssl.lib"
#LIBS += "C:/Qt/Tools/OpenSSL/lib/libcrypto.lib"
#LIBS += -LC:/openssl_1.0.1/lib/ -llibcrypto -llibssl


SOURCES += \
    client.cpp \
    clientaff.cpp \
    connection.cpp \
    main.cpp \
    mainwindow.cpp \
    produit.cpp \
    smtp.cpp

HEADERS += \
    client.h \
    clientaff.h \
    connection.h \
    mainwindow.h \
    produit.h \
    smtp.h


FORMS += \
    clientaff.ui \
    mainwindow.ui


RC_ICONS = myappico.ico

QMAKE_CXXFLAGS += -std=gnu++11


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
#
#DISTFILES += \
  #  libcrypto.so \
   # libssl.so

#################### Add for Openssl ###########################


#################################################################

DISTFILES += \
    BgPic.jpg \
    pics/Asset 10.png \
    pics/Asset 9.png \
    pics/BgPic.jpg

RESOURCES += \
    pics/picc.qrc

