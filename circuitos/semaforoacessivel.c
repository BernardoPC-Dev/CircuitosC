int pinR = 2;
int pinG = 4;
int pinY = 3;
int pinB = 5;

void setup()
{
 pinMode(pinR,OUTPUT);
 pinMode(pinG,OUTPUT);
 pinMode(pinY,OUTPUT);
 pinMode(pinB,OUTPUT);
}
void loop()
{
 digitalWrite(pinR,HIGH);

 delay(4000);

 digitalWrite(pinR,LOW);
 digitalWrite(pinG,HIGH);
 digitalWrite(pinB,HIGH);

 delay(4000);

 digitalWrite(pinG,LOW);
 digitalWrite(pinY,HIGH);
 digitalWrite(pinB,LOW);
 delay(2000);

 digitalWrite(pinY,LOW);
}
