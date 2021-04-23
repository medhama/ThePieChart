#ifndef ARDUINO_H
#define ARDUINO_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
//
class Arduino
{
public:
    Arduino();
    int connect_arduino(); // permet de connecter le pc a Arduino
    int close_arduino(); //permet de fermer la connexion
    void write_to_arduino(QByteArray); //envoyer des donnees vers arduino
    QByteArray read_from_arduino(); //recevoir des donnees de la carte arduino
    QSerialPort* getserial(); //accesseur
    QString getArduino_port_name();
    int write_to_arduino2(QByteArray d);//write yesmine & meriam
      QByteArray read_from_arduino2();//nessrine
private:
    QSerialPort* serial;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_producy_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data; //contenant les donnees lues a partir d'arduino


};

#endif // ARDUINO_H
