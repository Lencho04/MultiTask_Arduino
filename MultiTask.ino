#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
}

// the loop function runs over and over again forever
void loop() {
  loopBlueLed();
  loopGreenLed();
  loopRedLed();
}

void LedBlue() {
  pinMode(BLUE, OUTPUT);
}
void loopBlueLed() {
digitalWrite(BLUE, HIGH); // turn LED on (HIGH is the voltage level)
delay(100); // wait for 100 ms
digitalWrite(BLUE, LOW); // turn LED off making the voltage LOW
delay(100); // wait for 100 ms
}

void LedGreen() {
  pinMode(GREEN, OUTPUT);
}
void loopGreenLed() {
digitalWrite(GREEN, HIGH); // turn LED on (HIGH is the voltage level)
delay(100); // wait for half a second
digitalWrite(GREEN, LOW); // turn LED off by making the voltage LOW
delay(100);
}

void LedRed() {
  pinMode(RED, OUTPUT);
}
void loopRedLed() {
digitalWrite(RED, HIGH); // turn LED on (HIGH is the voltage level)
delay(100); // wait for half a second
digitalWrite(RED, LOW); // turn LED off by making the voltage LOW
delay(100);
}