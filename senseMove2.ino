#include <Servo.h>
Servo servoLeft;
Servo servoRight;

int left = 5; 
int right = 7;

void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(left)==0){
    Serial.println("OH NO! The left pin is touching something!");
    tone(4, 820, 600);
    servoRight.writeMicroseconds(1700);
    servoLeft.writeMicroseconds(1300);
    delay(1500);
    servoRight.writeMicroseconds(1250);
    servoLeft.writeMicroseconds(1250);
    delay(1100);
    
  }
  else if (digitalRead(right)==0){
    Serial.println("OH NO! The right pin is touching something!");
    tone(4, 820, 600);
    servoRight.writeMicroseconds(1700);
    servoLeft.writeMicroseconds(1300);
    delay(1500);
    servoRight.writeMicroseconds(1250);
    servoRight.writeMicroseconds(1250);
    delay(1100);
  }
  else{
    Serial.println("Yay! Neither pin is touching something!");
    servoRight.writeMicroseconds(1300);
    servoLeft.writeMicroseconds(1700);
  }
}
