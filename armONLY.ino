// Simple Bluetooth Controlled robot arm using kodular
// by AXISDYNAMICS (Kayesu Ritah)
// Arduino UNO
// HC-040 Bluetooth module
// motor+relay circuit, 6 micro servo motors

#include <SoftwareSerial.h> //TX,RX software library
#include<Servo.h>// include server library

Servo base, shoulder, elbow, grip; // create servo objects to control a servos at neck, base, shoulder, elbow, wrist and grip
char m;

SoftwareSerial bluetooth(0,1); //defining a new serial port called bluetooth(Tx,Rx)

void setup(){
Serial.begin(9600); // Serial comm begin at 9600bps
bluetooth.begin(9600); //Setup Bluetooth serial connection to download
base.attach(6);// servo for base is connected at pin 6
shoulder.attach(5);// servo for shoulder is connected at pin 5
elbow.attach(3);//servo for elbow is connected at pin 3
grip.attach(9);// servo for grip is connected at pin 9
}

void loop(){
if(bluetooth.available() && bluetooth.available()>= 2 ){
    unsigned int servopos = bluetooth.read();
    unsigned int servopos1 = bluetooth.read();
    unsigned int realservo = (servopos1 *256) + servopos;
    Serial.println(realservo);

    if (realservo >= 1000 && realservo <1180) {
      int servo1 = realservo;
      servo1 = map(servo1, 1000, 1180, 0, 180);
      base.write(servo1);
      Serial.println("Turning base");
      delay(5);
    }
    if (realservo >= 2000 && realservo <2090) {
      int servo2 = realservo;
      servo2 = map(servo2, 2000, 2090, 0, 90);
      shoulder.write(servo2);
      Serial.println("Moving shoulder");
      delay(5);
    }
    if (realservo >= 3000 && realservo <3090) {
      int servo3 = realservo;
      servo3 = map(servo3, 3000, 3090, 0, 90);
      elbow.write(servo3);
      Serial.println("Moving elbow");
      delay(5);
    }
    if (realservo >= 4000 && realservo <4090) {
      int servo4 = realservo;
      servo4 = map(servo4, 4000, 4090, 0, 90);
      grip.write(servo4);
      Serial.println("Gripping");
      delay(5);
    }
  }
}

