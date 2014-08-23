void program3AtStep(int step)//breathe
{
  if (currentProgramStep > random(200,255) || currentProgramStep < random(1,100))
  {
    way *= -1; 
  }
  currentProgramStep += way;
  setColorForAllPixels(COSTUME_COLOR,currentProgramStep);
  delay(10);
}












