//Design the Arduino Circuit to measure the temperature by using a temperature sensor (LM35) such that for temperature > 30 °C yellow led will glow and for temperature < 30 °C red led will glow

const int hot = 31;
const int cold = 30;

void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensor = analogRead(A0);
  float voltage = (sensor / 1024.0) * 10.0;
  float tempC = (voltage - .5) * 100;
  float tempF = (tempC * 1.8) + 32;
  Serial.print("temp:");
  Serial.print(tempF);

  if (tempC < cold) {
     digitalWrite(3, LOW);
     digitalWrite(4, HIGH);
  }
  
  else if (tempC >= hot) {
     digitalWrite(3, HIGH);
     digitalWrite(4, LOW);
  }
  
  delay(10);
}
