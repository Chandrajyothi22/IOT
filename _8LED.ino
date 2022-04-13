int led=3;
int led=4;
int led=5
int led=6;
int led=7;
int led=8;
int led=10;
int led=11;



void setup() {
  // put your setup code here, to run once:
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW); 
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  delay(1000);
 
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW); 
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH); 
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW); 
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW); 
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  delay(1000);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW); 
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);
  digitalWrite(led10,LOW);
  digitalWrite(led11,LOW);
  delay(1000);
 
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW); 
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led10,HIGH);
  digitalWrite(led11,LOW);
  delay(1000); 
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW); 
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led11,HIGH);
  delay(1000);
}
