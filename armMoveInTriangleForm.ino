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

int pos;    // variable to store the servo position

void setup() {
  base.attach(6);  // attaches the servo on pin 9 to the servo object
  shoulder.attach(3);
  elbow.attach(5);
  grip.attach(9);
  shoulder.write(85);
  for (pos = 20; pos <= 70; pos += 1) { // open grip
    grip.write(pos); 
      delay(15);
  }
  for (pos = 70; pos >= 20; pos -= 1) { // close grip
    grip.write(pos); 
      delay(15);                       
  }
  delay(50);
}

void loop() {
  for (pos = 85; pos >= 10; pos -= 1) { // move arm up
    elbow.write(pos); 
      delay(15);                       
  }
  delay(50);
  for (pos = 90; pos >= 0; pos -= 1) { // move arm to the right 
    base.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 10; pos <= 85; pos += 1) { // move it down
    elbow.write(pos);
      delay(15);
  }
   delay(50);
  for (pos = 20; pos <= 70; pos += 1) { // open grip
    grip.write(pos); 
      delay(15);
  }
  delay(50);
  for (pos = 85; pos >= 10; pos -= 1) { // move arm up
    elbow.write(pos); 
      delay(15);                       
  }
  delay(50);
    for (pos = 0; pos <= 45; pos += 1) { // move arm to the middle 
    base.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 10; pos <= 85; pos += 1) { // move it down
    elbow.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 85; pos >= 10; pos -= 1) { // move arm to the back
    shoulder.write(pos); 
      delay(15);                       
  }
  delay(50);
  for (pos = 10; pos <= 85; pos += 1) { // move arm forward
    shoulder.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 70; pos >= 20; pos -= 1) { // close grip
    grip.write(pos); 
      delay(15);                       
  }
  delay(50);
  for (pos = 85; pos >= 10; pos -= 1) { // move arm up
    elbow.write(pos); 
      delay(15);                       
  }
  delay(50);
  for (pos = 45; pos <= 90; pos += 1) { // move arm from middle to the left 
    base.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 10; pos <= 85; pos += 1) { // move it down
    elbow.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 20; pos <= 70; pos += 1) { // open grip
    grip.write(pos); 
      delay(15);
  }
  delay(50);
  for (pos = 85; pos >= 10; pos -= 1) { // move arm up
    elbow.write(pos); 
      delay(15);                       
  }
  delay(50);
  for (pos = 90; pos >= 0; pos -= 1) { // move arm to the right 
    base.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 10; pos <= 85; pos += 1) { // move it down
    elbow.write(pos);
      delay(15);
  }
   delay(50);
  for (pos = 70; pos >= 20; pos -= 1) { // close grip
    grip.write(pos); 
      delay(15);                       
  }
  delay(50);
  for (pos = 85; pos >= 10; pos -= 1) { // move arm up
    elbow.write(pos); 
      delay(15);                       
  }
  delay(50);
    for (pos = 0; pos <= 45; pos += 1) { // move arm to the middle 
    base.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 10; pos <= 85; pos += 1) { // move it down
    elbow.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 20; pos <= 70; pos += 1) { // open grip
    grip.write(pos); 
      delay(15);
  }
  delay(50);
  for (pos = 85; pos >= 20; pos -= 1) { // move arm up
    elbow.write(pos); 
      delay(15);                       
  }
  delay(50);
  for (pos = 45; pos <= 90; pos += 1) { // move arm from middle to the left 
    base.write(pos);
      delay(15);
  }
  delay(50);
  for (pos = 10; pos <= 85; pos += 1) { // move it down
    elbow.write(pos);
      delay(15);
  }
   delay(50);
  for (pos = 70; pos >= 20; pos -= 1) { // close grip
    grip.write(pos); 
      delay(15);                       
  }
  delay(50);
}

