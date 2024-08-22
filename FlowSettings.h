// FlowSettings.h
#pragma once
#include<Arduino.h>

#define SENSOR_PIN 26
#define PUMP_PIN 21

#define PUMP_CHANNEL 0
#define FREQUENCY 400
#define RESOLUTION 8

#define PUMP_PWM 180
#define PUMP_MAX_PWM 235
#define PUMP_MIN_PWM 120
#define PUMP_OFF 0


extern float Volume;

class FlowSet {
private:
	
public:
	void init();
	void config();
	
};
