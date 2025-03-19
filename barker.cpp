const int micPin = A0;    // Microphone analog output pin
const int threshold = 500; // Threshold for noise level

void setup() {
  Serial.begin(115200);  // Start serial communication
}

void loop() {
  int micValue = analogRead(micPin);  // Read the analog value from the microphone
  Serial.println(micValue);  // Print the value to the Serial Monitor

  if (micValue > threshold) {
    // If the noise level exceeds the threshold, print "Loud noise detected!"
    Serial.println("Loud noise detected!");
  }

  delay(200);  // Short delay for readability
}
