void startProgram1()
{
  currentProgram = 1;
  currentProgramStep = 0;
}
void startProgram2()
{
  currentProgram = 2;
  currentProgramStep = 0;
}
void startProgram3()
{
  currentProgram = 3;
  currentProgramStep = 120;
}
void startProgram4()
{
  currentProgram = 4;
  currentProgramStep = 0;
  setColorForAllPixels(CRGB::Black);
  delay (3000);
}
void startProgram5()
{
  currentProgram = 5;
  currentProgramStep = 0;
}
void startProgram6()
{
  currentProgram = 6;
  currentProgramStep = 0;
  SetupPalette();
}
void startProgram7()
{
  currentProgram = 7;
  currentProgramStep = 0;
}

void startProgram8()
{
  currentProgram = 8;
  currentProgramStep = 0;
}

void startProgram9()
{
  currentProgram = 9;
  currentProgramStep = 0;
}

void startProgram10()
{
  currentProgram = 10;
  currentProgramStep = 0;
}

void startProgram11()
{
  currentProgram = 11;
  currentProgramStep = 0;
}

void startProgram12()
{
  currentProgram = 12;
  currentProgramStep = 0;
}

void continueOnSelectedProgram()
{
  switch (currentProgram)
  {
  case 1:
    program1AtStep(currentProgramStep);
    break;
  case 2:
    program2AtStep(currentProgramStep);
    break;
  case 3:
    program3AtStep(currentProgramStep);
    break;
  case 4:
    program4AtStep(currentProgramStep);
    break;
  case 5:
    program5AtStep(currentProgramStep);
    break;
  }
}

int getButtonPressed()
{
  if (digitalRead(PROGRAM_1) == LOW)
  {
    return 1;
  } 
  else if(digitalRead(PROGRAM_2) == LOW)
  {
    return 2;
  }
  else if(digitalRead(PROGRAM_3) == LOW)
  {
    return 3;
  }
  else if(digitalRead(PROGRAM_4) == LOW)
  {
    return 4;
  }
  else if(digitalRead(PROGRAM_5) == LOW)
  {
    return 5;
  }
  else
  {
    return -1;
  }
}










