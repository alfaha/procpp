//  Problem 2.19, page 41
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ float fahrenheit, celsius;
  cout << "Input temperature in degrees Fahrenheit: ";
  cin >> fahrenheit;
  celsius = 5.0*(fahrenheit - 32.0)/9.0;
  cout << fahrenheit << " degrees Fahrenheit = "
       << celsius << " degrees Celsius\n";
}
