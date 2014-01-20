//  Example 2.16, page 31
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>          // use <iostream.h> in pre-Standard C++

using namespace std;

int main()
{ enum Roman {I=1, V=5, X=10, L=50, C=100, D=500, M=1000};
  enum Rank {DEUCE=2, TREY, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
             JACK, QUEEN, KING, ACE};
  enum Color {WHITE, BLUE=0xff, GREEN=0xff00, RED=0xff0000};
  enum {SIZE=100};  // an anonymous enumeration type
}
