#define rcvr A0
#define threshold         //diff between ambient and digital high
int ambientReading = 0;

void setup() {
  // put your setup code here, to run once:
  ambientRead = analogRead(rcvr);

}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(rcvr);
  int bits[8];

  if (reading > ambientReading + threshold) {
    for (int i = 0; i < 8; i++) {
      if (analogRead(rcvr) > ambientReading + threshold) {
        bits[i] = 1;
      } else {
        bits[i] = 0;
      }
      delay(10);
    }
    for(int i =0; i<8; i++){
      Serial.print(bits[i]);
    }
    Serial.println("");
  }

}
