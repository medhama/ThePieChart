#define Buzzer 13
#define Gas A1

char data;
int val;

void setup() {

  // put your setup code here, to run once:
  pinMode (A0,INPUT);
 
  pinMode(Buzzer,OUTPUT);
  //analogWrite(Buzzer,LOW);
 
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:

    val = analogRead (Gas);
     Serial.println(val);
    if(val > 300)
    {
      Serial.write("ON");
    }
    else
    {
      Serial.write('0');
    }

    if(Serial.available()>0)
    {
      if(Serial.read() == '1')
      {
        digitalWrite(Buzzer,HIGH);
      }
      else
      {
        digitalWrite(Buzzer,LOW);
      }
    }

    delay (500);
 
}
