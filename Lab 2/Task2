//Design the Arduino Circuit display the 0-9 digits on seven segments.

int loopvar = 0;

void setup(){
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop(){
    int num = loopvar%10;
    loopvar = loopvar +1;
    
    if(num == 0){
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 0);
          digitalWrite(7, 0);
          digitalWrite(8, 1);       
    }
    
    else if(num == 1) {
        digitalWrite(2, 1);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
    } 


    else if(num == 2) {
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 1);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 1);
        digitalWrite(8, 0);
    } 

    else if(num == 3) {
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        digitalWrite(5, 0);
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 0);
    } 

    else if(num == 4) {
        digitalWrite(2, 1);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
    } 

    else if(num == 5) {
        digitalWrite(2, 0);
        digitalWrite(3, 1);
        digitalWrite(4, 0);
        digitalWrite(5, 0);
        digitalWrite(6, 1);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
    } 

    else if(num == 6) {
        digitalWrite(2, 0);
        digitalWrite(3, 1);
        digitalWrite(4, 0);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
    } 

    else if(num == 7) {
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
    } 

    else if(num == 8) {
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        digitalWrite(5, 0);
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
    } 

    else if(num == 9) {
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
        digitalWrite(5, 0);
        digitalWrite(6, 1);
        digitalWrite(7, 0);
        digitalWrite(8, 0);
    } 

    else {
        digitalWrite(2, 1);
        digitalWrite(3, 1);
        digitalWrite(4, 1);
        digitalWrite(5, 1);
        digitalWrite(6, 1);
        digitalWrite(7, 1);
        digitalWrite(8, 1);
    }
    
    delay(1000);
}
