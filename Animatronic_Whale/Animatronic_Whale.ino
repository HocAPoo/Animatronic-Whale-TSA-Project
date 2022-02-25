#include<Servo.h>
Servo Myservo;
int pos;

const int buttonPin = 2;
int buttonState = 0;
int LED = 5;
int LEDs = 4;
int i = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LEDs, OUTPUT);
  Myservo.attach(12);
  pinMode(buttonPin, INPUT);
}
void loop() {



  // checks button
  buttonState = digitalRead(buttonPin);
  digitalWrite(LED,HIGH);
  if (buttonState == HIGH) {
    
    
    
    for(i=1; i<=2; i+=1){
      digitalWrite(LED, LOW);
      digitalWrite(LEDs, LOW);
      for(pos=90;pos<=155;pos+=1){
      Myservo.write(pos);
      delay(15);
      }
      digitalWrite(LED, HIGH);
      digitalWrite(LEDs, HIGH);
      for (pos = 155; pos >=90; pos -= 1) {
      Myservo.write(pos);           
      delay(15); 
      }
    }

  } 
  else {}
  
}
