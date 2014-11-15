void program6AtStep(int step)//Mode Boss full on + flash rouge + arlequin  
{
  int strobeSpeed = 10000; 
  if  (step % strobeSpeed  > 0 && step % strobeSpeed  < 2000)
  {
    int deathSpeed = 200;
    if  (step % deathSpeed  > 0 && step % deathSpeed  < deathSpeed/2)
    {
      setColorForAllPixels( CRGB::Red);// ou setColorForAllPixels(COSTUME_COLOR);
    }
    else if  (step % deathSpeed  >= deathSpeed/2 && step % deathSpeed  < deathSpeed)
    {
      setColorForAllPixels( CRGB::Black);
    }
  }

  else if  (step % strobeSpeed  >= strobeSpeed/2 && step % strobeSpeed  < 7000)
  {
    if (currentProgramStep % 255 < 2 )
    {
      setRandomColorForPatch();
      setRandomColorForRibs();
    }
  }

  else 
  {
    setColorForAllPixels(COSTUME_COLOR);
  }
}

//rouge 







