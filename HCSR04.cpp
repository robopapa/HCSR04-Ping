
#include "HCSR04.h"
#include <inttypes.h>
HCSR04::HCSR04(uint8_t echo,uint8_t trigger,bool isInches)
{
	_echo = echo;
	_trigger = trigger;
	if(isInches) _factor = INCHES_FACTOR;
	else _factor = CENTIMETERS_FACTOR;

	pinMode(_echo,INPUT);
	pinMode(_trigger,OUTPUT);
	digitalWrite(_echo,LOW);
}

double HCSR04::Distance()
{
	digitalWrite(_trigger,LOW);
	delayMicroseconds(2);
	digitalWrite(_trigger,HIGH);
	delayMicroseconds(10);
	digitalWrite(_echo,LOW);
	long duration = pulseIn(_echo,HIGH);
	return duration / _factor / 2;
}
