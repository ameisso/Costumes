void program2AtStep(int step)//RESPIRATION 
{

  Serial.println(step);
  if  (breatheVariable < 20 || breatheVariable>100)
  {
    isBreatheAscending = !isBreatheAscending; 
  }

  if(isBreatheAscending)
  {
    breatheVariable += 5;
    FastLED.setBrightness( breatheVariable );
    setColorForAllPixels(COSTUME_COLOR);
  }
  else
  {
    breatheVariable -= 10;
    FastLED.setBrightness( breatheVariable );
    setColorForAllPixels(COSTUME_COLOR);
  }
  delay (140);//vitesse du breathe

 /* //debut flash
  int randomVar = random(40);//fréquence du flash
  if ( randomVar == 0)
  {
    setColorForAllPixels(COSTUME_COLOR,255);
    delay (30);
  }
  //fin flash*/
}

//rouge





























