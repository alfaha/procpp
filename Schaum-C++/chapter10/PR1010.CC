//  Problem 10.10, page 235
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>
#include "Ratio.h"

typedef Ratio<short> ShortRat;
typedef Ratio<long> LongRat;

template <class T>
void print(const char* label, T& x)
{ cout << setprecision(15) << '\t' << label << " = "
       << x.num() << "/" << x.den() << " = " << x << endl;
}

int main()
{ ShortRat x(31416, 10000);
  print("x", x);
  LongRat y(314159265, 100000000);
  print("y", y);
}
