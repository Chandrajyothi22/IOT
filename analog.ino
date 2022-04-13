int ledPin = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin,255);

}
