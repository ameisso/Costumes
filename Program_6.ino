void program6AtStep(int step)//Mode Boss full on + flash rouge + arlequin  
{
  int strobeSpeed = 15000; // durée totale du programme 
  if  (step % strobeSpeed  > 0 && step % strobeSpeed  < 2000) // 2000 = durée alernance rouge/noire
  {
    int deathSpeed = 200;// vitesse de rouge/noire
    if  (step % deathSpeed  > 0 && step % deathSpeed  < deathSpeed/2)
    {
      setColorForAllPixels( CRGB::Red);// ou setColorForAllPixels(COSTUME_COLOR);
    }
    else if  (step % deathSpeed  >= deathSpeed/2 && step % deathSpeed  < deathSpeed)
    {
      setColorForAllPixels( CRGB::Black);
    }
  }
  else if  (step % strobeSpeed  >= 5000 && step % strobeSpeed  < 7000)//5000 temps ou commence l'arlequin | 7000 temps ou finit l'arlequin 
  {
    if (currentProgramStep % 255 < 2 )//255 vitesse de l'arlequin
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







