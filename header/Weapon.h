#ifndef NNNGHI_INCLUDE_WEAPON_H
#define NNNGHI_INCLUDE_WEAPON_H

#include "ForwardHeader/Weapon.fwd.h"
#include "Army.h"

struct Weapon
{
  int price;
  int bonus_hp;

  Weapon (int cost, int hp ) : price {cost} , bonus_hp {hp}
  {}
};
Weapon chooseWeapon (const Army &army);
bool canBuyWeapon (Weapon weapon,const Army &army, int E1);
void buy_weapon (Army &army,int E1);
#endif //NNNGHI_INCLUDE_WEAPON_H
