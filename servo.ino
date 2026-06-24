#include<Servo.h>
#define servopin 5
Servo s;
void setup() {
    s.attach(servopin);
    Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  
  for(int i=0;i<=180;i=i+10)
  {
  s.write(i);
  }
delay(1000);
  // put your main code here, to run repeatedly:

}
