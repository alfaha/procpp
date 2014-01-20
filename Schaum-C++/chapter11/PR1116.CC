//  Problem 11.16, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

float max(float a[], int n)
{ if (n == 1) return a[0];
  float m = max(a, n-1);
  if (a[n-1] > m) return a[n-1];
  return m;
}

int main()
{ float a[] = { 22.2, 44.4, 66.6, 88.8, 77.7, 99.9, 55.5, 33.3 };
  for (int n=1; n <= 8; n++)
    cout << "max(a, " << n << ") = " << max(a, n) << endl;
}
