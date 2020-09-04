#include<Servo.h>
char ardata;
int led = 13;
int servoPin = 3;
Servo Servo1;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  Servo1.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
      ardata = Serial.read();
      Serial.print(ardata);
      
  
    if(ardata == '1'){
      digitalWrite(led,HIGH);
       Servo1.write(180);
       delay(1000);
    }
    if(ardata == '0'){
      digitalWrite(led,LOW);
      Servo1.write(0);
      delay(1000);
  }  
  }     
}
