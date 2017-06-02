# DuckFaceLight
Jim's arduino project 1(Yellow duck face the light). video is https://www.youtube.com/watch?v=Vf-gyCzxypA

##Please rewrite your hardware config in "toyPorting.ino" and build it!
```
Chain Porting(void){  
   /*Please full up the index to customize your product*/  
   Chain toyChain {  
      9600,         /*Port for monitor*/  
      13,           /*Digital Pin for led*/  
      8,            /*Digital Pin for buzzer*/  
      9,            /*PWM Pin for servo*/  
      {1,0},        /*{Pin of sensorRight, Pin of sensorLeft}*/  
      800,          /*Threshold for wait up*/  
      {-230,230},   /*The differential value of two sensor{miniimum, mamximum}*/  
    };  
    /*Please full up the index to customize your product*/  
    return toyChain;  
}  
```
Main Components:  Arduino R3, Photocell 2, Servo 1, Resistance(10k) 2  
Additional: Yellow duck, Buzzer, LED

Hint: The index of "Threshold for wait up" & "The differential value of two sensor" may need fine tune due to different models of Photocell.
