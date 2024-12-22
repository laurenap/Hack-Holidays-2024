# Day 4: Display Output  🚀

## Objective 🎯
Use an LCD or OLED display to help visualize the real-time value of a sensor (potentiometer)

---

## Components Used 🛠️
| **Component**        | **Quantity** |
|-----------------------|--------------|
| Arduino Uno R3        | 1            |
| Potentiometer         | 1            |
| LCD (16x2) or OLED    | 1            |
| Breadboard            | 1            |
| I2C Module (for LCD)  | 1            |
| Jumper Wires          | A few        |

---

## Circuit Diagram 🔧
[Add an image of your circuit here. You can draw this by hand or use a tool like **Fritzing**.]  
Example:
![Circuit Diagram](Images/circuit_diagram.png)

---

## Code 💻
Here’s the code I used to achieve today’s goal:

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD (16 columns, 2 rows, I2C address 0x27)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int potPin = A0; // Potentiometer connected to Analog Pin A0

void setup() {
  lcd.begin();          // Initialize the LCD
  lcd.backlight();      // Turn on backlight
  pinMode(potPin, INPUT);
  Serial.begin(9600);   // For debugging if needed
}

void loop() {
  int potValue = analogRead(potPin);  // Read potentiometer value
  lcd.setCursor(0, 0);               // Set cursor to column 0, row 0
  lcd.print("Pot Value: ");          // Display label
  lcd.setCursor(0, 1);               // Set cursor to column 0, row 1
  lcd.print(potValue);               // Display potentiometer value
  delay(500);                        // Short delay
}

