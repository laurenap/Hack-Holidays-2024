# Day 2: Button + LED Interaction 🚀 (thurs dec19)

## Objective 🎯
Today’s goal was to connect a button to my Arduino Uno and control an LED using the button’s input. This project introduced the concept of **inputs (button)** and their interaction with **outputs (LED).**

---
## Steps 🔧 
- Build button as the input (when pressed, a signal is sent to the Arduino)
- LED as the output (Arduino - turns the LED on or off based on the button's state)
- Place the Button on breadboard 
- Connect one side of the button via jumper wire 
- Connect the opposite pin of the button to digital pin two on the Arduino (use 10kΩ resistor - connects button pin to GND)
- Add LED circuit (anode - digital pin 13 and cathode - 220Ω Resistor) 
- + CONNECT other resistor ends to GND
- Write Code + Test 

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
## Results & Demo 📸
Demo Video Link: [Add a link to your YouTube demo video.] coming soon...

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

