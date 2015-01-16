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

    setColorForAllPixels(COSTUME_COLOR, 0);
    timeOFBirth -= 1000;
    programStartDate = millis();
  }
  else
  {
    setColorForAllPixels(COSTUME_COLOR,255);
  }
}





