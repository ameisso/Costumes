void program3AtStep(int step)//breathe
{
  if (currentProgramStep%255 > random(200,255) || currentProgramStep%255 < random (1,100))
  {
    way *= -1; 
  }
  currentProgramStep += way;
  setColorForAllPixels(COSTUME_COLOR,step%255);
  delay(10);
}












