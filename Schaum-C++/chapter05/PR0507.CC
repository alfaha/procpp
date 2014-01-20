//  Problem 5.7, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

float mean(float x[], int n);
//  Returns the mean average of the first n elements of the array x;
//  EXAMPLE: if x[] = {2.2, 8.8, 4.4, 6.6}, then mean(x, 4) returns 5.5.
//  PRECONDITION: x has at least n elements.

int main()
{ const int SIZE = 4;
  float x[4] = {2.2, 8.8, 4.4, 6.6};
  cout << "mean(x, 4) = " << mean(x, 4) << endl;
  return 0;
}

float mean(float x[], int n)
{ float sum = 0.0;
  for (int i=0; i<n; i++)
    sum += x[i];
  return sum/n;
}
