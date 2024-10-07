void setup() {
  // setup() runs once when the program starts

  // Set pin 10 as an output pin, which means we can control it
  pinMode(10, OUTPUT);
}

void loop() {
  // loop() runs continuously after setup()

  // Turn on the LED connected to pin 10
  digitalWrite(10, HIGH);  // HIGH means setting the pin to 5V (turns on)

  // Wait for 1 second (1000 milliseconds)
  delay(1000);

  // Turn off the LED connected to pin 10
  digitalWrite(10, LOW);  // LOW means setting the pin to 0V (turns off)

  // Wait for 1 second before repeating
  delay(1000);
}
