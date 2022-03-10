const int buttonPin = 12;
const int ledPin = 8;
const int buzzer = 2;
int buttonState = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin); // reads analog data from motion sensor
  if (buttonState == 1) {
    digitalWrite(ledPin, HIGH);
    tone(buzzer, 100); //turns on led and buzzer
  }
  else {
    digitalWrite(ledPin, LOW); //turns led off led and buzzer
    noTone(buzzer);
  }
}
