//  Problem 4.17, page 79
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

float mean(float x, float y, float z);
//  Returns the mean average of x, y, and z.
//  EXAMPLE: mean(4, 7, 4) returns 5.0;

int main()
{ cout << "mean(4, 4, 4) = " << mean(4, 4, 4) << endl;
  cout << "mean(4, 4, 7) = " << mean(4, 4, 7) << endl;
  cout << "mean(4, 7, 4) = " << mean(4, 7, 4) << endl;
  cout << "mean(7, 4, 4) = " << mean(7, 4, 4) << endl;
  cout << "mean(4, 7, 3) = " << mean(4, 7, 3) << endl;
  cout << "mean(4, 3, 7) = " << mean(4, 3, 7) << endl;
  cout << "mean(3, 4, 7) = " << mean(3, 4, 7) << endl;
  cout << "mean(3, 7, 4) = " << mean(3, 7, 4) << endl;
  cout << "mean(7, 3, 4) = " << mean(7, 3, 4) << endl;
  cout << "mean(7, 4, 3) = " << mean(7, 4, 3) << endl;
}

float mean(float x, float y, float z)
{ return (x + y + z)/3;
}
