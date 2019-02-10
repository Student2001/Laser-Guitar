const int buttonPin1 = 8;     
const int buttonPin2 = 9; 
const int buttonPin3 = 10; 
const int buttonPin4 = 11; 
const int OUT1 = 4; 
const int OUT2 = 5; 
const int OUT3 = 6; 
const int OUT4 = 7; 

// variabelen kunnen wel veranderen:
int buttonState1 = 0;         
int buttonState2 = 0;  
int buttonState3 = 0;  
int buttonState4 = 0;  

void setup() {

  pinMode(OUT1, OUTPUT);
  pinMode(OUT2, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT4, OUTPUT);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
}

void loop(){

  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);

  if (buttonState1 == HIGH) {
     digitalWrite(OUT1, HIGH);
}
  if (buttonState2 == HIGH) {
     digitalWrite(OUT2, HIGH);
}    
  if (buttonState3 == HIGH) {
     digitalWrite(OUT3, HIGH);
}     
  if (buttonState4 == HIGH) {
     digitalWrite(OUT4, HIGH);
}
}
