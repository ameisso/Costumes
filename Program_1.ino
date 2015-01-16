void program1AtStep(int step)//NAISSANCE
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
    else if (timeOFBirth <= 3000 && timeOFBirth > 1000)
    {
    setColorForAllPixels(COSTUME_COLOR, 0);
    timeOFBirth -= 800;
    programStartDate = millis();
    }
    else if (timeOFBirth <= 1000 && timeOFBirth > 0)
    {
    setColorForAllPixels(COSTUME_COLOR, 0);
    timeOFBirth -= 100;
    programStartDate = millis();
    }
    // programStartDate = millis();

    // tatatata
  }
  else
  {
    Serial.println("I go there");
    setColorForAllPixels(COSTUME_COLOR,255);
  }
}




//jaune




