void program10AtStep(int step)//random Strobe
{
  int strobeSpeed = 100;
  //BLACK OUT  
  if(step < strobeSpeed)
  {
    setColorForAllPixels(CRGB::Black);
  }
  else if(step>=strobeSpeed && step < 2*strobeSpeed)
  {
    for (int i = 0 ; i < 2 ; i++) 
    {
      setColorForPatchInMember( COSTUME_COLOR, random(4), leftArm);
      setColorForPatchInMember( COSTUME_COLOR, random(4), rightArm);
      setColorForPatchInMember( COSTUME_COLOR, random(4), leftLeg);
      setColorForPatchInMember( COSTUME_COLOR, random(4), rightLeg);

      setColorForLeftRib(COSTUME_COLOR, random(6));
      setColorForRightRib(COSTUME_COLOR, random(6));

      setColorForCollumn (COSTUME_COLOR);
    }
  }
  else 
  {
    currentProgramStep = 0;
  }
  currentProgramStep ++;
}






















