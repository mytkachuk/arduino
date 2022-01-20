void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

enum colors { green = A0, yellow = A1, red = A2};

void onYellow(uint8_t out){
  digitalWrite(out, HIGH);
  delay(2000);
  digitalWrite(out, LOW);
  delay(1000);
}

void onColor(uint8_t out, int del, int blinkDel,int blinkCount){
  digitalWrite(out, HIGH);
  delay(del);
  for (int i = 0; i < blinkCount; i++){
    digitalWrite(out, LOW);
    delay(blinkDel);
    digitalWrite(out, HIGH);
    delay(blinkDel);
  }
  digitalWrite(out, LOW);
  delay(700);
  onYellow(yellow);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (true){
      onColor(green, 5000, 500, 3);
      onColor(red, 5000, 500, 3);
  }
}
