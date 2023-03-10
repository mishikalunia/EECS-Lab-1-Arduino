//Design the Arduino Circuit to measure the temperature by using temperature sensor (LM35) and blink external LED when the temperature > 30°C

const int hot = 30;

void setup() {
    pinMode(A0, INPUT);
    pinMode(3, OUTPUT);
    Serial.begin(9600);
    }
    
void loop() {
    int sensor = analogRead(A0);
    float voltage = (sensor / 1024.0) * 10.0;
    float tempC = (voltage - .5) * 100;
    float tempF = (tempC * 1.8) + 32;
    Serial.print("temp:");
    Serial.print(tempF);
    
    if (tempC > hot) {
        digitalWrite(3, HIGH);
        delay(100);
        digitalWrite(3, LOW);
    }
    
    else {
        digitalWrite(3, LOW);
    }
    
    delay(10);
}
