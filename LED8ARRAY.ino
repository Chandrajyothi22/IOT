int led[]={2,3,4,5,6,7,8};
void setup() {
  // put your setup code here, to run once:
  for(i=0;i<=7;i++){
    pinMode(led[i],OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<=7;i++0){
    digitalWrite(led[i],HIGH);
    delay(1000);
    digitalWrite(led[i],LOW);

}
