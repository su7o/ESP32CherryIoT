const int touchPin = 3; //3:ConnectorA 4:ConnectorB
const int spkrPin = 4; //4:ConnectorA 4:ConnectorB

#define DO 261.6
#define RE 293.665
#define MI 329.63

void playmusic(){
  ledcWriteTone(spkrPin, DO);
  delay(250);
  ledcWriteTone(spkrPin, RE);
  delay(250);
  ledcWriteTone(spkrPin, MI);
  delay(250);

  ledcWriteTone(spkrPin, 0); // no sound
  delay(450);
}

void setup() {
  Serial.begin(115200);
  pinMode(touchPin, INPUT);
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8);
}

void loop() {
 
  if (digitalRead(touchPin) == HIGH) {
    Serial.println("なる");
    playmusic();
    } 
  else {
    Serial.println("ならない");
    
  }
  delay(200);
}