# Ping Sensor Library (HCSR04)
This is a library i have created to run 4 pins Ping sensor so it does everything you need (sending the ping, waiting for the echo and returning the value with either CM or inch).

You can view the example folder to see how to use it.
In a nutshell all you need to do is include the HCSR04.h file, initialize an object with the settings for ping and echo pins and if you want inch or not
Than when you want to get the distance just call the function distance.
For example:
```
HCSR04 ping = HCSR04(10,11,true); // Start a ping object with pin 10 as echo, pin 11 as ping and we want to get the distance as inch
/*
Continue with you code here
*/
void loop() {
    ....
    ....
    Serial.println(ping.Distance());
}
```
You can see how i'm using this code on this video:
```
https://youtu.be/_yDie_I-5pw.
```

Or you can check out also my website for more explainations here:

```
http://www.robopapa.com/Projects/ArduinoAndSensorsPartOne
```