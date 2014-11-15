void program2AtStep(int step)//2)un mode changement intégrale de couleur pour la scène de sélection du coloris du perso (une couleur pendant 1/2 seconde ou une seconde puis une autre puis une autre; la durée d'une couleur n'est pas constante)
{
  if (step < 3000)//allumage blanc
  {
    if( step < 450)
    {
      if(step < 150)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
      }
      else if(step >= 150 && step < 350)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
      }
      else if(step >= 350 && step < 400)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
      }
      else if(step >= 400 && step < 450)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
      }
      else
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
      }
    }
    else if(step >= 600 && step < 900)
    {
      if(step < 650)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
        setColorForPatchInMember(CRGB::White, 1, leftLeg);
        setColorForPatchInMember(CRGB::White, 1, rightLeg);
        setColorForPatchInMember(CRGB::White, 0, leftLeg);
        setColorForPatchInMember(CRGB::White, 0, rightLeg);
      }
      else if(step >= 650 && step < 800)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
        setColorForPatchInMember(CRGB::Black, 1, leftLeg);
        setColorForPatchInMember(CRGB::Black, 1, rightLeg);
        setColorForPatchInMember(CRGB::Black, 0, leftLeg);
        setColorForPatchInMember(CRGB::Black, 0, rightLeg);
      }
      else if(step >= 800 && step < 850)
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
        setColorForPatchInMember(CRGB::White, 1, leftLeg);
        setColorForPatchInMember(CRGB::White, 1, rightLeg);
        setColorForPatchInMember(CRGB::White, 0, leftLeg);
        setColorForPatchInMember(CRGB::White, 0, rightLeg);
      }
      else if(step >= 850 && step < 875)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftLeg);
        setColorForPatchInMember(CRGB::Black, 3, rightLeg);
        setColorForPatchInMember(CRGB::Black, 2, leftLeg);
        setColorForPatchInMember(CRGB::Black, 2, rightLeg);
        setColorForPatchInMember(CRGB::Black, 1, leftLeg);
        setColorForPatchInMember(CRGB::Black, 1, rightLeg);
        setColorForPatchInMember(CRGB::Black, 0, leftLeg);
        setColorForPatchInMember(CRGB::Black, 0, rightLeg);
      }
      else
      {
        setColorForPatchInMember(CRGB::White, 3, leftLeg);
        setColorForPatchInMember(CRGB::White, 3, rightLeg);
        setColorForPatchInMember(CRGB::White, 2, leftLeg);
        setColorForPatchInMember(CRGB::White, 2, rightLeg);
        setColorForPatchInMember(CRGB::White, 1, leftLeg);
        setColorForPatchInMember(CRGB::White, 1, rightLeg);
        setColorForPatchInMember(CRGB::White, 0, leftLeg);
        setColorForPatchInMember(CRGB::White, 0, rightLeg);
      }
    }
    else if(step >= 900 && step < 1500)
    {
      if(step < 950)
      {
        setColorForPatchInMember(CRGB::White, 3, leftArm);
        setColorForPatchInMember(CRGB::White, 3, rightArm);
        setColorForPatchInMember(CRGB::White, 2, leftArm);
        setColorForPatchInMember(CRGB::White, 2, rightArm);
        setColorForPatchInMember(CRGB::White, 1, leftArm);
        setColorForPatchInMember(CRGB::White, 1, rightArm);
        setColorForPatchInMember(CRGB::White, 0, leftArm);
        setColorForPatchInMember(CRGB::White, 0, rightArm);
      }
      else if(step >= 950 && step < 1100)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftArm);
        setColorForPatchInMember(CRGB::Black, 3, rightArm);
        setColorForPatchInMember(CRGB::Black, 2, leftArm);
        setColorForPatchInMember(CRGB::Black, 2, rightArm);
        setColorForPatchInMember(CRGB::Black, 1, leftArm);
        setColorForPatchInMember(CRGB::Black, 1, rightArm);
        setColorForPatchInMember(CRGB::Black, 0, leftArm);
        setColorForPatchInMember(CRGB::Black, 0, rightArm);
      }
      else if(step >= 1100 && step < 1250)
      {
        setColorForPatchInMember(CRGB::White, 3, leftArm);
        setColorForPatchInMember(CRGB::White, 3, rightArm);
        setColorForPatchInMember(CRGB::White, 2, leftArm);
        setColorForPatchInMember(CRGB::White, 2, rightArm);
        setColorForPatchInMember(CRGB::White, 1, leftArm);
        setColorForPatchInMember(CRGB::White, 1, rightArm);
        setColorForPatchInMember(CRGB::White, 0, leftArm);
        setColorForPatchInMember(CRGB::White, 0, rightArm);
      }
      else if(step >= 1250 && step < 1400)
      {
        setColorForPatchInMember(CRGB::Black, 3, leftArm);
        setColorForPatchInMember(CRGB::Black, 3, rightArm);
        setColorForPatchInMember(CRGB::Black, 2, leftArm);
        setColorForPatchInMember(CRGB::Black, 2, rightArm);
        setColorForPatchInMember(CRGB::Black, 1, leftArm);
        setColorForPatchInMember(CRGB::Black, 1, rightArm);
        setColorForPatchInMember(CRGB::Black, 0, leftArm);
        setColorForPatchInMember(CRGB::Black, 0, rightArm);
      }
      else
      {
        setColorForPatchInMember(CRGB::White, 3, leftArm);
        setColorForPatchInMember(CRGB::White, 3, rightArm);
        setColorForPatchInMember(CRGB::White, 2, leftArm);
        setColorForPatchInMember(CRGB::White, 2, rightArm);
        setColorForPatchInMember(CRGB::White, 1, leftArm);
        setColorForPatchInMember(CRGB::White, 1, rightArm);
        setColorForPatchInMember(CRGB::White, 0, leftArm);
        setColorForPatchInMember(CRGB::White, 0, rightArm);
      }
    }
    else if(step >= 1500 && step < 3000)
    {
      if(step >= 1500 && step < 1600)
      {
        setColorForRib (CRGB::Black,  0);
        setColorForRib (CRGB::Black,  1);
        setColorForRib (CRGB::Black,  2);
        setColorForRib (CRGB::Black,  3);
        setColorForRib (CRGB::Black,  4);
        setColorForRib (CRGB::Black,  5);
      }
      else if(step >= 1600 && step < 1700)
      {
        setColorForRib (CRGB::White, 0);
      }
      else if(step >= 1700 && step < 1750)
      {
        setColorForRib (CRGB::Black, 0);
      }
      else if(step >= 1750 && step < 1850)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
      }
      else if(step >= 1850 && step < 1900)
      {
        setColorForRib (CRGB::Black, 0);
        setColorForRib (CRGB::White, 1);
      }
      else if(step >= 1900 && step < 1950)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
      }
      else if(step >= 1950 && step < 2000)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::Black, 1);
        setColorForRib (CRGB::White, 2);
      }
      else if(step >= 2000 && step < 2100)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::Black, 2);
      }
      else if(step >= 2100 && step < 2200)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::White, 2);
      }
      else if(step >= 2200 && step < 2400)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::Black, 2);
        setColorForRib (CRGB::White, 3);
      }
      else if(step >= 2400 && step < 2500)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::Black, 2);
        setColorForRib (CRGB::Black, 3);
      }
      else if(step >= 2400 && step < 2500)
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::White, 2);
        setColorForRib (CRGB::White, 3);
      }
      else if(step >= 2500 && step < 2600)
      {
        setColorForRib (CRGB::White, 4);
        setColorForCollumn (CRGB::White);
      }
      else if(step >= 2600 && step < 2700)
      {
        setColorForRib (CRGB::Black, 4);
        setColorForRib (CRGB::White, 5);
      }
      else if(step >= 2700 && step < 2850)
      {
        setColorForRib (CRGB::White, 4);
        setColorForRib (CRGB::Black, 5);
      }
      else if(step >= 2850 && step < 2900)
      {
        setColorForRib (CRGB::White, 4);
        setColorForRib (CRGB::Black, 5);
      }
      else
      {
        setColorForRib (CRGB::White, 0);
        setColorForRib (CRGB::White, 1);
        setColorForRib (CRGB::White, 2);
        setColorForRib (CRGB::White, 3);
        setColorForRib (CRGB::White, 4);
        setColorForRib (CRGB::White, 5);
      }
    }
    FastLED.show();//verry important !!!
    Serial.println("white"+String(step));
  }
  else if(step >= 3000 && step < 6000)//choix du perso 
  {
      setColorForAllPixels(COSTUME_COLOR);
      Serial.println("fullWhite");
      delay(3000);
  }
  else if(step >= 6000 && step < 10000)//choix du perso 
  {
    if (step % 500 < 100 )// le 255 c'est le nombre de cycles programmes avant de changer de couleurs, si tu met 1000 ca sera plus long entre deux couleurs. Si tu veut une longeur non constance tu remplace 255 par random(255,1000);
    {//peut etre que le "< 2" sera plus un "< 10", a tester sur le costume.
      CRGB selectedColor = ColorFromPalette( currentPalette, selectedIndexInPalette, 255,NOBLEND);
      selectedIndexInPalette ++;
      setColorForAllPixels(selectedColor);
      Serial.println("newColor"+String(step % 500));
    }
  }
  else if (step >= 10000 && step< 10200)//20 pourcent de la couleur finale 
  {
    setColorForAllPixels(COSTUME_COLOR, int (0.2*255));
    //Serial.println("dimm"+String(step));
  }
  else//100% de la couleur finale 
  {
    setColorForAllPixels(COSTUME_COLOR);
    //Serial.println("endOfProgram"+String(step));
  }
}

//vert 


//5 couleurs : rouge vert bleu jaune rose 








































































