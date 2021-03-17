
#include "Stat.h"
#include "Weapon.h"

void Army::equipWeapon(Weapon &wp) {
  switch (Commander()) {
  case 1 : {
    hp_.add(75);
    break;
  };
  case 2 : {
    throw "Error"; // Commander =2 then canbeBuy return false;
    break;
  };
  case 0:
  {
    hp_.add(wp.bonus_hp);
    money_.substract(wp.price);
    break;
  };
  }
}

void Army::equip(Weapon &item) {
  hp_.add (item.bonus_hp);
  money_.substract(item.price);
}

void Army::HP_increaseby (double bonus_hp)
{
  hp_.multiply (bonus_hp);
}
void Army::HP_plus (double bonus_hp)
{
  hp._add(bonus_hp);
}
void Army::updateMoney (double bonus_price)
  {
    price_.multiply (bonus_price);
  }
void Army :: HPafterBattle (int condition)
{
  hp_.substract (condition);
}