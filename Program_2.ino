void program2AtStep(int step)//2)un mode changement intégrale de couleur pour la scène de sélection du coloris du perso (une couleur pendant 1/2 seconde ou une seconde puis une autre puis une autre; la durée d'une couleur n'est pas constante)
{

  if(millis() < 4000)
  {
    if (currentProgramStep % 255 < 2 )// le 255 c'est le nombre de cycles programmes avant de changer de couleurs, si tu met 1000 ca sera plus long entre deux couleurs. Si tu veut une longeur non constance tu remplace 255 par random(255,1000);
    {//peut etre que le "< 2" sera plus un "< 10", a tester sur le costume.
      CRGB selectedColor = ColorFromPalette( currentPalette, selectedIndexInPalette, 255,NOBLEND);
      selectedIndexInPalette ++;
      setColorForAllPixels(selectedColor);
      delay(10);
      //Serial.println("newColor"+String(millis()));
    }
  }
  else if (millis() >= 4000 && millis()< 4200)
  {
    setColorForAllPixels(COSTUME_COLOR, int (0.2*255));
     //Serial.println("dimm"+String(millis()));
  }
  else
  {
    setColorForAllPixels(COSTUME_COLOR);
    //Serial.println("endOfProgram"+String(millis()));
  }
  currentProgramStep ++;
}

//vert 


//5 couleurs : rouge vert bleu jaune rose 











