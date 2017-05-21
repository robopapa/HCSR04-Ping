#include <inttypes.h>
#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#define CENTIMETERS 1
#define INCHES 2
#define CENTIMETERS_FACTOR 29
#define INCHES_FACTOR 74

class HCSR04
{
private:
	uint8_t _echo;
	uint8_t _trigger;
	uint8_t _factor;
	

public:
	HCSR04(uint8_t echo,uint8_t trigger,bool isInches);
	double Distance();
};