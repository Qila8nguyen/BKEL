#include<iostream>
#include<assert.h>

using namespace std;

#pragma once
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
        check_limit;
    }

};

// int main ()
// {
//     Stat stat1 {5000};
//     assert (stat1.value== 1000);
//     stat1.add(300);
//     assert(stat1.value == 1000);
//     Stat stat2 {-102101};
//     assert (stat2.value == 0);

// }

