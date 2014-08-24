void program7AtStep(int step)//long evolutive program
{
  Serial.print("step ");
  Serial.println(step);
  if(step < 300)
  {
    setColorForAllPixels(CRGB::Black);
  }
  else if(step>=300 && step < 500)
  {
    setColorForLastPatch(CRGB::Black);
    setColorForFirstPatch(COSTUME_COLOR);
  }
  else if(step>=500 && step < 700)
  {
    setColorForLastPatch(COSTUME_COLOR);
    setColorForFirstPatch(COSTUME_COLOR);
  }
  else if(step>=700 && step < 1000)
  {
    setColorForLastPatch(COSTUME_COLOR);
    setColorForFirstPatch(CRGB::Black);
  }
  else if(step>=1000 && step < 1500)
  {
    setColorForAllPixels(CRGB::Black);
  }
  else if(step >= 1500 && step < 10000)
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
  }
  currentProgramStep ++;
}









