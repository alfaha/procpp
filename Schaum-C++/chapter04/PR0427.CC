//  Problem 4.27, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

float celsius(float x);
//  Returns the temperature in Celsius degrees for a given
//  temperature in in Farenheit degrees. 
//  PRECONDITION: x >= -273.0
//  POSTCONDITION: the returned value y == 5*(x - 32)/9
//  EXAMPLE: celsius(68) returns 20.0

int main()
{ cout << "celsius(68) =   " << celsius(68) << endl;
  cout << "celsius(32) =   " << celsius(32) << endl;
  cout << "celsius(212) =  " << celsius(212) << endl;
  cout << "celsius(98.6) = " << celsius(98.6) << endl;
  cout << "celsius(-273) = " << celsius(-273) << endl;
}

float celsius(float x)
{ assert(x >= -273.0);
  return 5.0*(x - 32.0)/9.0;
}
