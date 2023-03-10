int val;
int tempPin = A4;
int led1 = 13;
int led2 = 12;
int dp = 0;
int num = 0;

void setup(){
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop(){
    val = analogRead(tempPin);
    float cel = 500 * val / 1024;
    Serial.print("TEMPERATURE = ");
    Serial.print(cel);
    Serial.print("*C");
    Serial.println();
    int tempint = (int) cel;
    Serial.print("(Integer) = ");
    Serial.print(tempint);
    Serial.println();
    int dig2 = tempint % 10;
    int dig1 = (tempint - dig1)/ 10;
    num = dig1;
    
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

    num = dig2;
    if(num == 0){
        digitalWrite(A0, 0);
        digitalWrite(A1, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
        digitalWrite(12, 0);
        digitalWrite(13, 1);
    }

    else if(num == 1) {
        digitalWrite(A0, 1);
        digitalWrite(A1, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
        digitalWrite(12, 1);
        digitalWrite(13, 1);
    }
    
    else if(num == 2) {
        digitalWrite(A0, 0);
        digitalWrite(A1, 0);
        digitalWrite(9, 1);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
        digitalWrite(12, 1);
        digitalWrite(13, 0);
    }

    else if(num == 3) {
        digitalWrite(A0, 0);
        digitalWrite(A1, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 1);
        digitalWrite(12, 1);
        digitalWrite(13, 0);
    }

    else if(num == 4) {
        digitalWrite(A0, 1);
        digitalWrite(A1, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
        digitalWrite(12, 0);
        digitalWrite(13, 0);
    }

    else if(num == 5) {
        digitalWrite(A0, 0);
        digitalWrite(A1, 1);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 1);
        digitalWrite(12, 0);
        digitalWrite(13, 0);
    }

    else if(num == 6) {
        digitalWrite(A0, 0);
        digitalWrite(A1, 1);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
        digitalWrite(12, 0);
        digitalWrite(13, 0);
    }

    else if(num == 7) {
        digitalWrite(A0, 0);
        digitalWrite(A1, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
        digitalWrite(12, 1);
        digitalWrite(13, 1);
    }

    else if(num == 8) {
        digitalWrite(A0, 0);
        digitalWrite(A1, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
        digitalWrite(12, 0);
        digitalWrite(13, 0);
    }

    else if(num == 9) {
        digitalWrite(A0, 0);
        digitalWrite(A1, 0);
        digitalWrite(9, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 1);
        digitalWrite(12, 0);
        digitalWrite(13, 0);
    }

  delay(2000);
}
