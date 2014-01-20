//  Problem 5.9, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

void insert(float x[], int n, float t);
//  Inserts t into the sorted array, maintaining its order;
//  EXAMPLE: if x[] = {2.2, 4.4, 6.6, 8.8} then insert(x, 4, 5.5
//  changes x to {2.2, 4.4, 5.5, 6.6, 8.8}.
//  PRECONDITION: x[0] <= x[1] <= ... <= x[n-1].
//  PROSTCONDITION: x[0] <= x[1] <= ... <= x[n-1] <= x[n].

void print(float x[], int n);
//  Prints the first n elements of the array x.
//  PRECONDITION: x has at least n element.

int main()
{ float x[100] = {2.2, 4.4, 6.6, 8.8};
  int n = 4;
  print(x, n);
  float t = 5.5;
  while (t > 0.0)
  { cin >> t;
    insert(x, n++, t);
    print(x, n);
  }
  return 0;
}

void insert(float x[], int n, float t)
{ for (int i=n; i>0 && x[i-1] > t; i--)
    x[i] = x[i-1];  // shift larger elements up
  x[i] = t;
}

void print(float x[], int n)
{ for (int i=0; i<n; i++)
    cout << x[i] << "\t";
  cout << endl; 
}
