#include <iostream >
#include "Weapon.h"
#include "Army.h"

Weapon chooseBladeSpear (const Army &army,int E1)
{
    int percent_increase = 1;
    int last_digit = E1 % 10;
    int bonus_HP = 1;  //integer or double ?
    bonus_HP = percent_increase*0.01*army.HP();

    if (last_digit == 3 ||last_digit == 2 ||last_digit == 5||last_digit == 7)
    {
        percent_increase = 2*last_digit;
        if (army.Commander () == 1) return {Weapon {500,200}}; //Spear
        return {Weapon {500,bonus_HP}};
    }  

    //khong nam trong th prime
    return {Weapon {300,bonus_HP}}; //Blade

}

bool canBuyBladeSpear (const Army &army)
{
    if (HP >=600) return true;
    return false;
}

void equip_blades_spears (Army &army,int E1,Weapon blade_spear)
{
    chooseBladeSpear (army,E1);
    if (canBuyBladeSpear (army))
    {
        army.equip(blade_spear);
    }
}