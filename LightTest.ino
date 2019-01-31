void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);

  if (sensorValue > 500)
  {
    digitalWrite(A2, HIGH);
    digitalWrite(A1, HIGH);
    
  }
  else
  {
    digitalWrite(A2, LOW);
    digitalWrite(A1, LOW);
    
  }

  delay(10);
}
