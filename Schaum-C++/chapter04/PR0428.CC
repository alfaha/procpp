//  Problem 4.28, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

void convert(int& weeks, int& days, int& hours, int x);
//  Modifies weeks, days, and hours so that they represent the
//  same time duration as x hours.
//  PRECONDITION: x >= 0
//  POSTCONDITION: (7*weeks + days)*24 + hours == x
//  EXAMPLE: convert(w, d, h, 4000) makes w == 23, d == 5, h == 16

int main()
{ int w, h, d, x;
  do
  { cin >> x;
    convert(w, d, h, x);
    cout << x << " = " << w << " weeks, " << d << " days, and "
         << h << " hours\n";
  } while (w > 0 || h > 0 || d > 0);
}

void convert(int& weeks, int& days, int& hours, int x)
{ assert(x >= 0);
  hours = x%24;
  x /= 24;
  days = x%7;
  weeks = x/7;
}
