//  Problem 11.15, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <fstream.h>
#include <iostream.h>

float power(float x, int n)
{ if (n == 0) return 1;
  if (n%2) return x*power(x, n-1);
  float y = power(x, n/2);
  return y*y;
}

int main()
{ for (int n=0; n<8; n++)
    cout << "2.01^" << n << " = " << power(2.01, n) << endl;
}
