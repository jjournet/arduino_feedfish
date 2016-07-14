#include <Servo.h>

Servo servoblue;
int button=7;
int buttonstatus=0;

int initialpos=90;
int servingpos=50;
unsigned long hours4nextFeeding = 12;
unsigned long lastTime = millis();

//Include the servo library
//The servo gets the name “servoblue”
void setup()
{
  pinMode(13, OUTPUT); // initialize digital pin 13 as an output.
  pinMode(button, INPUT);
  servoblue.attach(8); //The signal line of the servo is on pin 8
  servoblue.write(initialpos);
  delay(500);
  servoblue.detach();
  feedthem();
}

void feedthem()
{
  servoblue.attach(8);
  for(int i=0 ; i < 4 ; i++) {
    servoblue.write(servingpos);
    delay(300);
    //Wait 3 seconds
    servoblue.write(initialpos);
    delay(300);
  }
  servoblue.detach();
}
void loop()
{
  buttonstatus=digitalRead(button);
  if(millis() > (lastTime + (hours4nextFeeding*3600*1000))) {
    feedthem();
    lastTime = millis();
  }
  delay(1000);

  //if(buttonstatus == HIGH) {
  //  feedthem();
  //}
}

