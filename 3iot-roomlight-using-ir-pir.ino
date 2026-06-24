#define led 13
#define ir 5
#define pir 4

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ir, INPUT); 
  pinMode(pir, INPUT);
  
  Serial.begin(115200);
}

void loop() {
  int t = digitalRead(ir);
  int l = digitalRead(pir);


  Serial.print("IR: ");
  Serial.print(t);
  Serial.print(" | PIR: ");
  Serial.println(l);

  if (t == 0 && l == 1) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }


  delay(1000); 
}
