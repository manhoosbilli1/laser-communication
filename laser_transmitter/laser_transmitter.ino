#define laser 3
int bits[] = {0,1,0,0,0,1,1,0};
void setup() {
  // put your setup code here, to run once:
  pinMode(laser, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laser, 1);
  delay(10);                      //handshake
  digitalWrite(laser, 0);

  for(int i=0; i<8; i++) {         //start the beat and send
    digitalWrite(laser, bits[i]);
    delay(10);
  }

  digitalWrite(laser, LOW);
  delay(1000);

}
