
int pushButton=2;

void setup() {
  serial.begin(9600);
  pinMode(pushButton,INPUT);
}

void loop () {
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  delay(1);
}

