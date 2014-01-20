//  Problem 2.22, page 42
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ int pennies, nickels, dimes, quarters;
  cout << "Enter number of cents: ";
  cin >> pennies;
  cout << pennies << " cents = ";
  quarters = pennies/25;
  pennies %= 25;
  dimes = pennies/10;
  pennies %= 10;
  nickels = pennies/5;
  pennies %= 5;
  cout << quarters << " quarters, " << dimes << " dimes, "
       << nickels << " nickels, and " << pennies << " pennies\n";
}
