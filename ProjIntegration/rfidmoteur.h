#ifndef RFIDMOTEUR_H
#define RFIDMOTEUR_H

#include <QDialog>
#include <QSerialPort>
#include <QByteArray>
#include <QSerialPortInfo>

class RFIDMOTEUR
{

public:
    RFIDMOTEUR();
   // explicit RFIDMOTEUR(QWidget *parent = 0);
    int connect_arduino();
    int close_arduino();
    int write_to_arduino(QByteArray);
    QByteArray read_from_arduino();
    QSerialPort * getserial(){return serial;};
    void setserial(QSerialPort *serial){this->serial=serial;};

    void set_arduino_port_name(QString arduino_port_name){this->arduino_port_name=arduino_port_name;};
    QString get_arduino_port_name(){return arduino_port_name;};



private:

    QSerialPort *serial;
    //QByteArray data;

    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
   // QByteArray serialData;
  //  QString serialBuffer;
    QString arduino_port_name;
   // QString parsed_data;
    bool arduino_is_available;
    QByteArray data;


};

#endif // RFIDMOTEUR_H
