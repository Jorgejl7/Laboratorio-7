void setup() {
  Serial.begin(9600);
}
     
void loop() {
  if (Serial.available()) {
    if (Serial.read() == 'j'){
      Serial.print(analogRead(A0));
      Serial.print("\n");
    }
  }
}
