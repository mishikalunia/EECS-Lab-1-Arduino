//Design a traffic signal using Arduino so that the first led glows for 15 seconds and the second LED glows for 10 second

void setup() {
// initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop(){

  digitalWrite(9, HIGH);
  delay(15000);
  digitalWrite(9, LOW);
  delay(10);                   //wait
  
  digitalWrite(11, HIGH);
  delay(10000);
  digitalWrite(11, LOW);

  delay(10);                   //wait
}
