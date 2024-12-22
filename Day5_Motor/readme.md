# Day 5: Motor Control (sun dec22) 🚀

## **Objective 🎯**
Learn how to control a motor using the Arduino Uno. In this project, I used a servo motor to demonstrate precise angular control.

---

## **Components Used 🛠️**
| **Component**        | **Quantity** |
|-----------------------|--------------|
| Arduino Uno R3        | 1            |
| Servo Motor           | 1            |
| External Power Supply (if required) | 1 |
| Breadboard            | 1            |
| Jumper Wires          | A few        |

---

## **Circuit Diagram 🔧**
*(Add a diagram of your circuit setup here, e.g., a Fritzing diagram or hand-drawn photo.)*

---

## **Code 💻**
Here’s the Arduino code I used to control the servo motor:

```cpp
#include <Servo.h>

Servo myServo;  // Create a servo object

const int servoPin = 9;  // Servo connected to PWM pin 9

void setup() {
  myServo.attach(servoPin);  // Attach the servo to pin 9
  Serial.begin(9600);        // Start serial communication
}

void loop() {
  for (int angle = 0; angle <= 180; angle += 10) {  // Sweep from 0 to 180 degrees
    myServo.write(angle);  // Move servo to the current angle
    delay(500);            // Wait for half a second
    Serial.println("Angle: " + String(angle));
  }
  for (int angle = 180; angle >= 0; angle -= 10) {  // Sweep back from 180 to 0 degrees
    myServo.write(angle);  // Move servo to the current angle
    delay(500);            // Wait for half a second
    Serial.println("Angle: " + String(angle));
  }
}