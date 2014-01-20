//  Problem 2.20, page 41
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ float celsius, fahrenheit;
  cout << "Input temperature in degrees Celsius: ";
  cin >> celsius;
  fahrenheit = 1.8*celsius + 32.0;
  cout << celsius << " degrees Celsius = "
       << fahrenheit << " degrees Fahrenheit\n";
}
