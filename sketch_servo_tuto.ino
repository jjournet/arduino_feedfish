#include <Servo.h>

Servo servoblue;

//Include the servo library
//The servo gets the name “servoblue”
void setup()
{
  pinMode(13, OUTPUT); // initialize digital pin 13 as an output.
  servoblue.attach(8); //The signal line of the servo is on pin 8
}

void loop()
{
  servoblue.write(90);
  delay(3000);
  //Wait 3 seconds
  servoblue.write(105);
  delay(3000);
  //Position 3 with an angle of 180°
  //Wait 3 seconds
  servoblue.write(75);
  delay(3000);
  //Position 2 with an angle of 90°
  //Wait 3 seconds
  servoblue.write(90);
  
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(300); 
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(300); 
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(300);
  delay(3000);
}

