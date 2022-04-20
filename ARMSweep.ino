/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo base;  // create servo object to control a servo
Servo elbow;
Servo shoulder;
Servo grip;
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  base.attach(9);  // attaches the servo on pin 9 to the servo object
  shoulder.attach(3);
  elbow.attach(5);
  grip.attach(6);
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    base.write(pos);              // tell servo to go to position in variable 'pos'
    elbow.write(pos); 
    delay(5);                       // waits 15ms for the servo to reach the position
    shoulder.write(pos); 
   grip.write(pos); 
    delay(5);
  }
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
       base.write(pos);              // tell servo to go to position in variable 'pos'
      elbow.write(pos); 
      delay(5);                       // waits 15ms for the servo to reach the position
      shoulder.write(pos); 
      grip.write(pos); 
     delay(5);                       // waits 15ms for the servo to reach the position
  }
}

