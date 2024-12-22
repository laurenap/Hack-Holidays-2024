# Day 6: Input + Output System (mon dec23)🚀

## **Objective 🎯**
Combine multiple inputs and outputs to create an interactive feedback system. In this project, I used a potentiometer (input) to control a servo motor (output) and an LED that indicates specific thresholds.

---

## **Components Used 🛠️**
| **Component**        | **Quantity** |
|-----------------------|--------------|
| Arduino Uno R3        | 1            |
| Potentiometer         | 1            |
| Servo Motor           | 1            |
| LED                   | 1            |
| 220Ω Resistor         | 1            |
| Breadboard            | 1            |
| Jumper Wires          | A few        |

---

## **Circuit Diagram 🔧**
*(Add a diagram of your circuit setup here, e.g., a Fritzing diagram or hand-drawn photo.)*

---

## **Code 💻**
Here’s the Arduino code I used for this project:

```cpp
#include <Servo.h>

Servo myServo;  // Create a servo object

const int potPin = A0;  // Potentiometer connected to Analog Pin A0
const int ledPin = 13;  // LED connected to Pin 13
const int servoPin = 9; // Servo connected to Pin 9

void setup() {
  myServo.attach(servoPin);  // Attach the servo motor to pin 9
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
  Serial.begin(9600);        // Start serial communication for debugging
}

void loop() {
  int potValue = analogRead(potPin);              // Read potentiometer value (0-1023)
  int servoAngle = map(potValue, 0, 1023, 0, 180); // Map value to servo range (0-180)
  myServo.write(servoAngle);                      // Move servo to the mapped angle
  
  // Turn the LED on or off based on a threshold
  if (potValue > 512) { // Threshold value
    digitalWrite(ledPin, HIGH);  // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED off
  }
  
  // Print the values to Serial Monitor for debugging
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(" | Servo Angle: ");
  Serial.println(servoAngle);

  delay(100); // Short delay for stability
}
