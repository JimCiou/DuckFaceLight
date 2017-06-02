#include "include/photocell.h"

void photocellInitial(Chain *ptrchain){
  sensorPin[0]= ptrchain->sensorPin.sensorLeftPin;
  sensorPin[1]= ptrchain->sensorPin.sensorRightPin;
  waitUpThre = ptrchain->waitUpThre;
  sensorRange[0]= ptrchain->sensorRange.left;
  sensorRange[1]= ptrchain->sensorRange.right;
}

boolean waitUp(){
    boolean result = false;
    int readingLeft, readingRight;
    readingLeft = analogRead(sensorPin[0]);
    readingRight = analogRead(sensorPin[1]);    
    if((readingLeft>waitUpThre)||(readingRight>waitUpThre))
          result=true;

    return result;
}

int cellResult(){
    int readingLeft, readingRight, angle;
    readingLeft = analogRead(sensorPin[0]);
    readingRight = analogRead(sensorPin[1]);    

    angle = map(readingRight-readingLeft, sensorRange[0], sensorRange[1], 0, 179);

    return angle;
}
