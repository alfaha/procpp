//  Problem 2.14b, page 40
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ int h = 1;
  int c = 52;
  int n = 1;
  h *= c;
  h /= n;
  cout << c-- << '\t' << n++ << '\t' << h << endl;
  h *= c;
  h /= n;
  cout << c-- << '\t' << n++ << '\t' << h << endl;
  h *= c;
  h /= n;
  cout << c-- << '\t' << n++ << '\t' << h << endl;
  h *= c;
  h /= n;
  cout << c-- << '\t' << n++ << '\t' << h << endl;
  h *= c;
  h /= n;
  cout << c-- << '\t' << n++ << '\t' << h << endl;
  h *= c;
  h /= n;
  cout << c-- << '\t' << n++ << '\t' << h << endl;
  h *= c;
  h /= n;
  cout << c-- << '\t' << n++ << '\t' << h << endl;
}
