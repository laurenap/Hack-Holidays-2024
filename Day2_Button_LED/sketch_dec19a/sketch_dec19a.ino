// day 2 button + LED interaction 

const int buttonPin = 2;  // button connected to pin 2
const int ledPin = 13; // led connected to pin 3
int buttonState = 0; // this acts as the variable to store the button state ;)


void setup() {
  pinMode(buttonPin, INPUT); // set button as input pinMode 
  pinMode(ledPin, OUTPUT);  // set led pin as output
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the button
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);  // turn led on if button is pressed
  } else {
    digitalWrite(ledPin, LOW); // turn led off otherwise 
  }
}
