#include "dialog.h"
#include "ui_dialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <string>
#include <QDebug>
#include <QMessageBox>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{ //Dialog A;
    //ui->setupUi(this);
   // ui->temp_lcdNumber->display("-------");
    arduino = new QSerialPort(this);
    serialBuffer = "";
    parsed_data = "";
    temperature_value = 0.0;
    bool arduino_is_available = false;
    QString arduino_uno_port_name;
    //
    //  For each available serial port
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        //  check if the serialport has both a product identifier and a vendor identifier
        if(serialPortInfo.hasProductIdentifier() && serialPortInfo.hasVendorIdentifier()){
            //  check if the product ID and the vendor ID match those of the arduino uno
            if((serialPortInfo.productIdentifier() == arduino_uno_product_id)
                    && (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id)){
                arduino_is_available = true; //    arduino uno is available on this port
                arduino_uno_port_name = serialPortInfo.portName();
            }
        }
    }


    if(arduino_is_available){

        qDebug() << "Found the arduino port...\n";
        qDebug() << arduino_uno_port_name ;
        arduino->setPortName(arduino_uno_port_name);
        arduino->open(QSerialPort::ReadWrite);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readSerial()));

    }else{
        qDebug() << "Couldn't find the correct port for the arduino.\n";
        QMessageBox::information(this, "Serial Port Error", "Couldn't open serial port to arduino.");
    }
}

Dialog::~Dialog()
{
    if(arduino->isOpen()){
        arduino->close(); //    Close the serial port if it's open.
    }
    delete ui;
}

void Dialog::readSerial()
{//Dialog A;
    serialData.clear();
    QMessageBox msgBox;
serialBuffer.clear();
        serialData = arduino->readLine();
        //QByteArray serialData1;
        serialBuffer = serialBuffer + QString::fromStdString(serialData.toStdString());
        //serialData.clear();
qDebug() << "test: " << serialData << "\n";
//qDebug() << "test1: " << serialBuffer << "\n";
QByteArray serialData1=serialData;
QString timeS="4";
                QByteArray br1 = timeS.toUtf8();


                qDebug() <<br1;
                arduino->write(br1);
        if(serialData1 =="4" ){

            msgBox.setText("Acces Granted");
            msgBox.exec();
            if(arduino->isWritable())
            {QString timeS="4";
                QByteArray br = timeS.toUtf8();


                qDebug() <<br;
                arduino->write(br);


            }
            else
            {
                qDebug()<<"error couldn't write";
            }

            /*QString timeS="5000";
                QByteArray br = timeS.toUtf8();
qDebug() <<br;
                A.write_to_arduino(br);*/




        }
        else{msgBox.setText("Acces Denied");
            msgBox.exec();}
       // qDebug() << "id: " << serialData << "\n";}


serialData.clear();
serialBuffer.clear();

}

int Dialog::write_to_arduino(QByteArray d)
{
   // getserial();
    if(getserial()->isWritable())
    {
        arduino->write(d);

    }
    else
    {
        qDebug()<<"error couldn't write";
    }
    return 0;

}


