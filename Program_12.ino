void program12AtStep(int step)//Water drop
{
  //BLACK OUT  
  int timeBetweenColors = 1000;
  if(step < timeBetweenColors)
  {
    setColorForAllPixels(CRGB::White);
  }
  else if(step>=timeBetweenColors && step < 2*timeBetweenColors)
  {
    setColorForAllPixels(CRGB::Navy);
  }
  else if(step>=2*timeBetweenColors && step < 3*timeBetweenColors)
  {
    setColorForAllPixels(CRGB::Aqua);
  }
  else if(step>=3*timeBetweenColors && step < 4*timeBetweenColors)
  {
    setColorForAllPixels(CRGB::CadetBlue);
  }
  else if(step>=4*timeBetweenColors && step < 5*timeBetweenColors)
  {
    setColorForAllPixels(CRGB::CornflowerBlue);
  }
  //Pour rajouter des états il faut copier coller cette ligne  jusqu'à
  else if(step>=5*timeBetweenColors && step < 6*timeBetweenColors)
  {
    setColorForAllPixels(CRGB::MidnightBlue);
  }
  //celle ci et incrémenter 5 et 6 de un.
  else
  {
    //replay 
    setColorForAllPixels(CRGB::Black);
    currentProgramStep = 0;
  }
  currentProgramStep ++;
}




















