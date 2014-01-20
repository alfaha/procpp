//  Problem 5.11, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>
#include <math.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

float std_dev(float x[], int n);
//  Returns the standard deviation of the first n elements of x.
//  PRECONDITION: x has at least n elements.

int main()
{ float x[8] = {2.2, 8.8, 4.4, 6.6, 5.5, 9.9, 3.3, 7.7};
  for (int k=2; k <= 8; k++)
    cout << "std_dev(x, " << k << ") = " << std_dev(x, k) << endl;  
  return 0;
}

float mean(float x[], int n)
{ float sum = 0.0;
  for (int i=0; i<n; i++)
    sum += x[i];
  return sum/n;
}

float std_dev(float x[], int n)
{ assert(n > 1);
  float m = mean(x, n);
  float s = 0.0;
  for (int i=0; i<n; i++)
    s += (x[i] - m)*(x[i] - m);
  return sqrt(s/(n-1)); 
}
