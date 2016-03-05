#include <ArduinoRobot.h>
#include <Wire.h>
#include <SPI.h>
int ledPin=13;
int InputPin=2;
void setup(){
	pinMode(InputPin,INPUT);
	pinMode(ledPin,OUTPUT);
	serial.Begin(9600);
	Robot.Begin();
}
void loop(){
	Robot.motorsWrite(255,255)//->fwd
	delay(2000);
	Robot.motorsWrite(-255,255)//->left
	delay(2000);
	int x=digitalRead(InputPin);
	x==0?digitalWrite(OUTPUT,HIGH):digitalWrite(OUTPUT,LOW);
	int y=analogRead(A0);
	Robot.motorsWrite(map(y,0,1023,0,255));
	
	serial.println();
}