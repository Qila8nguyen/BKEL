#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

#include <assert.h>

#include "Army.h"
#include "Weapon.h"

using namespace std;

int Battle_result (Army &Tran,Army &Mongol,int &HP1,int &HP2)
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

int secondBattle(int& HP1, int& HP2, const int& ID1, const int& ID2, const int& E3){
    Army Tran = Army {HP1, 0, ID1}; // kh xét money nữa thì để money = 0 ??
    Army Mongol = Army {HP2, 0, ID2};

    Tran.HP_increaseby (1.4);
    Mongol.HP_increaseby (1.6);

    switch (E3)
    {
        case 100 ... 199 :
        {
            if(Mongol.Commander()==0) Mongol.HP_increaseby(0.95);
            Battle_result (Tran,Mongol,HP1,HP2);
        }
        
        case 200 ... 299 :
        {
            if(Mongol.Commander() == 0)  Mongol.HP_increaseby(0.95); //no battle occur
            return 0;
        }
    }
}