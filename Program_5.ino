void program5AtStep(int step)//strobe
{
  if  (step%5 > 1)
  {
    leftArm[random(NUM_LEDS_IN_MEMBER)] = COSTUME_COLOR;
    rightArm[random(NUM_LEDS_IN_MEMBER)] = COSTUME_COLOR;
    leftLeg[random(NUM_LEDS_IN_MEMBER)] = COSTUME_COLOR;
    rightLeg[random(NUM_LEDS_IN_MEMBER)] = COSTUME_COLOR;
    FastLED.show();
  }
  else
  {

    leftArm[random(NUM_LEDS_IN_MEMBER)] = CRGB::Black;
    rightArm[random(NUM_LEDS_IN_MEMBER)] = CRGB::Black;
    leftLeg[random(NUM_LEDS_IN_MEMBER)] = CRGB::Black;
    rightLeg[random(NUM_LEDS_IN_MEMBER)] = CRGB::Black;
    FastLED.show();
  }
  currentProgramStep ++;
}


