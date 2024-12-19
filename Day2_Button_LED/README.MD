# Day 2: Button + LED Interaction 🚀 (thurs dec19)

## Objective 🎯
Today’s goal was to connect a button to my Arduino Uno and control an LED using the button’s input. This project introduced the concept of **inputs (button)** and their interaction with **outputs (LED).**

---

## Components Used 🛠️
| **Component**        | **Quantity** |
|-----------------------|--------------|
| Arduino Uno R3        | 1            |
| LED                   | 1            |
| Push Button           | 1            |
| 220Ω Resistor         | 1            |
| 10kΩ Resistor         | 1            |
| Breadboard            | 1            |
| Jumper Wires          | A few        |


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

---

## Results & Demo 📸
	
	•	Demo Video Link: [Add a link to your YouTube demo video.] coming soon...
