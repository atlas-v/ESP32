#include <Arduino.h>

#define redPin   16
#define greenPin 17
#define bluePin  18


void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 102);
  delay(1000); // Wait for 1000 millisecond(s)
}