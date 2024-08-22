/*
 Name:		DataSendEspCube.ino
 Created:	11/8/2022 10:26:24 AM
 Author:	Imami Joel Betofe
*/

#include "MavlinkSettings.h"
#include "FlowSettings.h"
#include "ReceiverSettings.h"
#include "Globals.h"

MavlinkConnection Mavlink;
FlowSet flow_sensor;
Receiver receiver;


// the setup function runs once when you press reset or power the board

void setup() {
	Serial.begin(115200);
	Mavlink.init();
	flow_sensor.init();
}

// the loop function runs over and over again until power down or reset
void loop() {
	//Serial.println(chan9_pwm);
	Mavlink.run();
	receiver.run();
	flow_sensor.config();
}
