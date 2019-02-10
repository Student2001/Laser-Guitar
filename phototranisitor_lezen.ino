int photoTran = A1;
int photoTran2 = A2;
int reading = 0;
int reading2 = 0;


void setup(){
  pinMode(photoTran,INPUT);
  pinMode(photoTran2,INPUT);
  Serial.begin(9600);
}

void loop(){
  reading = analogRead(photoTran);
  Serial.print(reading);
  Serial.print("         ");
  
  if (reading > 20){
    Serial.print ("OK");
    digitalWrite (4, LOW);
  }
  
  else { 
     Serial.print ("onderbroken");
     digitalWrite (4, HIGH);
  }
  
  reading2 = analogRead(photoTran2);
  Serial.println(reading2);
  
   if (reading2 > 20){
    Serial.print ("OK");
    digitalWrite (5, LOW);
  }
  
  else { 
     Serial.print ("onderbroken");
     digitalWrite (5, HIGH);
  }
  
  delay(10);
}

