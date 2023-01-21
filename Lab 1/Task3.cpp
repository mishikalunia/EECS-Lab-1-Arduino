//Blink LED without time delay

const int ledPin = LED_BUILTIN;       //constant, number of LED pin
int ledState = LOW;                   //variable, ledState used to set the LED

unsigned long prieviousMillis = 0;            // will store last time LED was updated
const long interval = 1000;                  //interval at which to blink (milliseconds)

void setup() {
      pinMode(ledPin, OUTPUT);
}

void loop() {

    //check to see if it's time to blink the LED; that is, if the difference
    //between the current time and last time you blinked the LED is bigger than
    //the interval at which you want to blink the LED.
    
       unsigned long currentMillis = millis();
       
        if (currentMillis - previousMillis >= interval) {
                    //saving the last time the LED blinked

                    previousMillis = currentMillis;
                    
                    if (ledState ==LOW) {
                                ledState == HIGH;
                    } else {
                                ledState = LOW;
                    }
                    digitalWrite(ledPin, ledState);
              }
}
