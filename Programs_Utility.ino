void initSequence()
{
  setColorForAllPixels(CRGB::Orange);
  delay(200);
  setColorForAllPixels(CRGB::Turquoise);
  delay(200);
  setColorForAllPixels(CRGB::Blue);
  delay(200);
  setColorForAllPixels(CRGB::Black);
  delay(200);
  FastLED.show();
}

void setColorForAllPixels(CRGB color)
{
  for(uint16_t i=0; i<NUM_LEDS_IN_MEMBER; i++)
  {
    leftArm[i] = color;
    rightArm[i] = color;
    leftLeg[i] = color;
    rightLeg[i] = color;
  }
  FastLED.show();
}

void setColorForAllPixels(CRGB color, int intensity)
{
  Serial.println(intensity);
  FastLED.setBrightness( intensity );
  for(uint16_t i=0; i<NUM_LEDS_IN_MEMBER; i++)
  {
    leftArm[i] = color;
    rightArm[i] = color;
    leftLeg[i] = color;
    rightLeg[i] = color;
  }
  FastLED.show();
}


//only the nearest patch for chest 
void setColorForFirstPatch(CRGB color)
{
  for(uint16_t i=0; i<NUM_LEDS_IN_MEMBER/2; i++)
  {
    leftArm[i] = color;
    rightArm[i] = color;
    leftLeg[i] = color;
    rightLeg[i] = color;
  }
  FastLED.show();
}

//only the farest patch for chest 
void setColorForLastPatch(CRGB color)
{
  for(uint16_t i=NUM_LEDS_IN_MEMBER/2; i<NUM_LEDS_IN_MEMBER; i++)
  {
    leftArm[i] = color;
    rightArm[i] = color;
    leftLeg[i] = color;
    rightLeg[i] = color;
  }
  FastLED.show();
}


void setRandomColorForPatch()
{
  int patchIndex = random(4) *4;
  int colorIndex = random(100);
  for(uint16_t i=patchIndex; i<(patchIndex + 4); i++)
  {
    leftArm[i] = ColorFromPalette( currentPalette, colorIndex, 255,NOBLEND);
    rightArm[i] = ColorFromPalette( currentPalette, colorIndex, 255, NOBLEND);
    leftLeg[i] = ColorFromPalette( currentPalette, colorIndex, 255, NOBLEND);
    rightLeg[i] = ColorFromPalette( currentPalette, colorIndex, 255, NOBLEND);
  }
  delay(50);
  FastLED.show();
}

void SetupPalette()
{
  CRGB SteelBlue = CRGB::SteelBlue;
  CRGB Turquoise = CRGB::Turquoise;
  CRGB SkyBlue = CRGB::SkyBlue;
  CRGB RoyalBlue = CRGB::RoyalBlue;
  CRGB PaleTurquoise = CRGB::PaleTurquoise;
  CRGB MidnightBlue = CRGB::MidnightBlue;
  CRGB LightCoral = CRGB::LightCoral;
  CRGB Fuchsia = CRGB::Fuchsia;
  CRGB black  = CRGB::Black;

  currentPalette = CRGBPalette16( 
  SteelBlue,  Turquoise,  SkyBlue,  RoyalBlue,
  PaleTurquoise, MidnightBlue, LightCoral,  Fuchsia,
  SteelBlue,  Turquoise,  SkyBlue,  RoyalBlue,
  PaleTurquoise, MidnightBlue, LightCoral,  Fuchsia);
}






