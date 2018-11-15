// WILLPOWER STUDIOS 
// WILLPOWER THEREMIN 
// 3 SERIAL READS 

// yellow wire in A1

void setup() {
  Serial.begin(9600);

}

void loop() {

  if(Serial.available() > 0 && Serial.read() == 'r') {
      Serial.print(analogRead(A0));
      Serial.print(",");
      Serial.print(50);
      Serial.print(",");
      Serial.print(analogRead(A1));
      Serial.println(",");
  }
}

