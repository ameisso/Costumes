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
    while(timeOFBirth>0)
    {
      setColorForAllPixels(COSTUME_COLOR, 0);
      delay(200);
      setColorForAllPixels(COSTUME_COLOR, 255);
      delay(50); 
      timeOFBirth -= 500;
    }
    // programStartDate = millis();

    // tatatata
  }
  else
  {
    setColorForAllPixels(COSTUME_COLOR,255);
  }
}




//jaune

