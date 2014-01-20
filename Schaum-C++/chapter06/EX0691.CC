//  Example 6.1, page 113
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n;
  cin >> n;
  cout << "n = " << n << endl;
  float x;
  cin >> x;
  cout << "x = " << x << endl;
  char c;
  cin >> c;
  cout << "c = [" << c << "]" << endl;
  cout << "int(c) = " << int(c) << endl;
  char s[8];
  cin >> s;
  cout << "s = [" << s << "]" << endl;
}
