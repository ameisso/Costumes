void program3AtStep(int step)//fade
{
  if (currentProgramStep > random(150,255) || currentProgramStep < random(1,50))
  {
    way *= -1; 
  }
  currentProgramStep += way;
  setColorForAllPixels(CRGB::White,currentProgramStep);
  delay(5);
}












