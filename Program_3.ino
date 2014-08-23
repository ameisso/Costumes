void program3AtStep(int step)//fade
{

  for(uint16_t j=0; j<255; j++)
  {

    for(uint16_t i=0; i<leftArm.numPixels(); i++)
    {
      leftArm.setPixelColor(i,j,j,j);
    }
    leftArm.show();
  }






}










