#include "include/start.h"

void start(void){
    Chain toyChain=Porting();
    Chain *ptrchain=&toyChain;
    log4aInitial(ptrchain);
    log4a("Initial device START.");
    ledInitial(ptrchain);
    ledBlink();
    buzzerON(ptrchain);
    ledDown();
    servoInitial(ptrchain);
    photocellInitial(ptrchain);
    log4a("Initial device OVER.");
}

