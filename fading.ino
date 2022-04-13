int ledPin = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin,512);
  delay(100);
  analogWrite(ledPin,256);
  delay(100);
  analogWrite(ledPin,128);
  delay(100);
  analogWrite(ledPin,0);
  delay(100);
  
  
  
  

}
