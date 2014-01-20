//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.21 on page 134

#include <cassert>
#include <iostream>
using namespace std;

int decimal(string s);
//  Returns the decimal numeral that represents the hexadecimal
//  numeral stored in the string s.
//  PRECONDITION: s.length() > 0 and each s[i] is a hexadecimal digit
//  POSTCONDITION: the returns value is the decimal equivalent
//  EXAMPLE: decimal("2d7b") returns 11643

int main()
{ for (char c='a'; c < 'f'; c++)
    cout << "\tdecimal(" << c << ") = "
         << decimal(string(1,c)) << endl;
  cout << "\tdecimal(\"fe\") = " << decimal("fe") << endl;
  cout << "\tdecimal(\"ff\") = " << decimal("ff") << endl;
  cout << "\tdecimal(\"100\") = " << decimal("100") << endl;
  cout << "\tdecimal(\"2d7b\") = " << decimal("2d7b") << endl;
  string s;
  while (cin >> s)
    cout << "\tdecimal(" << s << ") = "
         << " = " << decimal(s) << endl;
}

int v(string s, int i)
{ char c = s[i];
  assert(c >= '0' && c <= '9' || c >= 'a' && c <= 'f');
  if (c >= '0' && c <= '9') return int(c - '0');
  else return int(c - 'a' + 10);
}

int decimal(string s)
{ int len = s.length();
  assert(len > 0);
  int n=0;
  for (int i=0; i<len; i++)
    n = 16*n + v(s,i);
  return n;
}
