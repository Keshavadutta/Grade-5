void setup()
{
  Serial.begin(9600);

// Set up the Arduino pins connected to the 7-segment display as OUTPUT
  pinMode(5, OUTPUT);  // Segment A
  pinMode(6, OUTPUT);  // Segment B
  pinMode(7, OUTPUT);  // Segment C
  pinMode(8, OUTPUT);  // Segment D
  pinMode(9, OUTPUT);  // Segment E
  pinMode(10, OUTPUT); // Segment F
  pinMode(11, OUTPUT); // Segment G
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
