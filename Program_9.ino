void program9AtStep(int step)//Water drop
{
  //BLACK OUT  
  if(step < 300)
  {
    setColorForAllPixels(CRGB::Black);
  }
  else if(step>=300 && step < 500)
  {
    setColorForCollumnAtIndex(COSTUME_COLOR, 6);
  }
  else if(step>=500 && step < 600)
  {
    setColorForCollumnAtIndex(COSTUME_COLOR, 5);
    setColorForCollumnAtIndex(COSTUME_COLOR, 7);
  }
  else if(step>=600 && step < 700)
  {
    setColorForCollumnAtIndex(CRGB::Black, 6);
    setColorForCollumnAtIndex(COSTUME_COLOR, 4);
    setColorForCollumnAtIndex(COSTUME_COLOR, 8);

    setColorForRib (COSTUME_COLOR,4);
  }
  else if(step>=700 && step < 800)
  {
    setColorForCollumnAtIndex(CRGB::Black, 5);
    setColorForCollumnAtIndex(CRGB::Black, 7);
    setColorForCollumnAtIndex(COSTUME_COLOR, 3);
    setColorForCollumnAtIndex(COSTUME_COLOR, 9);

    setColorForRib (CRGB::Black,4);
    setColorForRib (COSTUME_COLOR,3);
    setColorForRib (COSTUME_COLOR,5);
  }
  else if(step>=800 && step < 900)
  {
    setColorForCollumnAtIndex(CRGB::Black, 4);
    setColorForCollumnAtIndex(CRGB::Black, 8);
    setColorForCollumnAtIndex(COSTUME_COLOR, 2);
    setColorForCollumnAtIndex(COSTUME_COLOR, 10);

  }
  else if(step>=800 && step < 1000)
  {
    setColorForCollumnAtIndex(CRGB::Black, 3);
    setColorForCollumnAtIndex(CRGB::Black, 9);
    setColorForCollumnAtIndex(COSTUME_COLOR, 1);
    setColorForCollumnAtIndex(COSTUME_COLOR, 11);
    setColorForCollumnAtIndex(COSTUME_COLOR, 12);

    setColorForRib (CRGB::Black,3);
    setColorForRib (CRGB::Black,5);
    setColorForRib (COSTUME_COLOR,1);
    setColorForRib (COSTUME_COLOR,2);
    setColorForRib (COSTUME_COLOR,6);
  }
  else if(step>=1000 && step < 1100)
  {
    setColorForCollumnAtIndex(CRGB::Black, 2);
    setColorForCollumnAtIndex(CRGB::Black, 10);
  }
  else if(step>=1100 && step < 1200)
  {
    setColorForCollumnAtIndex(CRGB::Black, 1);
    setColorForCollumnAtIndex(CRGB::Black, 11);
    setColorForCollumnAtIndex(CRGB::Black, 12);

    setColorForRib (CRGB::Black,1);
    setColorForRib (CRGB::Black,2);
    setColorForRib (CRGB::Black,6);
  }
  else if(step>=1200 && step < 1300)
  {
    setColorForLastPatch(CRGB::Black);
    setColorForFirstPatch(COSTUME_COLOR);
  }
  else if(step>=1200 && step < 1300)
  {
    setColorForLastPatch(COSTUME_COLOR);
    setColorForFirstPatch(COSTUME_COLOR);
  }
  else
  {
    //replay 
    setColorForAllPixels(CRGB::Black);
    currentProgramStep = 0;
  }
  currentProgramStep ++;
}

















