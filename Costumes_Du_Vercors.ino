//#define COSTUME_COLOR CRGB::Navy
#define COSTUME_COLOR CRGB::Orange

#define STATUS_LED 13
#define RIB_LEDS_MAX_INTENSITY 100

#define PROGRAM_1 17
#define PROGRAM_2 18
#define PROGRAM_3 19
#define PROGRAM_4 22
#define PROGRAM_5 23

#define LED_OUTPUT_LEFT_ARM 2    //orange
#define LED_OUTPUT_RIGHT_ARM 14  //bleu 
#define LED_OUTPUT_LEFT_LEG 7    //vert
#define LED_OUTPUT_RIGHT_LEG 8   //marron

#define LED_OUTPUT_LEFT_RIBS 6   //orange
#define LED_OUTPUT_RIGHT_RIBS 20 //vert
#define LED_OUTPUT_COLLUMN 21    //bleu

#define NUM_LEDS_IN_MEMBER 16
#define NUM_LEDS_IN_RIBS 341
#define NUM_LEDS_IN_COLLUMN 24

#define NUM_RIBS 6
#define DEBOUNCE_TIME 100 //ms 

#include "FastLED.h"
CRGB leftArm[NUM_LEDS_IN_MEMBER];
CRGB rightArm[NUM_LEDS_IN_MEMBER];

CRGB leftLeg[NUM_LEDS_IN_MEMBER];
CRGB rightLeg[NUM_LEDS_IN_MEMBER];

CRGB leftRibs[NUM_LEDS_IN_RIBS];
CRGB rightRibs[NUM_LEDS_IN_RIBS];
CRGB collumn[NUM_LEDS_IN_COLLUMN];

#include <Metro.h>
Metro metroButton = Metro (50);

#warning : should init program at -1 and program step @ 0
int currentProgram = -1;
int currentProgramStep = 0;
int programStartDate = 0;
int way = -1;
int selectedIndexInPalette = 0;
int lastButtonPressed = 0;

CRGBPalette16 currentPalette ;

void setup() 
{            
  SetupPalette();//cette fonction est dans l'onglet programs_utility c'es la que l'on choisis les couleurs pour le programme 2 (et les autres dans le meme genre)
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

  FastLED.addLeds<WS2812B, LED_OUTPUT_LEFT_RIBS, GRB>(leftRibs, NUM_LEDS_IN_RIBS);
  FastLED.addLeds<WS2812B, LED_OUTPUT_RIGHT_RIBS, GRB>(rightRibs, NUM_LEDS_IN_RIBS);
  FastLED.addLeds<WS2812B, LED_OUTPUT_COLLUMN, GRB>(collumn, NUM_LEDS_IN_COLLUMN);

  initSequence();
  Serial.println("init OK 160");
        startProgram2();
}

void loop()                     
{
  if(metroButton.check() == true && (millis() - lastButtonPressed > DEBOUNCE_TIME))
  {
    lastButtonPressed = millis();
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
























