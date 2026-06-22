#include<Servo.h>
#define IR 13
Servo s;
void setup() {
  pinMode(IR,INPUT);
  Serial.begin(115200);
  s.attach(5);
  // put your setup code here, to run once:

}

void loop() {
  int i=digitalRead(IR);
   if(i==0){
    s.write(90);
   }
   else{
    s.write(0);
   }
   delay(1000);
  // put your main code here, to run repeatedly:

}
