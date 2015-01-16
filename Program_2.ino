void program2AtStep(int step)//PHARE : plus lent qu'à lyon 
{
  
 Serial.println(step);
  if  (breatheVariable < 20 || breatheVariable>200)
  {
    isBreatheAscending = !isBreatheAscending; 
  }

   int randomVar = random(40);
  if ( randomVar == 0)
  {
    setColorForAllPixels(COSTUME_COLOR,255);
    delay (30);
  }

  if(isBreatheAscending)
  {
    breatheVariable +=10;
    Serial.println(breatheVariable);
      FastLED.setBrightness( breatheVariable );
    setColorForAllPixels(COSTUME_COLOR);
  }
  else
  {
    breatheVariable -= 10;
    FastLED.setBrightness( max(50,breatheVariable) );
    setColorForAllPixels(COSTUME_COLOR);
  }
  delay (100);//vitesse du breathe
}

//rouge




























