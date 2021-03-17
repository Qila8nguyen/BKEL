#ifndef NNNGHI_INCLUDE_STAT_H
#define NNNGHI_INCLUDE_STAT_H

struct Stat
{
  const int MAX = 1000;
  const int MIN = 0;
  int value;

  Stat (int v) : value {v} {
    check_limit();
  };

  void check_limit()
  {
    if(this->value>MAX) value=MAX;
    if(this->value<MIN) value=MIN;
  }
  void add(int stat2)
  {
    value += stat2;
    check_limit();
  }

  void substract (int stat2)
  {
    value -=stat2;
    check_limit();
  }

  void multiply (double stat2)
  {
    value =ceil(value*stat2);
    check_limit();
  }

};

#endif //NNNGHI_INCLUDE_STAT_H