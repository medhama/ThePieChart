#include "historique1.h"
#include <QTextStream>

historique1::historique1(QObject *parent)

{
    mFilename="C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique";
    mFilename1="C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique";
    mFilename2="C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique";
    mFilename3="C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique";
    mFilename4="C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique";
    mFilename5="C:/Users/Hamadi/Desktop/C++/ThePieChartIntegration/ThePieChart/ProjIntegration/Historique";
}

QString historique1::read()
{
QFile mFile(mFilename);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique1::read1()
{
QFile mFile(mFilename1);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique1::read2()
{
QFile mFile(mFilename2);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique1::read3()
{
QFile mFile(mFilename3);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique1::read4()
{
QFile mFile(mFilename4);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique1::read5()
{
QFile mFile(mFilename5);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
void historique1::write(QString text)
{
    QString aux=read();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique1::write1(QString text)
{
    QString aux=read1();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename1);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique1::write2(QString text)
{
    QString aux=read2();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename2);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique1::write3(QString text)
{
    QString aux=read3();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename3);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique1::write4(QString text)
{
    QString aux=read4();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename4);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique1::write5(QString text)
{
    QString aux=read5();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename5);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
