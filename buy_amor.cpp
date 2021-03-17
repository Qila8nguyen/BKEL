#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

#include "Weapon.h"
#include "Army.h"

using namespace std;

Weapon chooseArmor (const Army &army,int E1)
{
    int condition = E1 % 4 +1;
    bool ismoneyEven = army.Money () % 2 == 0;

    switch (army.Commander())
    {
        case 1 :
        case 2 : 
        {
            switch (condition)
                {
                    case 1: {return Weapon {190,5};break;}             
                    case 2: {return Weapon {195,7};break;} 
                    case 3: {return Weapon {200,9};break;}
                    case 4: {return Weapon {205,11};break;}
                }
        }

        case 0 : 
        {
            if (ismoneyEven)
            {
            switch (condition)
                {
                    case 4: {return Weapon {205,11};break;}
                    case 2: {return Weapon {195,7};break;}
                }
            }

            switch (condition)
                {
                    case 3: {return Weapon {200,9};break;}
                    case 1: {return Weapon {190,5};break;}  
                } 
        }
    }

}

    bool canbuyArmor (const Army &army, Weapon armor)
    {
        int money =army.Money();
        if(money ==0) return false;
        return money > armor.price ;
    }

void buy_armor (Army &army,int E1)
{
    int money = army.Money ();
    int hp = army.HP ();
    Weapon armor = Weapon {0,0};

    chooseArmor (army,E1);
    if (canbuyArmor (army,armor))
    {
        army.equip (armor);
    }
}