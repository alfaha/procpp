//  Problem 4.30, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

void print(int n);
//  Prints the sequence of numbers n, n1, n2, ..., 1, where the
//  successor of each n > 1 is either n/2 or 3*n + 1 depending on
//  whether n is even or odd.
//  PRECONDITION: n > 0
//  EXAMPLE: print(3) prints 3, 10, 5, 16, 8, 4, 2, 1

int main()
{ print(3);
  print(13);
  print(23);
  print(33);  
}

void print(int n)
{ assert(n > 0);
  while (n > 1)
  { cout << n << ", ";
    if (n%2 == 0) n /= 2;
    else n = 3*n + 1;
  }
  cout << 1 << endl;
}
