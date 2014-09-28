void program4AtStep(int step)//progressive
{
  if(step < 200)
  {
    setColorForLastPatch(CRGB::Black);
    setColorForFirstPatch(COSTUME_COLOR);
  }
  else
  {
    setColorForFirstPatch(COSTUME_COLOR);
    setColorForLastPatch(COSTUME_COLOR);
  }
  currentProgramStep ++;
}

