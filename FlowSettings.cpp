// 
// 
// 

#include "FlowSettings.h"
#include "ReceiverSettings.h"
#include "Globals.h"

volatile long pulse;

IRAM_ATTR void increase() {
	pulse++;
}
void FlowSet::init() {
	ledcAttachPin(PUMP_PIN, PUMP_CHANNEL);
	ledcSetup(PUMP_CHANNEL, FREQUENCY, RESOLUTION);
	pinMode(SENSOR_PIN, INPUT);
	//pinMode(PUMP_PIN, OUTPUT);
	attachInterrupt(digitalPinToInterrupt(SENSOR_PIN), increase, RISING);
}

void FlowSet::config() {
	if ((trigger == true)) {
		ledcWrite(PUMP_CHANNEL, PUMP_PWM);
		Serial.print("Pulse: ");
		Serial.println(pulse);
		Volume = 0.000551 * pulse;
		Serial.print("Volume: ");
		Serial.println(Volume);
		//Serial.println("soso");
	}
	else if ((trigger == false)) {
		ledcWrite(PUMP_PWM, PUMP_OFF);
	}
}

