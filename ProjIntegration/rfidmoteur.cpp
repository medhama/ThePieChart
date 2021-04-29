#include "rfidmoteur.h"

#include"clientaff.cpp"

#include <string>
#include <QDebug>
#include <QMessageBox>

#include <QSerialPort>
#include <QSerialPortInfo>

RFIDMOTEUR::RFIDMOTEUR()
{
    serial=NULL;


}
int RFIDMOTEUR::connect_arduino()
{
  //  serial = new QSerialPort(this);
    serial = new QSerialPort();
    bool arduino_is_available = false;
    QString arduino_port_name;

    //  For each available serial port
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        //  check if the serialport has both a product identifier and a vendor identifier
        if(serialPortInfo.hasProductIdentifier() && serialPortInfo.hasVendorIdentifier()){
            //  check if the product ID and the vendor ID match those of the arduino uno
            if((serialPortInfo.productIdentifier() == arduino_uno_product_id)
                    && (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id)){
                arduino_is_available = true; //    arduino uno is available on this port
                arduino_port_name = serialPortInfo.portName();
                set_arduino_port_name(arduino_port_name);
            }
        }
    }


    qDebug() << "Arduino port name is : "<<arduino_port_name;
    if(arduino_is_available){
        qDebug() << "Found the arduino port...\n";
        serial->setPortName(arduino_port_name);
        serial->open(QSerialPort::ReadWrite);

            qDebug() << "readWrite\n";
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        setserial(serial);
       // QObject::connect(serial, SIGNAL(readyRead()), this, SLOT(readSerial()));
return 0;


    }else{
        qDebug() << "Couldn't find the correct port for the arduino.\n";
      //  QMessageBox::information(this, "Serial Port Error", "Couldn't open serial port to arduino.");
    return 1;
    }


}
int RFIDMOTEUR::close_arduino()
{
    if(serial->isOpen())
    {
        serial->close();
        return 0;
    }
    return 1;
}
QByteArray RFIDMOTEUR::read_from_arduino()
{
    if(serial->isReadable())
    {
        data=serial->readAll();
        return data;
    }

}
int RFIDMOTEUR::write_to_arduino(QByteArray d)
{
   // getserial();
    if(getserial()->isWritable())
    {
        serial->write(d);

    }
    else
    {
        qDebug()<<"error couldn't write";
    }
    return 0;

}

