/*
   Blink
   Turns on an LED on for one second, then off for one second, repeatedly.
*/

// the setup function runs once when you press reset or power the board
#define PIN (2) 

void setup() { 
   pinMode(PIN, OUTPUT);
}

// the loop function runs over and over again forever

void loop() {
   digitalWrite(PIN, HIGH); // turn the LED on (HIGH is the voltage level)
   delay(1000); // wait for a second
   digitalWrite(PIN, LOW); // turn the LED off by making the voltage LOW
   delay(1000); // wait for a second