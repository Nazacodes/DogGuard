const int micPin = A0;  // Connect the microphone to analog pin A0
int micValue = 0;

void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  micValue = analogRead(micPin);  // Read the microphone signal
  Serial.println(micValue);  // Print the microphone value to Serial Monitor
  
  delay(100);  // Delay for a short time
}
