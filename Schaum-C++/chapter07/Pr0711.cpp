//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.11 on page 166
//  A Dice class

#include "Random.h"
class Dice
{ public:
    Dice() : _sum(2) { }
    void toss() { _sum = _random.integer(6) +_random.integer(6); }
    int sum() { return _sum; }
  private:
    Random _random;  // random number generator
    int _sum;        // the sum of the two dice
};
