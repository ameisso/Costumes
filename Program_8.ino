void program8AtStep(int step)
{
  if(step<4)
  {
    for(uint16_t i=0; i<255; i++)
    {
      FastLED.setBrightness( i );
      setColorForPatchInMember(COSTUME_COLOR, step%4 , leftArm);
      delay(5);
    }
  }
  currentProgramStep ++;
}





