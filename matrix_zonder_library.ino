
const int fa = 2;
const int fb = 3;
const int fc = 4;
const int fd = 5;
const int c1 = 8;
const int c2 = 9;
const int c3 = 10;
const int c4 = 11;

void setup(){
  Serial.begin(9600);
  Serial.println("Inicio de Programa");
  pinMode(fa,OUTPUT);
  pinMode(fb,OUTPUT);
  pinMode(fc,OUTPUT);
  pinMode(fd,OUTPUT);
  pinMode(c1,INPUT_PULLUP);
  pinMode(c2,INPUT_PULLUP);
  pinMode(c3,INPUT_PULLUP); 
  pinMode(c4,INPUT_PULLUP); 


}

void loop(){
  leerpad();
}

void leerpad(){
  digitalWrite(fa,LOW) ;
  if (digitalRead(c1) == LOW) Serial.println ("1");
  if (digitalRead(c2) == LOW) Serial.println ("2"); 
  if (digitalRead(c3) == LOW) Serial.println ("3");
  if (digitalRead(c4) == LOW) Serial.println ("4");
  digitalWrite(fa,HIGH);
  digitalWrite(fb,LOW);
  if (digitalRead(c1) == LOW) Serial.println ("5");
  if (digitalRead(c2) == LOW) Serial.println ("6");
  if (digitalRead(c3) == LOW) Serial.println ("7");
  if (digitalRead(c4) == LOW) Serial.println ("8");
  digitalWrite(fb,HIGH);
  digitalWrite(fc,LOW);
  if (digitalRead(c1) == LOW) Serial.println ("9");
  if (digitalRead(c2) == LOW) Serial.println ("10");
  if (digitalRead(c3) == LOW) Serial.println ("11");
  if (digitalRead(c4) == LOW) Serial.println ("12");
  digitalWrite(fc,HIGH);
  digitalWrite(fd,LOW);
  if (digitalRead(c1) == LOW) Serial.println ("13");
  if (digitalRead(c2) == LOW) Serial.println ("14");
  if (digitalRead(c3) == LOW) Serial.println ("15");
  if (digitalRead(c4) == LOW) Serial.println ("16");
  digitalWrite(fd,HIGH);

  delay(15);
}
