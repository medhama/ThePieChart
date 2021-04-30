#include <dht.h>

dht DHT;

#define DHT11_PIN 7
//int data;

void setup(){
  Serial.begin(9600);
 // dht.begin();
}

void loop(){
/*if (Serial.available())
{
 data=Serial.read();
}*/


  float chk = DHT.read11(DHT11_PIN);
  //float t = dht.readTemperature();
  //Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
   // Serial.print(chk);
  Serial.print(",");
  //Serial.flush();  
  //Serial.print("Humidity = ");
  //Serial.println(DHT.humidity);
  delay(1000);
//return;
//


  
}
