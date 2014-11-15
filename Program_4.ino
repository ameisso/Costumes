void program4AtStep(int step)//4)un mode mort : clignotage de tout le costume en rouge (ou couleur originale)
{
  if  (step % 4000  > 0 && step % 4000  < 2000)
  {
    setColorForAllPixels( CRGB::Red);// ou setColorForAllPixels(COSTUME_COLOR);
  }
  else if  (step % 4000  >= 2000 && step % 4000  < 4000)
  {
    setColorForAllPixels( CRGB::Black);
  }
}

//OK //delay (2000);

//blanc


