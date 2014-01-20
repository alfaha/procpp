//  Problem 2.21, page 42
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ int hours, days, weeks;
  cout << "Enter number of hours: ";
  cin >> hours;
  cout << hours << " hours = ";
  days = hours/24;
  hours %= 24;
  weeks = days/7;
  days %= 7;
  cout << weeks << " weeks, " << days << " days, and "
       << hours << " hours.\n";
}
