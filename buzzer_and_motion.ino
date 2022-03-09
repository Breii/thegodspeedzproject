const int motionSensor = 2;
const int ledPin = 8;
const int buzzer = 12; 
int sensorVal = LOW;


void setup() {
// put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(motionSensor,INPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);

}


void loop() {
// put your main code here, to run repeatedly:
sensorVal = digitalRead(motionSensor); // reads analog data from motion sensor
if (sensorVal >= 200){
digitalWrite(ledPin,HIGH);
tone(buzzer,100); //turns on led and buzzer
}
else {
digitalWrite(ledPin,LOW); //turns led off led and buzzer
noTone(buzzer);
}
}
