#include <Arduino.h>

void setup(){
	pinMode(13, OuTPUT);
	pinMode(10, INPUT);
}

void loop(){
	//ajout de la boucle loop au bon endroit
	digitalWrite(13, HIGH);
}