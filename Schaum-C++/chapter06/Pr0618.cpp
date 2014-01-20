//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.18 on page 133

#include <iostream>
using namespace std;

string Roman(int n);
//  Returns the Roman numeral equivalent to the Hindu-Arabic
//  numeral n.
//  PRECONDITIONS: n > 0, n < 3888
//  EXAMPLES: Roman(1776) returns "MDCCLXXVI",
//    Roman(1812) returns "MDCCCXII", Roman(1945) returns "MCMXLV"

int main()
{ cout << "\tRoman(632) = " << Roman(632) << endl;
  cout << "\tRoman(1066) = " << Roman(1066) << endl;
  cout << "\tRoman(1776) = " << Roman(1776) << endl;
  cout << "\tRoman(1789) = " << Roman(1789) << endl;
  cout << "\tRoman(1812) = " << Roman(1812) << endl;
  cout << "\tRoman(1945) = " << Roman(1945) << endl;
  cout << "\tRoman(1998) = " << Roman(1998) << endl;
}

string Roman(int n)
{ int d3 = n/1000;  // the thousands digit
  string s(d3, 'M');
  n %= 1000;
  int d2 = n/100;  // the hundreds digit
  if (d2 == 9) s += "CM";
  else if (d2 >= 5)
  { s += "D";
    s += string(d2-5, 'C');
  }
  else if (d2 == 4) s += "CD";
  else s += string(d2, 'X');
  n %= 100;
  int d1 = n/10;  // the tens digit
  if (d1 == 9) s += "XC";
  else if (d1 >= 5)
  { s += "L";
    s += string(d1-5, 'X');
  }
  else if (d1 == 4) s += "XL";
  else s += string(d1, 'X');
  n %= 10;
  int d0 = n/1;  // the ones digit
  if (d0 == 9) s += "IX";
  else if (d0 >= 5)
  { s += "V";
    s += string(d0-5, 'I');
  }
  else if (d0 == 4) s += "IV";
  else s += string(d0, 'I');
  return s;
}
