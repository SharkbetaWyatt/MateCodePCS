//Potentiometer Definitions Follow
int LeftRotPin = 0;
int LeftElbowOnePin = 1;
int LeftElbowTwoPin = 2;
int LeftClawRotatePin = 3;
int RightRotPin = 4;
int RightElbowOnePin = 5;
int RightElbowTwoPin = 6;
int RightClawRotatePin = 7;

//Defines Variables For Ease Of Typing
#define LP1 LeftRotPin
#define LP2 LeftElbowOnePin
#define LP3 LeftElbowTwoPin
#define LP4 LeftClawRotatePin
#define RP1 RightRotPin
#define RP2 RightElbowOnePin
#define RP3 RightElbowTwoPin
#define RP4 RightClawRotatePin

//Defines Variables For Analog Reading
int LP1R;
int LP2R;
int LP3R;
int LP4R;
int RP1R;
int RP2R;
int RP3R;
int RP4R;

void setup() {
  Serial.begin(9600);
  Serial.write('Begin Program');
}



void loop() {
  LP1R = analogRead(LP1);
  LP2R = analogRead(LP2);
  LP3R = analogRead(LP3);
  LP4R = analogRead(LP4);
  RP1R = analogRead(RP1);
  RP2R = analogRead(RP2);
  RP3R = analogRead(RP3);
  RP3R = analogRead(RP4);
  map(LP1R, 0, 1024, 0, 255);
  map(LP2R, 0, 1024, 0, 255);
  map(LP3R, 0, 1024, 0, 255);
  map(LP4R, 0, 1024, 0, 255);
  map(RP1R, 0, 1024, 0, 255);
  map(RP2R, 0, 1024, 0, 255);
  map(RP3R, 0, 1024, 0, 255);
  map(RP4R, 0, 1024, 0, 255);
  Serial.write(LP1R);
  Serial.write(LP2R);
  Serial.write(LP3R);
  Serial.write(LP4R);
  Serial.write(RP1R);
  Serial.write(RP2R);
  Serial.write(RP3R);
  Serial.write(RP4R);
  
}
