#include "arduino.h"

Arduino::Arduino()
{
  data="";
  arduino_is_available = false;
  serial = new QSerialPort;

}

QString Arduino::getArduino_port_name()
{
    return arduino_port_name;
}

QSerialPort* Arduino::getserial()
{
    return serial;
}

int Arduino::connect_arduino()
{
    //recherche du port sur lequel la carte arduino identifiee par arduino_uno_vendor_id et connectée

    foreach(const QSerialPortInfo& serial_port_info, QSerialPortInfo::availablePorts())
    {
        if(serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier())
        {
           if(serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier() == arduino_uno_producy_id)
            {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();

            }
        }
    }

    qDebug() << "arduino_port_name is : " << arduino_port_name;

    if(arduino_is_available)
    {
        serial->setPortName(arduino_port_name);
        if(serial->open(QSerialPort::ReadWrite))
        {
            serial->setBaudRate(QSerialPort::Baud9600);
            serial->setDataBits(QSerialPort::Data8);
            serial->setParity(QSerialPort::NoParity);
            serial->setStopBits(QSerialPort::OneStop);
            serial->setFlowControl(QSerialPort::NoFlowControl);
            return  0;
        }
        return 1;
    }

    return -1;

}

int Arduino::close_arduino()
{
    if(serial->isOpen())
    {
        serial->close();
        return 0;
    }

    return  1;
}

QByteArray Arduino::read_from_arduino()
{
    if(serial->isReadable())
    {
        data=serial->readAll();

        return data;
    }
    else
    {
        qDebug() << "Couldn't read from serial";
    }
 return 0;
}

void Arduino::write_to_arduino(QByteArray d)
{
    if(serial->isWritable())
    {
        serial->write(d);
    }
    else
    {
        qDebug() << "Couldn't write to serial";
    }
}
//
int Arduino::write_to_arduino2(QByteArray d){
    if(serial->isWritable()){
           serial->write(d);
           return 1;
       }
       else{
           qDebug("Couldn't write to serial!");
           return 0;
       }
}
//nessrine
QByteArray Arduino::read_from_arduino2()
{
   //if(serial->isReadable())
       if(serial->isReadable()&& !data.contains('n') && !data.contains('r') )
        data = serial->readAll();
        float nb = data.toFloat();
        //return  data.toInt(nb);
       return data;
}
