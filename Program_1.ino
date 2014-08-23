void program1AtStep(int step)//FullON
{
  leftArm.setBrightness(255);
  colorWipe(leftArm.Color(0, 255, 255), 50);
}

void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<leftArm.numPixels(); i++) {
    leftArm.setPixelColor(i, c);
    leftArm.show();
  }
}

