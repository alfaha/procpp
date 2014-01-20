//  Problem 4.26, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

float centimeters(float x);
//  Returns the number of centimeters in x inches. 
//  PRECONDITION: x > 0
//  POSTCONDITION: the returned value y == 2.54*x
//  EXAMPLE: centimeters(200) returns 508.0

int main()
{ cout << "centimeters(200) = " << centimeters(200) << endl;
  cout << "centimeters(10) =  " << centimeters(10) << endl;
  cout << "centimeters(0) =   " << centimeters(0) << endl;
}

float centimeters(float x)
{ assert(x > 0);
  return 2.54*x;
}
