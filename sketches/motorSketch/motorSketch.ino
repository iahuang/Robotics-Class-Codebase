// Kenji is bad at coding
#include <Servo.h>
//Pin definitions fo rthe ArduMoto Shield
//Motor A
const int DIR_A = 12;
const int PWM_A = 3;
// Motor B
const int DIR_B = 13;
const int PWM_B = 11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PWM_A, OUTPUT);
  pinMode(DIR_A, OUTPUT);
  pinMode(PWM_B, OUTPUT);
  pinMode(DIR_B, OUTPUT);
  pinMode(10, OUTPUT); // used as a debug pin for an LED.
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(DIR_A, HIGH);
  delay (5000);
  digitalWrite(DIR_B, HIGH);
  delay (5000);
}Ï
