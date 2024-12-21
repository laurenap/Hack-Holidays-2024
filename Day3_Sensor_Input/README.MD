# Day 3: Sensor Input (fri dec20) 🚀

## Objective 🎯

- the goal for this mini hack is to **learn how to:**
1. Read an analog input from a sensor (the potentiometer)
2. Use the sensor data to control an output (LED brightness)

---

## Components Used 🛠️
| **Component**        | **Quantity** |
|-----------------------|--------------|
| Arduino Uno R3        | 1            |
| LED                   | 1            |
| Potentiometer         | 1            |
| 220Ω Resistor         | 1            |
| Breadboard            | 1            |
| Jumper Wires          | A few        |

---

## Circuit Diagram 🔧
[Add an image of your circuit here. You can draw this by hand or use a tool like **Fritzing**.]  
Example:
![Circuit Diagram](Images/circuit_diagram.png)

---

## Code 💻
Here’s the code I used to achieve today’s goal:

```cpp
// Day 3: Sensor Reading - Potentiometer to LED
const int potPin = A0;  // Potentiometer connected to Analog Pin A0
const int ledPin = 9;   // LED connected to PWM Pin 9
int potValue = 0;       // Variable to store potentiometer value

void setup() {
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
  Serial.begin(9600);       // Start serial communication
}

void loop() {
  potValue = analogRead(potPin);              // Read potentiometer value (0-1023)
  int brightness = map(potValue, 0, 1023, 0, 255); // Map value to 0-255 for PWM
  analogWrite(ledPin, brightness);           // Set LED brightness
  Serial.println(brightness);                // Print brightness to Serial Monitor
  delay(100);                                // Short delay
}

