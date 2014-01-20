//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.20 on page 171
//  A Tack class

#include "Random.h"
enum State { DOWN, UP };

class Tack
{ public:
    Tack() : _state(UP);
    State toss()
    { int n = _random.integer(5);
      if (n < 3) return DOWN;  // 2/5 = 40%
      else return UP;
    }
  private:
    State _state;
    Random _random;
};
