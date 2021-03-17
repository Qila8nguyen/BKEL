#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

#include <assert.h>

#include "Army.h"
#include "Weapon.h"

using namespace std;



int getReady(int& HP, const int& ID, int& M, const int& E1)
 {
     Army army = Army {HP, ID, M}; //or auto army 

     switch (E1)
     {
         case 100 ... 199:
        {
            buy_weapon (army,E1);
            break;
        }
           
        case 200 ... 299:
        {
            buy_armor(army);
            break;
        }

        case 300 ... 399:
        {
            equip_blades_spears (army);
            break;
        }
        case 400 ... 499 :
        {
            drink_alcohol ();
            break;
        }
        case 500:
        {
            horses_riot_barracks();
            break;
        }

                    
        default : return -999;

     }
             return army.HP() + army.Money();
 }

