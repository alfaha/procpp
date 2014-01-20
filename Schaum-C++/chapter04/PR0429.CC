//  Problem 4.29, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

void reverse(int& n);
//  Reverses the digits of n.
//  PRECONDITION: 100,000 <= n <= 999,999
//  EXAMPLE: if n == 289405, reverse(n) makes n == 504982

int main()
{ int n = 289405;
  reverse(n);
  cout << n << endl;
  n = 123456;
  reverse(n);
  cout << n << endl;  
}

void reverse(int& n)
{ assert(n >= 100000 && n <= 999999);
  int temp = n;
  n = temp%10;
  temp /= 10;
  n = 10*n + temp%10;
  temp /= 10;
  n = 10*n + temp%10;
  temp /= 10;
  n = 10*n + temp%10;
  temp /= 10;
  n = 10*n + temp%10;
  temp /= 10;
  n = 10*n + temp;
}
