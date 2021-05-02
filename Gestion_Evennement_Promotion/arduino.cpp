#include "arduino.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

Arduino::Arduino()
{
    data="";
    arduino_port_name="";
    arduino_is_available=false;
    serial=new QSerialPort;
    serialBuffer = "";
    parsed_data = "";
    temperature_value = 0.0;
}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}

QSerialPort *Arduino::getserial()
{
   return serial;
}
int Arduino::connect_arduino()
{   // recherche du port sur lequel la carte arduino identifée par  arduino_uno_vendor_id
    // est connectée
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()){
           if(serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()){
               if(serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier()
                       == arduino_uno_producy_id) {
                   arduino_is_available = true;
                   arduino_port_name=serial_port_info.portName();
               } } }
        qDebug() << "arduino_port_name is :" << arduino_port_name;
        if(arduino_is_available){ // configuration de la communication ( débit...)
            serial->setPortName(arduino_port_name);
            if(serial->open(QSerialPort::ReadWrite)){
                serial->setBaudRate(QSerialPort::Baud9600); // débit : 9600 bits/s
                serial->setDataBits(QSerialPort::Data8); //Longueur des données : 8 bits,
                serial->setParity(QSerialPort::NoParity); //1 bit de parité optionnel
                serial->setStopBits(QSerialPort::OneStop); //Nombre de bits de stop : 1
                serial->setFlowControl(QSerialPort::NoFlowControl);

                return 0;
            }
            return 1;
        }
        return -1;
   }

int Arduino::close_arduino()

{

    if(serial->isOpen()){
            serial->close();
            return 0;
        }
    return 1;


}

/*
 QString Arduino::read_from_arduino()
{
     QStringList buffer_split = serialBuffer.split(","); //  split the serialBuffer string, parsing with ',' as the separator

     //  Check to see if there less than 3 tokens in buffer_split.
     //  If there are at least 3 then this means there were 2 commas,
     //  means there is a parsed temperature value as the second token (between 2 commas)
     if(buffer_split.length() < 3){
         // no parsed value yet so continue accumulating bytes from serial in the buffer.
         serialData = serial->readAll();
         serialBuffer = serialBuffer + QString::fromStdString(serialData.toStdString());
         serialData.clear();
     }else{
         // the second element of buffer_split is parsed correctly, update the temperature value on temp_lcdNumber
         serialBuffer = "";
         qDebug() << buffer_split << "\n";
         parsed_data = buffer_split[1];
         temperature_value = parsed_data.toDouble(); // convert to C
         qDebug() << "Temperature: " << temperature_value << "\n";
         parsed_data = QString::number(temperature_value, 'g', 4); // format precision of temperature_value to 4 digits or fewer
         //Arduino::updateTemperature(parsed_data);

     }
   return parsed_data;
 }
*/
QString Arduino::read_from_arduino(){

    /*
     * readyRead() doesn't guarantee that the entire message will be received all at once.
     * The message can arrive split into parts.  Need to buffer the serial data and then parse for the temperature value.
     *
     */
    QStringList buffer_split = serialBuffer.split(","); //  split the serialBuffer string, parsing with ',' as the separator

    //  Check to see if there less than 3 tokens in buffer_split.
    //  If there are at least 3 then this means there were 2 commas,
    //  means there is a parsed temperature value as the second token (between 2 commas)
    if(buffer_split.length() < 3){
        // no parsed value yet so continue accumulating bytes from serial in the buffer.
        serialData = serial->readAll();
        serialBuffer = serialBuffer + QString::fromStdString(serialData.toStdString());
        serialData.clear();
    }else{
        // the second element of buffer_split is parsed correctly, update the temperature value on temp_lcdNumber
        serialBuffer = "";
        qDebug() << buffer_split << "\n";
        parsed_data = buffer_split[1];
        temperature_value = parsed_data.toDouble(); // convert to C
        qDebug() << "Temperature: " << temperature_value << "\n";
        parsed_data = QString::number(temperature_value, 'g', 4); // format precision of temperature_value to 4 digits or fewer
    }
  return parsed_data;
}
 /*
 void Arduino::updateTemperature(QString sensor_reading)
 {
     //  update the value displayed on the lcdNumber
     ui->tempLcdNumber->display(sensor_reading);
 }*/

int Arduino::write_to_arduino( QByteArray d)

{

    if(serial->isWritable()){
        serial->write(d);  // envoyer des donnés vers Arduino
    }else{
        qDebug() << "Couldn't write to serial!";
    }


}
