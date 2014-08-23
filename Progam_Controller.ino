void startProgram1()
{
  currentProgram = 1;
  currentProgramStep = 0;
}
void startProgram2()
{
  currentProgram = 2;
  currentProgramStep = 0;
  for(int i = 0; i < leftArm.numPixels(); i++ ) 
  {
    leftArm.setPixelColor(i, 255, 255, 255);  
  }
}
void startProgram3()
{
  currentProgram = 3;
  currentProgramStep = 0;
}
void startProgram4()
{
  Serial.println("I start playing program4"); 
  currentProgram = 4;
  currentProgramStep = 0;
}
void startProgram5()
{
  Serial.println("I start playing program5"); 
  currentProgram = 5;
  currentProgramStep = 0;
}

void continueOnSelectedProgram()
{
  switch (currentProgram) {
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

    break;
  case 5:

    break;
  }
}

int getButtonPressed()
{
  if (digitalRead(PROGRAM_1) == LOW)
  {
    Serial.println("PROGRAM_1");
    return 1;
  } 
  else if(digitalRead(PROGRAM_2) == LOW)
  {
    Serial.println("PROGRAM_2");
    return 2;
  }
  else if(digitalRead(PROGRAM_3) == LOW)
  {
    Serial.println("PROGRAM_3");
    return 3;
  }
  else if(digitalRead(PROGRAM_4) == LOW)
  {
    Serial.println("PROGRAM_4");
    return 4;
  }
  else if(digitalRead(PROGRAM_5) == LOW)
  {
    Serial.println("PROGRAM_5");
    return 5;
  }
  else
  {
    return -1;
  }
}


