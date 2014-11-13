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
      Serial.println("bas des pieds"+ String(step));
    }
    else if(step >= 450 && step < 750)
    {
      if(step < 500)
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
      else if(step >= 500 && step < 600)
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
      else if(step >= 600 && step < 650)
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
      else if(step >= 650 && step < 700)
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
      Serial.println("haut des pieds" + String(step));
    }
    else if(step >= 750 && step < 1500)
    {
      if(step < 900)
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
      else if(step >= 900 && step < 1000)
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
      else if(step >= 1000 && step < 1200)
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
      else if(step >= 1200 && step < 1300)
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
    FastLED.show();
  }
  else if(step >= 3000 && step < 4000)//choix du perso 
  {
    if (step % 255 < 2 )// le 255 c'est le nombre de cycles programmes avant de changer de couleurs, si tu met 1000 ca sera plus long entre deux couleurs. Si tu veut une longeur non constance tu remplace 255 par random(255,1000);
    {//peut etre que le "< 2" sera plus un "< 10", a tester sur le costume.
      CRGB selectedColor = ColorFromPalette( currentPalette, selectedIndexInPalette, 255,NOBLEND);
      selectedIndexInPalette ++;
      setColorForAllPixels(selectedColor);
      delay(10);
      //Serial.println("newColor"+String(millis()));
    }
  }
  else if (step >= 4000 && step< 4200)//20 pourcent de la couleur finale 
  {
    setColorForAllPixels(COSTUME_COLOR, int (0.2*255));
    //Serial.println("dimm"+String(millis()));
  }
  else//100% de la couleur finale 
  {
    setColorForAllPixels(COSTUME_COLOR);
    //Serial.println("endOfProgram"+String(millis()));
  }
}

//vert 


//5 couleurs : rouge vert bleu jaune rose 
































