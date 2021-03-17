#include <iostream>
#include <cmath>
#include "Army.h"
#include "Weapon.h"

int Battle_result (Army &Tran,Army &Mongol,int& HP1, int& HP2)
{
    int lost_hp = ceil ((2*HP1*HP2)/(HP1 +HP2));

    HP1 = Tran.HP();
    HP2 = Mongol.HP();
    
    int condition1 = abs(HP2 - lost_hp);
    int condition2 = abs(HP1 - lost_hp);

    HP1 = Tran.HPafterBattle (condition1);
    HP2 = Mongol.HPafterBattle (condition2);
    
    if(HP1 > HP2) return 1;
    if(HP1==HP2) return 0;
    return -1;
}