// Array representing pin configurations for numbers 0-9 on a 7-segment display
int num_array[10][7] = { 
  { 1, 1, 1, 1, 1, 1, 0 }, // 0
  { 0, 1, 1, 0, 0, 0, 0 }, // 1
  { 1, 1, 0, 1, 1, 0, 1 }, // 2
  { 1, 1, 1, 1, 0, 0, 1 }, // 3
  { 0, 1, 1, 0, 0, 1, 1 }, // 4
  { 1, 0, 1, 1, 0, 1, 1 }, // 5
  { 1, 0, 1, 1, 1, 1, 1 }, // 6
  { 0, 0, 0, 1, 1, 1, 1 }, // 7
  { 1, 1, 1, 1, 1, 1, 1 }, // 8
  { 1, 1, 1, 0, 0, 1, 1 }  // 9
};

// Function to display a number on the 7-segment display
void Num_Write_to_Seven_Segment(int number);

void setup() {
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

void loop() {
  // Loop through numbers 0-9 and display each for 1 second
  for (int counter = 0; counter < 10; ++counter) {
    delay(1000); // Wait for 1 second
    Num_Write_to_Seven_Segment(counter); // Display the current number
  }
}

// Function to write a number to the 7-segment display
void Num_Write_to_Seven_Segment(int number) {
  Serial.print("Displaying Number: ");
  Serial.println(number);  // Print the number being displayed
  
  // Go through each segment and set its state based on num_array
  for (int segment = 0; segment < 7; segment++) {
    int pin = segment + 5; // Map segment index to the correct pin (5 to 11)
    digitalWrite(pin, num_array[number][segment]); // Set the pin high or low
  }
}
