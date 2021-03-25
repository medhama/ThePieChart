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
    emailaddress.cpp \
    main.cpp \
    mainwindow.cpp \
    mimeattachment.cpp \
    mimecontentformatter.cpp \
    mimefile.cpp \
    mimehtml.cpp \
    mimeinlinefile.cpp \
    mimemessage.cpp \
    mimemultipart.cpp \
    mimepart.cpp \
    mimetext.cpp \
    produit.cpp \
    quotedprintable.cpp \
    smtpclient.cpp

HEADERS += \
    SmtpMime \
    client.h \
    clientaff.h \
    connection.h \
    emailaddress.h \
    mainwindow.h \
    mimeattachment.h \
    mimecontentformatter.h \
    mimefile.h \
    mimehtml.h \
    mimeinlinefile.h \
    mimemessage.h \
    mimemultipart.h \
    mimepart.h \
    mimetext.h \
    produit.h \
    quotedprintable.h \
    smtpclient.h \
    smtpexports.h

FORMS += \
    clientaff.ui \
    mainwindow.ui

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

