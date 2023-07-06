// C++ code
//
int input = 0;

void setup()
{
  pinMode(11, INPUT);
  Serial.begin(9600);

  pinMode(9, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  input = digitalRead(11);
  Serial.println(digitalRead(11));
  input = digitalRead(9);
  if (digitalRead(9) < digitalRead(11)) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  }
  if (digitalRead(9) == digitalRead(11)) {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
