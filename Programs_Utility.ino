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
  for(uint16_t i=0; i<NUM_LEDS_IN_RIBS; i++)
  {
    leftRibs[i] = getRibColorForColor(color);
    rightRibs[i] = getRibColorForColor(color);
  }
  for(uint16_t i=0; i<NUM_LEDS_IN_COLLUMN; i++)
  {
    collumn[i] = color;
  }
  FastLED.show();
}

void setColorForAllPixels(CRGB color, int intensity)
{
  FastLED.setBrightness( intensity );
  for(uint16_t i=0; i<NUM_LEDS_IN_MEMBER; i++)
  {
    leftArm[i] = color;
    rightArm[i] = color;
    leftLeg[i] = color;
    rightLeg[i] = color;
  }
  for(uint16_t i=0; i<NUM_LEDS_IN_RIBS; i++)
  {
    leftRibs[i]  = getRibColorForColor(color);
    rightRibs[i]  = getRibColorForColor(color);
  }
  for(uint16_t i=0; i<NUM_LEDS_IN_COLLUMN; i++)
  {
    collumn[i] = color;
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

void setColorForPatchInMember(CRGB color, int patchIndex, CRGB *member)
{
  for(uint16_t i=patchIndex *4; i<patchIndex * 4 +4; i++)
  {
    member[i] = color;
  }
  FastLED.show();
}

void setColorForLeftRib(CRGB color, int ribIndex)
{
  for (int i = startIndexForRib(ribIndex) ; i < endIndexForRib(ribIndex) ; i++)
  {
    leftRibs[i] = getRibColorForColor(color);
  }
}

void setColorForRightRib(CRGB color, int ribIndex)
{
  for (int i = startIndexForRib(ribIndex) ; i < endIndexForRib(ribIndex) ; i++)
  {
    rightRibs[i] = getRibColorForColor(color);
  }
}

void setColorForRib (CRGB color, int ribIndex)
{
  setColorForLeftRib (color, ribIndex);
  setColorForRightRib (color, ribIndex);
}

void setColorForCollumn (CRGB color)
{
  for (int i = 0 ; i < NUM_LEDS_IN_COLLUMN ; i ++) 
  {
    collumn[i] = color;
  }
  FastLED.show();
}

void setColorForCollumnAtIndex(CRGB color, int index)
{
  for(uint16_t i=index *2; i<index * 2 +2; i++)
  {
    collumn[i] = color;
  }
  FastLED.show();
}


//INDEX OF LEDS RIBS DEPENDOING ON COSTUME
int startIndexForRib(int ribIndex)
{
  switch (ribIndex) {
  case 1:
    return 0;
  case 2:
    return 27;
  case 3:
    return 72;
  case 4:
    return 122;
  case 5:
    return 264;
  case 6:
    return 307; 
  }
}

int endIndexForRib(int ribIndex)
{
  switch (ribIndex) {
  case 1:
    return 26;
  case 2:
    return 71;
  case 3:
    return 121;
  case 4:
    return 263;
  case 5:
    return 306;
  case 6:
    return 341;
  }
}

CRGB getRibColorForColor( CRGB inputColor)
{
  CRGB outputColor; 

  outputColor.r = inputColor.r*RIB_LEDS_MAX_INTENSITY/255;
  outputColor.g = inputColor.g*RIB_LEDS_MAX_INTENSITY/255;
  outputColor.b = inputColor.b*RIB_LEDS_MAX_INTENSITY/255;
  return outputColor;
}






