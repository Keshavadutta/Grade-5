void setup()
{
  Serial.begin(9600);

  // Set pin modes for the 7-segment display segments
  pinMode(5, OUTPUT);  // Segment connected to pin 5 of Arduino
  pinMode(6, OUTPUT);  // Segment connected to pin 6 of Arduino
  pinMode(7, OUTPUT);  // Segment connected to pin 7 of Arduino
  pinMode(8, OUTPUT);  // Segment connected to pin 8 of Arduino
  pinMode(9, OUTPUT);  // Segment connected to pin 9 of Arduino
  pinMode(10, OUTPUT); // Segment connected to pin 10 of Arduino
  pinMode(11, OUTPUT); // Segment connected to pin 11 of Arduino
}

void loop()
{
  // Turn on specific segments of the display to show a pattern (e.g., number 8)

  digitalWrite(5, HIGH);  // Turn on segment connected to pin 5
  delay(500);             // Wait for 500 milliseconds

  digitalWrite(6, HIGH);  // Turn on segment connected to pin 6
  digitalWrite(10, HIGH); // Turn on segment connected to pin 10
  delay(500);             // Wait for 500 milliseconds

  digitalWrite(11, HIGH); // Turn on segment connected to pin 11
  delay(500);             // Wait for 500 milliseconds

  digitalWrite(7, HIGH);  // Turn on segment connected to pin 7
  digitalWrite(9, HIGH);  // Turn on segment connected to pin 9
  delay(500);             // Wait for 500 milliseconds

  digitalWrite(8, HIGH);  // Turn on segment connected to pin 8
  delay(500);             // Wait for 500 milliseconds

  // Turn off all segments
  digitalWrite(5, LOW);  // Turn off segment connected to pin 5
  delay(500);            // Wait for 500 milliseconds

  digitalWrite(6, LOW);  // Turn off segment connected to pin 6
  digitalWrite(10, LOW); // Turn off segment connected to pin 10
  delay(500);            // Wait for 500 milliseconds

  digitalWrite(11, LOW); // Turn off segment connected to pin 11
  delay(500);            // Wait for 500 milliseconds

  digitalWrite(7, LOW);  // Turn off segment connected to pin 7
  digitalWrite(9, LOW);  // Turn off segment connected to pin 9
  delay(500);            // Wait for 500 milliseconds

  digitalWrite(8, LOW);  // Turn off segment connected to pin 8
  delay(500);            // Wait for 500 milliseconds
}
