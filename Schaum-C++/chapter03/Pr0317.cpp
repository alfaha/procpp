//  Problem 3.17, page 63
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include <math.h>

int main()
{ int j = 22;
  double sum = 0.0;
  while (j > 8)
  { sum += log(j*j);
    --j;
  }
  cout << "sum = " << sum << endl;
}
