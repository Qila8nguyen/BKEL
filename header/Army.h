#ifndef NNNGHI_INCLUDE_ARMY_H
#define NNNGHI_INCLUDE_ARMY_H

#include "ForwardHeader/Army.fwd.h"
#include "Weapon.h"
#include "Stat.h"

class Army {
private:
  Stat hp_;
  Stat money_;
  int commander_;

public :
  Army(int hp, int m, int c)
      : hp_{hp}, money_{m}, commander_{c} {}

public:
  int HP() const { return hp_.value; };
  int Money() const { return money_.value; }
  int Commander() const { return commander_; }

  void equipWeapon(Weapon &wp);
  void equip (Weapon &item);
  void alcohol ();
  void horses_riot ();
};

#endif //NNNGHI_INCLUDE_ARMY_H
