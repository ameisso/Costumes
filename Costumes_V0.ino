#define PROGRAM_1 17
#define PROGRAM_2 18
#define PROGRAM_3 19
#define PROGRAM_4 22
#define PROGRAM_5 23

int currentProgram = -1;


void setup() 
{                
  Serial.begin(38400);
  pinMode(PROGRAM_1, INPUT_PULLUP);
  pinMode(PROGRAM_2, INPUT_PULLUP);
  pinMode(PROGRAM_3, INPUT_PULLUP);
  pinMode(PROGRAM_4, INPUT_PULLUP);
  pinMode(PROGRAM_5, INPUT_PULLUP);
}

void loop()                     
{
  int buttonPressed = getSelectedProgram();
  switch (buttonPressed) {
  case 1:
    startProgram1();
    break;
  case 2:
    startProgram2();
    break;
  case 3:
    startProgram3();
    break;
  case 4:
    startProgram4();
    break;
  case 5:
    startProgram5();
    break;
  default: 
Serial.println("continue on program");
  }
}

int getSelectedProgram()
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



