//  Problem 4.33, page 81
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

int lg(int n);
//  Returns the number of times n can be divided by 2.
//  PRECONDITION: n > 0
//  POSTCONDITION: 2^p <= n < 2^(p+1), where p is returned
//  EXAMPLE: lg(100) returns 6

int main()
{ cout << "lg(1025) = " << lg(1025) << endl;
  cout << "lg(1024) = " << lg(1024) << endl;
  cout << "lg(1000) = " << lg(1000) << endl;
  cout << "lg(100) =  " << lg(100) << endl;
  cout << "lg(10) =   " << lg(10) << endl;
  cout << "lg(9) =    " << lg(9) << endl;
  cout << "lg(8) =    " << lg(8) << endl;
  cout << "lg(7) =    " << lg(7) << endl;
  cout << "lg(2) =    " << lg(2) << endl;
  cout << "lg(1) =    " << lg(1) << endl;
}

int lg(int n)
{ assert(n > 0);
  int count = 0;
  while (n > 1)
  { n /= 2;
    ++count;
  }
  return count;
}
