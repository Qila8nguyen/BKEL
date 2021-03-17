#include "Army.h"
#include "Weapon.h"

void horses_riot_barracks (Army& army)
{
    army.HP_increaseby (0.75);
    army.updateMoney (0.75);
}