void program7AtStep(int step)//Breathe
{
  if  (breatheVariable < 1 || breatheVariable>100)
  {
    isBreatheAscending = !isBreatheAscending;  
  }

  int randomVar = random(255);
  if ( randomVar == 0)
  {
    setColorForAllPixels(COSTUME_COLOR,255);
    delay (30);
  }

  if(isBreatheAscending)
  {
    breatheVariable ++;
    //setColorForAllPixels(COSTUME_COLOR,breatheVariable++);
  }
  else
  {
    setColorForAllPixels(COSTUME_COLOR,breatheVariable--);
  }

  delay (30);//vitesse du breathe
}



