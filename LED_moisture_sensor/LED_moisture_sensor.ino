
const int LED = 13;
void setup() {
  // put your setup code here, to run once:\
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0); 

  Serial.println(sensorValue);
  if (sensorValue > 10) {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }
}
