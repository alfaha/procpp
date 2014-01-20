//  Problem 2.18, page 41
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ float inches, cm;
  cout << "Input inches: ";
  cin >> inches;
  cm = 2.54*inches;
  cout << inches << " inches = " << cm << " centimeters\n";
}
