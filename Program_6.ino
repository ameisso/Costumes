void program6AtStep(int step)//Mode Boss full on + flash rouge + arlequin  
{
  int strobeSpeed = 2000; 
  if  (step % strobeSpeed  > 0 && step % strobeSpeed  < strobeSpeed/2)
  {
    setColorForAllPixels( CRGB::Red);// ou setColorForAllPixels(COSTUME_COLOR);
  }
  else if  (step % strobeSpeed  >= strobeSpeed/2 && step % strobeSpeed  < strobeSpeed)
  {
    setColorForAllPixels( CRGB::Black);
  }

  else 
  {
    setColorForAllPixels(COSTUME_COLOR);
  }
}

//rouge 



