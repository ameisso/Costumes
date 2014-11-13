void program5AtStep(int step)//4) si on arrive à l'utiliser en simple impulsion pour les dégats reçu.
{
  if  (step< 500)//durée de l'impulsion 
  {
    setColorForAllPixels( CRGB::Red);// ou setColorForAllPixels(COSTUME_COLOR);
  }
  else
  {
    setColorForAllPixels( CRGB::Black);
  }
  currentProgramStep ++;
}


//OK 

//noir


