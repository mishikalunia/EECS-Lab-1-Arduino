//With the help of a potentiometer regulate the brightness of the external connected LED

const int analogoutPin = A0           //Analog input pin that the potentiometer is attached to
const int analogoutPin = 9;           //Analog output pin that the LED is attached to

int sensorValue = 0;                  // value read from the pot
int outputValue = 0;                 // value output to the PWM (analog out)


void setup() {
// initialize serial communications at 9600 bps:

        Serial.begin(9600);
}

void loop() {

sensorValue = analogRead (analogInPin);

outputValue = map (sensorValue, 0, 1023, 0, 255) ;

analogWrite (analogOutPin, outputValue);

//print the results to the Serial Monitor:

Serial.print("sensor =");
Serial.print (sensorValue);
Serial.print("\t output = “);
Serial.println(outputValue);

// wait 2 milliseconds before the next loop for the analog-to-digital

delay(2)
}
