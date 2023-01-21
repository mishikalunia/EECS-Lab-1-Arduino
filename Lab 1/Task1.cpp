//Blink onboard LED

void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT)
}
void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);       //turn LED on
    delay(1000);                           //wait for a second
    digitalWrite(LED_BUILTIN, LOW);       //turn LED off
    delay(1000);                          //wait for a second
}
