int motoradir = 12;
int motorbdir = 13;
int motorapow = 3;
int motorbpow = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(motoradir, OUTPUT);
  pinMode(motorbdir, OUTPUT);
  pinMode(motorapow, OUTPUT);
  pinMode(motorbpow, OUTPUT); 
}

void loop() {
  // just drive forward forever 
  digitalWrite(motoradir, LOW); // rotate counter-clockwise
  digitalWrite(motorbdir, HIGH); // rotate clockwise
  digitalWrite(motorapow, HIGH);
  digitalWrite(motorbpow, HIGH);
}
