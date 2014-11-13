void program4AtStep(int step)//4)un mode mort : clignotage de tout le costume en rouge (ou couleur originale)
{
  if  (step%5 > 1)
  {
    setColorForAllPixels( CRGB::Red);// ou setColorForAllPixels(COSTUME_COLOR);
  }
  else
  {
    setColorForAllPixels( CRGB::Black);
  }
}

//OK 

//blanc

