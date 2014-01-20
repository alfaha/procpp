//  Problem 5.8, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

float max(float x[], int n);
//  Returns the largest among the first n elements of the array x;
//  EXAMPLE: if x[] = {2.2, 8.8, 4.4, 6.6}, then max(x, 4) returns 8.8.
//  PRECONDITION: x has at least n elements.

int main()
{ const int SIZE = 4;
  float x[4] = {2.2, 8.8, 4.4, 6.6};
  cout << "max(x, 4) = " << max(x, 4) << endl;
  return 0;
}

float max(float x[], int n)
{ int m = 0;
  for (int i=1; i<n; i++)
    if (x[i] > x[m]) m = i;
  return x[m];
}
