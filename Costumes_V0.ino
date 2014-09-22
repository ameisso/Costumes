#define COSTUME_COLOR CRGB::White

#define STATUS_LED 13

#define PROGRAM_1 17
#define PROGRAM_2 18
#define PROGRAM_3 19
#define PROGRAM_4 22
#define PROGRAM_5 23

#define LED_OUTPUT_LEFT_ARM 2       //orange
#define LED_OUTPUT_RIGHT_ARM 14    //vert 
#define LED_OUTPUT_LEFT_LEG 7     //bleu 
#define LED_OUTPUT_RIGHT_LEG 8   //marron

#define NUM_LEDS_IN_MEMBER 16

#include "FastLED.h"
CRGB leftArm[NUM_LEDS_IN_MEMBER];
CRGB rightArm[NUM_LEDS_IN_MEMBER];

CRGB leftLeg[NUM_LEDS_IN_MEMBER];
CRGB rightLeg[NUM_LEDS_IN_MEMBER];


#include <Metro.h>
Metro metroButton = Metro (500);

#warning : should init program at -1 and program step @ 0
int currentProgram = 7;
int currentProgramStep = 0;
int way = -1;
CRGBPalette16 currentPalette ;

void setup() 
{            
  SetupPalette();
  pinMode(STATUS_LED, OUTPUT);
  Serial.begin(38400);
  pinMode(PROGRAM_1, INPUT_PULLUP);
  pinMode(PROGRAM_2, INPUT_PULLUP);
  pinMode(PROGRAM_3, INPUT_PULLUP);
  pinMode(PROGRAM_4, INPUT_PULLUP);
  pinMode(PROGRAM_5, INPUT_PULLUP);

  FastLED.addLeds<WS2812B, LED_OUTPUT_LEFT_ARM, GRB>(leftArm, NUM_LEDS_IN_MEMBER);
  FastLED.addLeds<WS2812B, LED_OUTPUT_RIGHT_ARM, GRB>(rightArm, NUM_LEDS_IN_MEMBER);
  FastLED.addLeds<WS2812B, LED_OUTPUT_LEFT_LEG, GRB>(leftLeg, NUM_LEDS_IN_MEMBER);
  FastLED.addLeds<WS2812B, LED_OUTPUT_RIGHT_LEG, GRB>(rightLeg, NUM_LEDS_IN_MEMBER);

  initSequence();
}

void loop()                     
{
  if(metroButton.check() == true)
  {
    digitalWrite(STATUS_LED, HIGH);
    delay(5);
    digitalWrite(STATUS_LED, LOW);
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
    }
  }
  continueOnSelectedProgram();
}























