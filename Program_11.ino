void program11AtStep(int step)//strobe
{
  if  (step%5 > 1)
  {
    setColorForAllPixels(COSTUME_COLOR);
    FastLED.show();
  }
  else
  {
    setColorForAllPixels( CRGB::Black);
    FastLED.show();
  }
  currentProgramStep ++;
}



