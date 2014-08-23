#define PROGRAM_1 17
#define PROGRAM_2 18
#define PROGRAM_3 19
#define PROGRAM_4 22
#define PROGRAM_5 23

#define LED_OUTPUT_LEFT_ARM 2
#define LED_OUTPUT_RIGHT_ARM 14
#define LED_OUTPUT_LEFT_LEG 7
#define LED_OUTPUT_RIGHT_LEG 8

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel leftArm = Adafruit_NeoPixel(16, LED_OUTPUT_LEFT_ARM, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel rightArm = Adafruit_NeoPixel(16, LED_OUTPUT_RIGHT_ARM, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel leftLeg = Adafruit_NeoPixel(16, LED_OUTPUT_LEFT_LEG, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel RightLeg = Adafruit_NeoPixel(16, LED_OUTPUT_RIGHT_LEG, NEO_GRB + NEO_KHZ800);




int currentProgram = 3;
int currentProgramStep = 0;


void setup() 
{                
  Serial.begin(38400);
  pinMode(PROGRAM_1, INPUT_PULLUP);
  pinMode(PROGRAM_2, INPUT_PULLUP);
  pinMode(PROGRAM_3, INPUT_PULLUP);
  pinMode(PROGRAM_4, INPUT_PULLUP);
  pinMode(PROGRAM_5, INPUT_PULLUP);

  initSequence();
  Serial.println("Init OK");
}

void loop()                     
{
  int buttonPressed = getButtonPressed();
  switch (buttonPressed) {
  case 1:
    startProgram1();
    break;
  case 2:
    startProgram2();
    break;
  case 3:
    startProgram3();
    break;
  case 4:
    startProgram4();
    break;
  case 5:
    startProgram5();
    break;
  default: 
    currentProgramStep++;
    continueOnSelectedProgram();
  }
}

void initSequence()
{
  leftArm.begin();
  delay(200);
  setColorForAllPixels(leftArm.Color(0,0,0));
  delay(200);
  setColorForAllPixels(leftArm.Color(255,255,0));
  delay(200);
  setColorForAllPixels(leftArm.Color(0,255,255));
  delay(200);
  setColorForAllPixels(leftArm.Color(255,0,0));
  delay(200);
  leftArm.setBrightness(0);
  leftArm.show();
}

void setColorForAllPixels(uint32_t color)
{
  for(uint16_t i=0; i<leftArm.numPixels(); i++)
  {
    leftArm.setPixelColor(i,color);
  }
  leftArm.show();
}














