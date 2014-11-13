void program3AtStep(int step)//3)un mode "étoile/invincible" : roulement aléatoire de différentes couleurs/ le costume est de plusieurs couleur ( un peu comme quand super-mario chope une étoile ça clignote de toute les couleur pendant quelque seconde)
{
  if (currentProgramStep % 255 < 2 )// le 255 c'est le nombre de cycles programmes avant de changer de couleurs, si tu met 1000 ca sera plus long entre deux couleurs. Si tu veut une longeur non constance tu remplace 255 par random(255,1000);
  {//peut etre que le "< 2" sera plus un "< 10", a tester sur le costume.
    setRandomColorForPatch();
    setRandomColorForRibs();
  }
}



//bleu //OK 












