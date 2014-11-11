void program12AtStep(int step)//color change 
{
  //Serial.print("step ");
  Serial.println(step);
  if(step < 300)
  {
    setColorForAllPixels(CRGB::Grey);
  }
  else if(step>=300 && step < 500)
  {
      setColorForAllPixels(CRGB::Navy);
  }
  else if(step>=500 && step < 700)
  {
        setColorForAllPixels(CRGB::Blue);
  }
  else if(step>=700 && step < 1000)
  {
        setColorForAllPixels(CRGB::Red);
  }
  else if(step>=1000 && step < 1500)
  {
    setColorForAllPixels(CRGB::Orange);
  }
  else if(step >= 1500 && step < 10000)
  {
      setColorForAllPixels(CRGB::Green);
  }
  currentProgramStep ++;
}
























