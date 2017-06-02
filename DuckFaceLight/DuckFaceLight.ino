#include "include/jimToy.h"

void setup() {start();}

void loop() {
    if(waitUp()){
        ledBlink();
        int angle=90;
        angle=cellResult();
        servoTrun(angle);                   
        delay(15);}
    else{
        ledDown();
        servoTrun(90);}
}
