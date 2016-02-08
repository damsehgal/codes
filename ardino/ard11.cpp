#include <Wire.h>
#include <SPI.h>
int motor1=10;
int motor2=9;
void setup(){
	Serial.begin(9600);
	pinMode(motor1,OUTPUT);
	pinMode(motor2,OUTPUT);
}
void MoveFwd(){
	analogWrite(motor1,255);
	analogWrite(motor2,255);
}
void MoveBack(){
	analogWrite(motor1,-255);
	analogWrite(motor2,-255);	
}
void TurnLeft(){
	analogWrite(motor1,-255);
	analogWrite(motor2,255);	
}
void TurnRight(){
	analogWrite(motor1,255);
	analogWrite(motor2,-255);	
}
void Stop(){
	analogWrite(motor1,0);
	analogWrite(motor2,0);
}
void loop(){
	char dir = Serial.read();
	switch(dir){
		case 'w':
			MoveFwd();
			delay(1000);
			break;
		case 's':
			MoveBack();
			delay(1000);
			break;
		case 'a':
			TurnLeft();
			delay(1000);
			break;
		case 'd':
			TurnRight();
			delay(1000);
			break;
	}
}