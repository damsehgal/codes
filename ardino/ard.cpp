#include <ArduinoRobot.h>
#include <Wire.h>
#include <SPI.h>

void setup() {
  // initialize the robot
  Robot.begin();
}

void loop() {
  Robot.motorsWrite(255, 255);  // move forward
  delay(2000);
  Robot.motorsStop();           // fast stop
  delay(1000);
  Robot.motorsWrite(-255, -255); // backward
  delay(1000);
  Robot.motorsWrite(0, 0);      // slow stop
  delay(1000);
  Robot.motorsWrite(-255, 255); // turn left
  delay(2000);
  Robot.motorsStop();           // fast stop
  delay(1000);
  Robot.motorsWrite(255, -255); // turn right
  delay(2000);
  Robot.motorsStop();           // fast stop
  delay(1000);
  Robot.motorsWrite(155,155);
  delay(2000);
   Robot.motorsStop();           // fast stop
  delay(1000);
  Robot.motorsWrite(-155, -155); // backward
  delay(1000);
  Robot.motorsWrite(0, 0);      // slow stop
  delay(1000);
}