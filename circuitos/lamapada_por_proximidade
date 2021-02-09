float dist;
int sig = 3;
int led = 6;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sig,OUTPUT);
}

void loop()
{
  
  dist = dist/2;
  dist = dist/0.034029;
  ler();
  if (dist>=5730.00) {
   digitalWrite(led,HIGH);
  } else {
  digitalWrite(led,LOW);
  }
  Serial.print(dist);
  Serial.println("cm");
}

void ler() {
  pinMode(sig,OUTPUT);
  digitalWrite(sig,HIGH);
  delayMicroseconds(50);
  digitalWrite(sig,LOW);
  pinMode(sig,INPUT);
  dist=pulseIn(sig,HIGH);
}
