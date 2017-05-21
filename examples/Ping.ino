#include <HCSR04.h>

// Constructor
// HCSR04(Echo,Trigger,IsInches)
// HCSR04(pinNumber,pinNumber, boolean)
HCSR04 ping = HCSR04(10,11,true);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Distance in Inches:");
  Serial.println(ping.Distance());
}