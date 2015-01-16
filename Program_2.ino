void program2AtStep(int step)//PHARE : plus lent qu'à lyon 
{

  if  (1 < breatheDuration || breatheVariable>300)
  {
    isBreatheAscending = !isBreatheAscending; 
    //breatheDuration = random(0,200); 
  }

  int randomVar = random(100);
  if ( randomVar == 0)
  {
    setColorForAllPixels(COSTUME_COLOR,255);
    delay (30);
  }

  if(isBreatheAscending)
  {
    breatheVariable ++;
    //setColorForAllPixels(COSTUME_COLOR,breatheVariable++);
  }
  else
  {
    setColorForAllPixels(COSTUME_COLOR,breatheVariable--);
  }
  delay (30);//vitesse du breathe
}

//vert 


//5 couleurs : rouge vert bleu jaune rose 












































































