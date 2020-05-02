std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
  std::string winner;
  
  while(fighter1->getHealth() > 0 && fighter2->getHealth() > 0)
  {
    if(firstAttacker  == fighter1->getName())
    {
      fighter2->setHealth(fighter2->getHealth()-fighter1->getDamagePerAttack());
      if(fighter2->getHealth() > 0)
      {
        fighter1->setHealth(fighter1->getHealth()-fighter2->getDamagePerAttack());
      }
    }
    if(firstAttacker  == fighter2->getName())
    {
      fighter1->setHealth(fighter1->getHealth()-fighter2->getDamagePerAttack());
      if(fighter1->getHealth() > 0)
      {
        fighter2->setHealth(fighter2->getHealth()-fighter1->getDamagePerAttack());
      }
    }
  }
  
  if(fighter1->getHealth() > 0)
    winner = fighter1->getName();
  else if(fighter2->getHealth() > 0)
    winner = fighter2->getName();
  
  return winner;
}
