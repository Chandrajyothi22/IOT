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
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  delay(3000);
  
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,LOW);
  delay(3000);
  
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,HIGH);
  delay(1000);
  
  
  

}
