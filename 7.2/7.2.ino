#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pinCS = 3;  // CS (Chip Select) connected to pin 3
int pinDIN = 11;  // DIN (Data In) connected to pin 11
int pinCLK = 13;  // CLK (Clock) connected to pin 13

Max72xxPanel matrix = Max72xxPanel(pinCS, 1, 1); // One display

String tape = "Robotics";
int wait = 70;  // Delay between scrolling
int width = 5;  // Width of each character in the matrix

void setup() {
  matrix.setIntensity(7);  // Set brightness level (0-15)
  matrix.setRotation(0);   // Set rotation (0 = no rotation)
}

void loop() {
  for (int i = 0; i < width * tape.length() + matrix.width(); i++) {
    matrix.fillScreen(LOW);  // Clear the display

    int letter = i / width;
    int x = matrix.width() - i % width;
    int y = (matrix.height() - 8) / 2;  // Center vertically

    if (letter < tape.length()) {
      matrix.drawChar(x, y, tape[letter], HIGH, LOW, 1);  // Draw the character
    }

    matrix.write();  // Update the display
    delay(wait);     // Delay before moving to the next step
  }
}
