// Test Button Input
const int buttonPin = 2;  // Button connected to pin 2

void setup() {
  Serial.begin(9600);        // Start serial communication
  pinMode(buttonPin, INPUT); // Set button pin as input
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Read button state
  Serial.println(buttonState);              // Print button state to Serial Monitor
  delay(100);                               // Short delay for readability
}
