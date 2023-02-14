const int set = 50;
const int reset = 51;

const int ledPin = 52;
int ledState = 0;

void setup() {
  pinMode(set, INPUT);
  pinMode(reset, INPUT);
  
  pinMode(ledPin, OUTPUT);

}

void loop() {
  if (digitalRead(set) && ledState == 0) {
    setState(HIGH);
    ledState = 1;
  }

  if (digitalRead(reset) && ledState == 1) {
    setState(LOW);
    ledState = 0;
  }
  
  delay(200);
}

void setState (int state) {
  digitalWrite(ledPin, state);
}
