typedef struct {
  int left;            /*Sensor-differential value when fully left*/
  int right;           /*Sensor-differential value when fully right*/
} Range;

typedef struct {
  int sensorRightPin;  /*Analog Pin for sensorRight*/
  int sensorLeftPin;   /*Analog Pin for sensorLeft*/
} SensorPin;

typedef struct {
  int moniPort;        /*Port for monitor*/
  int ledPin;          /*Digital Pin for led*/
  int buzzerPin;       /*Digital Pin for busser*/
  int servoPin;        /*PWM Pin for servo*/
  SensorPin sensorPin;
  int waitUpThre;      /*Threshold for wait up*/
  Range sensorRange;   /*Sensor characteristic*/
} Chain;
