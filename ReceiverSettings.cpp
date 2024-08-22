// 
// 
// 

#include "ReceiverSettings.h"
#include "Globals.h"


void Receiver::run() {

	if ((chan9_pwm > 1900 && chan9_pwm < 2100)) {
		trigger = true;
	}
	else {
		trigger = false;
	}
}