#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

#include <assert.h>

#include "Stat.h"
#include "Army.h"
#include "Weapon.h"

#pragma once
using namespace std;

Weapon chooseWeapon (const Army &army)
{
  int hp = army.HP();
  int money = army.Money();

  bool  ismoneyEven = (money%2==0);

  if (hp>=500 && !ismoneyEven) return Weapon {300,50};
  if (ismoneyEven) return Weapon {200,25};

  return Weapon (0,0);
}

  bool canBuyWeapon (Weapon &weapon,const Army &army, int E1)
  {
    if (army.Money() == 0) return false;
    int h = ( E1 - 100 ) %64;
    int J = army.HP() %100;

    if (J <= h) return false;

    return army.Money() >= weapon.price; 

  }

   void buy_weapon ( Army& army,int event,Weapon &wp)
  {
    chooseWeapon (army)

    if(canBuyWeapon(army,event,wp))
      army.equipWeapon(wp);    
  }



  
