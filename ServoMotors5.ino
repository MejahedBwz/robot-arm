/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo servo1;       // create servo object to control a servo
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;


int potPin1 = A0;   // analog pin used to connect the potentiometer
int potPin2 = A1;
int potPin3 = A2;
int potPin4 = A3;
int potPin5 = A4;   

 
int val;            // variable to read the value from the analog pin
int va2;
int va3;
int va4;
int va5;

void setup() {
  servo1.attach(8); // attaches the servo on pin 9 to the servo object
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  servo5.attach(12);
}

void loop() { 
  
  val = analogRead(potPin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 90);     // scale it for use with the servo (value between 0 and 180)
  servo1.write(val);                  // sets the servo position according to the scaled value
  delay(1);                           // waits for the servo to get there

   va2 = analogRead(potPin2);            
  va2 = map(va2, 0, 1023, 0, 90);     
  servo2.write(va2);                  
  delay(1);                          

   va3 = analogRead(potPin3);           
  va3 = map(va3, 0, 1023, 0, 90);     
  servo3.write(va3);                  
  delay(1);                          

   va4 = analogRead(potPin4);          
  va4 = map(va4, 0, 1023, 0, 90);   
  servo4.write(va4);                
  delay(1);                          

   va5 = analogRead(potPin5);          
  va5 = map(va5, 0, 1023, 0, 90);   
  servo5.write(va5);                
  delay(1);                  
}
