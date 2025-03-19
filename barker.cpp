
const int micPin = A0; // Microphone input pin (analog)
const int speakerPin = 9; // Pin connected to the speaker/buzzer
const int noiseThreshold = 600; // Set threshold for noise level (adjust as necessary)

void setup() {
  Serial.begin(115200);  // Start serial communication for debugging
  pinMode(speakerPin, OUTPUT);  // Set the speaker pin as an output
}

void loop() {
  int micValue = analogRead(micPin); // Read microphone value

  // Print the mic value to the Serial Monitor for debugging
  Serial.println(micValue);

  // If noise level exceeds threshold, activate the speaker
  if (micValue > noiseThreshold) {
    tone(speakerPin, 1000); // Play a 1kHz tone (adjust frequency as needed)
  } else {
    noTone(speakerPin); // Stop playing the tone if noise level is low
  }

  delay(100); // Delay to avoid overwhelming the serial output
}
