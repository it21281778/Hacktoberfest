// IR-Senser.ino
// Simple IR sensor program for Arduino

int irPin = 2;    // IR sensor output pin
int ledPin = 13;  // Built-in LED pin on Arduino

void setup() {
  pinMode(irPin, INPUT);   // Set IR sensor pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600);      // Start serial communication
}

void loop() {
  int irState = digitalRead(irPin); // Read IR sensor

  if (irState == LOW) {  
    // Object detected (depends on sensor type: some give LOW on detection)
    digitalWrite(ledPin, HIGH);
    Serial.println("Object detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No object.");
  }

  delay(200); // Small delay for stability
}
