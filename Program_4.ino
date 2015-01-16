void program4AtStep(int step)//4)un mode mort : clignotage de tout le costume en rouge (ou couleur originale)
{
  int strobeSpeed = 2000; //
  if  (step % strobeSpeed  > 0 && step % strobeSpeed  < strobeSpeed/2)
  {
    setColorForAllPixels( CRGB::Red);// ou setColorForAllPixels(COSTUME_COLOR);
  }
  else if  (step % strobeSpeed  >= strobeSpeed/2 && step % strobeSpeed  < strobeSpeed)
  {
    setColorForAllPixels( CRGB::Black);
  }
}

//OK //delay (2000);

//blanc


