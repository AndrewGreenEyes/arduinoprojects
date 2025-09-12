#include <Servo.h>
#define MAXANGLE 270.0;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  Serial.println(val);
  int angle = val / 1024.0 * MAXANGLE;
  angle = constrain(angle, 0, 180);
  myServo.write(angle);
}
