#ifndef HISTORIQUE1_H
#define HISTORIQUE1_H

#include <QAbstractItemModel>
#include<QString>
#include <QObject>
#include <QFile>
#include <iostream>
#include <QTextStream>
#include <QDebug>
#include <QTimer>
#include <QDateTime>
class historique1 : public QAbstractItemModel
{
    Q_OBJECT

public:
    explicit historique1(QObject *parent = nullptr);

    void write(QString);
        QString read();
        void write1(QString);
        QString read1();
        QString read2();
        void write2(QString);
        QString read3();
        QString read4();
        QString read5();
        void write3(QString);
        void write4(QString);
        void write5(QString);
private:
        QString mFilename;
          QString mFilename1;
          QString mFilename2;
          QString mFilename3;
          QString mFilename4;
          QString mFilename5;
};

#endif // HISTORIQUE1_H
