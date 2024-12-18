# Day 1: Blink LED 🚀 (wed dec18)

## Objective 🎯 
Blink an LED light via Arduino Uno R3 circuit board

## Steps 🛠️
- Set Up Arduino Uno IDE
- Connect Arduino Uno R3
- Build Circuit (incl. circuit diagram)
- Write code
- Upload + Test

---

## Components Used 🛠️
| **Component**        | **Quantity** |
|-----------------------|--------------|
| Arduino Uno R3        | 1            |
| LED                   | 1            |
| 220Ω Resistor         | 1            |
| Breadboard            | 1            |
| Jumper Wires          | 2     |

---

## Circuit Diagram 🔧
[Add an image of your circuit here. You can draw this by hand or use a tool like **Fritzing**.]  
Example:
![Circuit Diagram](Images/circuit_diagram.png)

---

## Code 💻
Here’s the code I used to achieve today’s goal:

// Day 1: blink an led 
void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // Turn the LED on
  delay(1000);          // Wait 1 second
  digitalWrite(13, LOW); // Turn the LED off 
  delay(1000);   // Wait 1 second
}
