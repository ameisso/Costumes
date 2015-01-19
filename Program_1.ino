void program1AtStep(int step)//NAISSANCE
{
  if (step < 30000 && !firstprogrmaphaseEnded)
  {
    //30s 2/3 patch aléatoire 
    for (int i = 0 ; i < 3 ; i ++)
    {
      setColorForPatchInMember(CRGB::Black, random(4),leftArm);
      setColorForPatchInMember(CRGB::Black, random(4),leftArm);
      setColorForPatchInMember(CRGB::Black, random(4),rightArm);
      setColorForPatchInMember(CRGB::Black, random(4),leftLeg);
      setColorForPatchInMember(CRGB::Black, random(4),rightLeg);
      setColorForLeftRib(CRGB::Black, random(NUM_RIBS));
      setColorForRightRib(CRGB::Black, random(NUM_RIBS));
    }
    setColorForPatchInMember(COSTUME_COLOR, random(4),leftArm);
    setColorForPatchInMember(COSTUME_COLOR, random(4),rightArm);
    setColorForPatchInMember(COSTUME_COLOR, random(4),leftLeg);
    setColorForPatchInMember(COSTUME_COLOR, random(4),rightLeg);
    setColorForLeftRib(COSTUME_COLOR, random(NUM_RIBS));
    setColorForRightRib(COSTUME_COLOR, random(NUM_RIBS));
    FastLED.show();
    delay (random(0,200));

    if(random(20) == 0)
    {
      setColorForAllPixels(CRGB::Black,255);
      delay (random(1000,1500));
    }
  }
  if (step >= 30000 && step < 40000 && !firstprogrmaphaseEnded)
  {
    //10 s de noir 
    setColorForAllPixels(COSTUME_COLOR, 0);
    if (step > 39900)
    {

      firstprogrmaphaseEnded = true;
      programStartDate = millis();
    }
  }
  if (firstprogrmaphaseEnded)
  {
    if (step < timeOFBirth)
    {
      setColorForAllPixels(COSTUME_COLOR, (step/(float)timeOFBirth)*255.0);
    }
    else if(timeOFBirth > 5000)
    {
      setColorForAllPixels(COSTUME_COLOR, 0);
      timeOFBirth -= 5000;
      programStartDate = millis();
    }
    else if (timeOFBirth <= 5000 && timeOFBirth > 0)
    {
      if (timeOFBirth <= 5000 && timeOFBirth > 4000)
      {
        setColorForAllPixels(COSTUME_COLOR, 0);
        timeOFBirth -= 500;
        programStartDate = millis();
      }
      else if (timeOFBirth <= 4000 && timeOFBirth > 3000)
      {
        setColorForAllPixels(COSTUME_COLOR, 0);
        timeOFBirth -= 600;
        programStartDate = millis();
      }
      else if (timeOFBirth <= 3000 && timeOFBirth > 2000)
      {
        setColorForAllPixels(COSTUME_COLOR, 0);
        timeOFBirth -= 800;
        programStartDate = millis();
      }
      else if (timeOFBirth <= 2000 && timeOFBirth > 0)
      {
        setColorForAllPixels(COSTUME_COLOR, 0);
        timeOFBirth -= 100;
        programStartDate = millis();
      }
    }
    else
    {
      setColorForAllPixels(COSTUME_COLOR,255);
    }
  }
}




//jaune













