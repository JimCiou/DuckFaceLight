Chain Porting(void){
   /*Please full up the index to customize your product*/
   Chain toyChain {
      9600,         /*Port for monitor*/
      13,           /*Digital Pin for led*/
      8,            /*Digital Pin for buzzer*/
      9,            /*PWM Pin for servo*/
      {1,0},        /*{sensorRight, sensorLeft}*/
      800,          /*Threshold for wait up*/
      {-230,230},   /*{fully left, fully right}*/
    };
    /*Please full up the index to customize your product*/
    return toyChain;
}
