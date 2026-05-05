int in1 = D7;
int in2 = D8;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(2000);

  // stop
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(1000);

  // reverse
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(2000);

  // stop
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(1000);
}