//  Problem 4.18, page 79
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

float min(float x, float y, float z);
//  Returns the smallest of x, y, and z.
//  EXAMPLE: min(4, 7, 4) returns 4.0;

int main()
{ cout << "min(4, 4, 4) = " << min(4, 4, 4) << endl;
  cout << "min(4, 4, 7) = " << min(4, 4, 7) << endl;
  cout << "min(4, 7, 4) = " << min(4, 7, 4) << endl;
  cout << "min(7, 4, 4) = " << min(7, 4, 4) << endl;
  cout << "min(4, 7, 3) = " << min(4, 7, 3) << endl;
  cout << "min(4, 3, 7) = " << min(4, 3, 7) << endl;
  cout << "min(3, 4, 7) = " << min(3, 4, 7) << endl;
  cout << "min(3, 7, 4) = " << min(3, 7, 4) << endl;
  cout << "min(7, 3, 4) = " << min(7, 3, 4) << endl;
  cout << "min(7, 4, 3) = " << min(7, 4, 3) << endl;
}

float min(float x, float y, float z)
{ if (x < y) y = x;
  if (y < z) z = y;
  return z;
}
