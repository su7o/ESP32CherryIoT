const int spkrPin = 3; //3:ConnectorA 4:ConnectorB

#define DO 130.813
#define _DO 138.591
#define RE 146.832
#define _RE 155.563
#define MI 164.814
#define FA 174.614
#define _FA 184.997
#define SO 195.998
#define _SO 207.652
#define RA 220.000
#define _RA 233.082
#define TI 246.942
#define octDO 261.626

void playmusic(){
ledcWriteTone(spkrPin, MI);
  delay(450);
  ledcWriteTone(spkrPin, MI);
  delay(450);
  ledcWriteTone(spkrPin, MI);
  delay(450);
  ledcWriteTone(spkrPin, DO);
  delay(450);
  ledcWriteTone(spkrPin, SO);
  delay(250);
  ledcWriteTone(spkrPin, MI);
  delay(450); 
  ledcWriteTone(spkrPin, DO);
  delay(450);
  ledcWriteTone(spkrPin, SO);
  delay(250);
  ledcWriteTone(spkrPin, MI);
  delay(450); 

  ledcWriteTone(spkrPin, TI);
  delay(450);
  ledcWriteTone(spkrPin, TI);
  delay(450);
  ledcWriteTone(spkrPin, TI);
  delay(450);
  ledcWriteTone(spkrPin, octDO);
  delay(450); 
  
  ledcWriteTone(spkrPin, SO);
  delay(250);
  ledcWriteTone(spkrPin, MI);
  delay(450); 

  ledcWriteTone(spkrPin, DO);
  delay(450);
  ledcWriteTone(spkrPin, SO);
  delay(250);
  ledcWriteTone(spkrPin, MI);
  delay(450); 
  




  
  ledcWriteTone(spkrPin, 0); // no sound
  delay(450);
}

void setup() {
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8); //Pin setting(Pin num, Max frequency, Resolution)
}

void loop() {
  playmusic();
  delay(400);
}


