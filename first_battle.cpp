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

int firstBattle(int& HP1, int& HP2, const int& ID1, const int& ID2, const int& E2){
    Army Tran = Army {HP1, 0, ID1}; // kh xét money nữa thì để money = 0 ??
    Army Mongol = Army {HP2, 0, ID2};

    // HP1 = Tran.HP ();  ???? có cần viết ra không ? để chút trừ đi
    // HP2 = Mongol.HP ();
    switch (E1)
    {
        case 100 ... 199 :
        {
            Tran.HP_increaseby(1.1);
            Mongol.HP_increaseby(1.3);
            break;
        }

        case 200 ... 299:
        {
            Tran.HP_increaseby(1.7);
            Mongol.HP_increaseby (1.2);
            break;
        }

        case 300 ... 399 :
        {
            if(E2<350) Tran.HP_plus (30);
            else Tran.HP_plus (E2%100);
        }

        case 400 ... 499 :
        {
            Tran.HP_increaseby (1.3*0.5);
            Mongol.HP_increaseby (0.8);
            break;
        }
    }

    Tran.HP_increaseby (0.8);

    HP1 = Tran.HP ();  
    HP2 = Mongol.HP ();

    // int condition1 = abs(HP2 - lost_hp);
    // int condition2 = abs(HP1 - lost_hp);

    // HP1 = army1.HPafterBattle (condition1);
    // HP2 = army2.HPafterBattle (condition2);
    
    // if(HP1 > HP2) return 1;
    // if(HP1==HP2) return 0;
    // return -1;

    int Battle_result (Tran,Mongol,HP1,HP2);
}