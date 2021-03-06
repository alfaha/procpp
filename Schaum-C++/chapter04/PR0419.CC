//  Problem 4.19 on page 79
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <cassert>
#include <iostream>
using namespace std;

int decimal(int);
//  Returns the decimal numeral whose value equals that 
//  represented in the binary form b.
//  PRECONDITION: each digit of b is a bit: 0 or 1
//  EXAMPLE: decimal(10001011) returns 139

int main()
{ cout << "decimal(10001011) = " << decimal(10001011) << endl;
}

int decimal(int b)
{ int b0 = b%10;  assert(b0 == 0 || b0 == 1);  b /= 10;
  int b1 = b%10;  assert(b1 == 0 || b1 == 1);  b /= 10;
  int b2 = b%10;  assert(b2 == 0 || b2 == 1);  b /= 10;
  int b3 = b%10;  assert(b3 == 0 || b3 == 1);  b /= 10;
  int b4 = b%10;  assert(b4 == 0 || b4 == 1);  b /= 10;
  int b5 = b%10;  assert(b5 == 0 || b5 == 1);  b /= 10;
  int b6 = b%10;  assert(b6 == 0 || b6 == 1);  b /= 10;
  int b7 = b%10;  assert(b7 == 0 || b7 == 1);  b /= 10;
  int b8 = b%10;  assert(b8 == 0 || b8 == 1);  b /= 10;
  int b9 = b%10;  assert(b9 == 0 || b9 == 1);  b /= 10;
  return ((((((((b9*2 + b8)*2 + b7)*2 + b6)*2 + b5)*2 + b4)*2
                      + b3)*2 + b2)*2 + b1)*2 + b0;
}
