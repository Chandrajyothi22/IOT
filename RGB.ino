int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin1,HIGH);
  analogWrite(ledPin2,LOW);
  analogWrite(ledPin3,LOW);
  delay(100);
  
  digitalWrite(ledPin1,LOW);
  analogWrite(ledPin2,HIGH);
  analogWrite(ledPin3,LOW);
  delay(100);
  
  digitalWrite(ledPin1,LOW);
  analogWrite(ledPin2,LOW);
  analogWrite(ledPin3,HIGH);
  delay(100);
  
  
  

}
