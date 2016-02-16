 const int analogInPin = A0;
 int sensorValue = 0;
 int outputValue = 0;
void setup() {
  Serial.begin(9600);
  pinMode (13,OUTPUT);
  pinMode (12, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  Serial.print(sensorValue);
  Serial.print(outputValue);
  delay(2);
  for(int x = 0; x<10; x++){
  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
  delay(1000);
  Serial.print(sensorValue);
  Serial.print(outputValue);
  delay(2);
  }
  digitalWrite (13, LOW);
  digitalWrite (12, HIGH);
  delay(10000);
  
  // put your main code here, to run repeatedly:

}
