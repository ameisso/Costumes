void program2AtStep(int step)//fade
{
#warning k = step for further improvement

  for(int k = 0; k < 255; k++)
  { 
    leftArm.setBrightness(k);
    leftArm.show();
    delay(10);
  }

  for(int k = 255; k >= 0; k--)
  { 
    leftArm.setBrightness(k);
    leftArm.show();
    delay(10);
  }
  Serial.println("program2");
}







