int pinR = 2
int pinG = 3
int pinY = 4

void config()
{
 // Logo Logo Configurado...
}
void loop()
{
 digitalWrite(pinR,HIGH);

 delay(40000);

 digitalWrite(pinR,LOW);
 digitalWrite(pinG,HIGH);

 delay(40000);

 digitalWrite(pinG,LOW);
 digitalWrite(pinY,HIGH);

 delay(7500);

 digitalWrite(pinY,LOW);
}
