const int swPin = 3; //3:ConnectorA 4:ConnectorB
const int motorPin = 4; //4:ConnectorA 4:ConnectorB

void setup() {
  Serial.begin(115200);
  pinMode(swPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  if (digitalRead(swPin) == HIGH) {
  
    digitalWrite(motorPin, HIGH);
    Serial.println("ON"); 
    delay(500);

  } else {

    digitalWrite(motorPin, LOW);
    Serial.println("OFF");
    delay(500);
  }
}