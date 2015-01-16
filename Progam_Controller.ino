void startProgram1()
{
  currentProgram = 1;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}
void startProgram2()
{
  currentProgram = 2;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}
void startProgram3()
{
  currentProgram = 3;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}
void startProgram4()
{
  currentProgram = 4;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}
void startProgram5()
{
  currentProgram = 5;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}
void startProgram6()
{
  currentProgram = 6;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}
void startProgram7()
{
  currentProgram = 7;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}

void startProgram8()
{
  currentProgram = 8;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}

void startProgram9()
{
  currentProgram = 9;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}

void startProgram10()
{
  currentProgram = 10;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}

void startProgram11()
{
  currentProgram = 11;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}

void startProgram12()
{
  currentProgram = 12;
  programStartDate = millis();
  FastLED.setBrightness( 255 );
}

void continueOnSelectedProgram()
{
  if (currentProgram > 0)
  {
    currentProgramStep = millis()-programStartDate;
  }
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
  case 6:
    program6AtStep(currentProgramStep);
    break;
  case 7:
    program7AtStep(currentProgramStep);
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
















