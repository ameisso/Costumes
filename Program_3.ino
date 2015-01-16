void program3AtStep(int step)//RENCONTRE
{
  if (currentProgramStep % 255 < 2 )// le 255 c'est le nombre de cycles programmes avant de changer de couleurs, si tu met 1000 ca sera plus long entre deux couleurs. Si tu veut une longeur non constance tu remplace 255 par random(255,1000);
  {//peut etre que le "< 2" sera plus un "< 10", a tester sur le costume.
    setRandomColorForPatch();
    setRandomColorForRibs();
  }
}



//bleu //OK 












