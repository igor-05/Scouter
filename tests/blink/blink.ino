#define PIN 13

/*
   Blink
   Turns on an LED on for one second, then off for one second, repeatedly.
*/

void setup() { 
   pinMode(PIN, OUTPUT);
}

void loop() {
   digitalWrite(PIN, HIGH);
   delay(1000); 
   digitalWrite(PIN, LOW); 
   delay(1000);
}