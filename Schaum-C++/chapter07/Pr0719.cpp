//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.19 on page 170
//  A Dice class

#include "Random.h"

class Dice
{ public:
    Dice() : _sum(3) { }
    void toss()
    { _sum = _r.integer(4) + _r.integer(4) + _r.integer(4);
    }
    int sum() { return _sum; }
  private:
    int _sum;   // the sum of the three dice
    Random _r;  // random number generator
};
