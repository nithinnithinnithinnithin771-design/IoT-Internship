#define led 13
#define pir 4


void setup() {
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  int l=digitalRead(pir);
  if(l==1){
  digitalWrite(led,HIGH);
  Serial.println("movement detected");
  }
  else{
    digitalWrite(led,LOW);
    Serial.println("no movement detected");
  }
  // put your main code here, to run repeatedly:
  delay(1000);
}
