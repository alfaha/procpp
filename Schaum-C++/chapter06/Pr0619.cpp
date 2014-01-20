//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.19 on page 134

#include <iostream>
using namespace std;

int HindArabic(string s);
//  Returns the Hindu-Arabic numeral equivalent to the Roman
//  numeral given in the string s.
//  PRECONDITIONS: s contains a valid Roman numeral
//  EXAMPLES: HindArabic("MDCCLXXVI") returns 1776,
//    HindArabic("MDCCCXII") returns 1812

int main()
{ cout << "\tHindArabic(\"DCXXXII\") =    "
       <<    HindArabic("DCXXXII") << endl;
  cout << "\tHindArabic(\"MLXVI\") =      "
       <<    HindArabic("MLXVI") << endl;
  cout << "\tHindArabic(\"MDCCLXXVI\") =  "
       <<    HindArabic("MDCCLXXVI") << endl;
  cout << "\tHindArabic(\"MDCCLXXXIX\") = "
       <<    HindArabic("MDCCLXXXIX") << endl;
  cout << "\tHindArabic(\"MDCCCXII\") =   "
       <<    HindArabic("MDCCCXII") << endl;
  cout << "\tHindArabic(\"MCMXCVIII\") =  "
       <<    HindArabic("MCMXCVIII") << endl;
}

int v(string s, int i)
{ char c = s[i];
  if (c == 'M') return 1000;
  if (c == 'D') return 500;
  if (c == 'C') return 100;
  if (c == 'L') return 50;
  if (c == 'X') return 10;
  if (c == 'V') return 5;
  if (c == 'I') return 1;
  return 0;
}

int HindArabic(string s)
{ int n = v(s,0);
  int len = s.length();
  for (int i=1; i<len; i++)
    if (v(s,i) <= v(s,i-1)) n += v(s,i);
    else n -= 2*v(s,i-1);
  return n;
}
