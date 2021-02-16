#define R 4
#define G 2
#define B 3
int pinB = 5;
void setup()
{
 pinMode(R, OUTPUT);
 pinMode(G, OUTPUT);
 pinMode(pinB,OUTPUT);
  
 Serial.begin(9600);
 
}
void loop()
{
 red();
 gn();
 ye();
 
}

void temp() {
 int i,c = 0;
  for (i = 0;i<=4;i++) {
    c+= 1;
  	Serial.println(c);
    delay(1000);
  }
}


void red() {
 Serial.println("Close");
 analogWrite(R,255);
 analogWrite(G,0);
 temp();
 analogWrite(R,0);
 analogWrite(G,0);
}
void gn() {
 digitalWrite(pinB,HIGH);
 analogWrite(R,0);
 analogWrite(G,255);
 temp();
 digitalWrite(pinB,LOW);
 analogWrite(R,0);
 analogWrite(G,0);
}
void ye() {
 analogWrite(R,255);
 analogWrite(G,255);
 Serial.println("Cuidado! Sinal vai fechar!");
 temp();
 analogWrite(R,0);
 analogWrite(G,0);
}
