void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  delay(100);
  int sensor = analogRead(A0);
  if (sensorValue != sensor) {
    Serial.println(sensorValue);
  }
}
