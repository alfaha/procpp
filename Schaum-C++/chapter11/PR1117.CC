//  Problem 11.17, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

float max(float a[], int lo, int hi)
{ if (lo == hi) return a[lo];
  int mid = (lo + hi)/2;
  float maxlo = max(a, lo, mid), maxhi = max(a, mid+1, hi);
  return (maxlo > maxhi ? maxlo : maxhi);
}

int main()
{ float a[] = { 22.2, 44.4, 66.6, 88.8, 77.7, 99.9, 55.5, 33.3 };
  for (int n=1; n <= 8; n++)
    cout << "max(a, 0, " << n << ") = " << max(a, 0, n) << endl;
}
