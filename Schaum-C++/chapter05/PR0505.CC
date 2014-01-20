//  Problem 5.5, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

void copy(float y[], float x[], int n);
//  Copies the first n elements of the array x into the array y;
//  PRECONDITION: x and y both have at least n elements.
//  POSTCONDITION: x[i] == y[i] for 0 <= i < n.

void print(float x[], int n);
//  Prints the first n elements of the array x.
//  PRECONDITION: x has at least n element.

int main()
{ float x[8] = {2.2, 8.8, 4.4, 6.6, 5.5, 9.9, 3.3, 7.7};
  float y[8] = {0};
  print(x, 8);
  print(y, 8);
  copy(y, x, 5);
  print(x, 8);
  print(y, 8);
  return 0;
}

void copy(float y[], float x[], int n)
{ for (int i=0; i<n; i++)
    y[i] = x[i];
}

void print(float x[], int n)
{ for (int i=0; i<n; i++)
    cout << x[i] << " ";
  cout << endl; 
}
