//  Example 2.18, page 33
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <cmath>                 // use <math.h> in pre-Standard C++
#include <iostream>          // use <iostream.h> in pre-Standard C++

using namespace std;                     // omit in pre-Standard C++

int main()
{ double x = 2.718281828459045;
  cout << "ceil(x)     = " << ceil(x) << endl;
  cout << "floor(x)    = " << floor(x) << endl;
  cout << "sqrt(x)     = " << sqrt(x) << endl;
  cout << "pow(x, 0.5) = " << pow(x, 0.5) << endl;
  cout << "log(x)      = " << log(x) << endl;
  cout << "log10(x)    = " << log10(x) << endl;
  cout << "exp(x)      = " << exp(x) << endl;
  cout << "sin(x)      = " << sin(x) << endl;
}
