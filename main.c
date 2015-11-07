#include "const.h"
#include "odometre.h"

#include <Arduino.h>
#include <Wire.h>

void IIChandlerRec(int);
void requestEvent(void);

void setup(){

	Serial.begin(115200);
	Serial.println("IIC Slave");
	Wire.begin(0x05);
	Wire.onReceive(IIChandlerRec);
	Wire.onRequest(requestEvent);
	pinMode(13, OuTPUT);
	pinMode(10, INPUT);
}

void loop(){
	//ajout de la boucle loop au bon endroit
	digitalWrite(13, HIGH);
	delay(50);
}