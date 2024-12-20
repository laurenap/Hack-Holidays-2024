# Day 3: Sensor Input (fri dec20) 🚀

## Objective 🎯
[Explain what you aimed to achieve for the day.]  
Exampl

---

## Components Used 🛠️
| **Component**        | **Quantity** |
|-----------------------|--------------|
| Arduino Uno R3        | 1            |
| LED                   | 1            |
| Push Button           | 1            |
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
// Day X: Button + LED Control
const int buttonPin = 2;  // Button connected to pin 2
const int ledPin = 13;    // LED connected to pin 13
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
