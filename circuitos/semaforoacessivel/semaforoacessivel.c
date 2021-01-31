int pinR = 2;
int pinG = 4;
int pinY = 3;
int piezo = 5;

void setup()
{
 pinMode(pinR,OUTPUT);
 pinMode(pinG,OUTPUT);
 pinMode(pinY,OUTPUT);
 pinMode(piezo,OUTPUT);
}
void loop()
{
 digitalWrite(pinR,HIGH); // Vermelho Acende

 delay(4000); // 4s

 digitalWrite(pinR,LOW); // Vermelho Apaga
 digitalWrite(pinG,HIGH); // Verde Acende
 digitalWrite(piezo,HIGH); // Piezo Ativa

 delay(4000); // 4s

 digitalWrite(pinG,LOW); // Verde Apaga
 digitalWrite(piezo,LOW); // Piezo Desativa
 digitalWrite(pinY,HIGH); // Amarelo Acende

 delay(2000); // 2s

 digitalWrite(pinY,LOW); // Amarelo Apaga
}
