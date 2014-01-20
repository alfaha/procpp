//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.20 on page 134

#include <cassert>
#include <iostream>
using namespace std;

string hexadecimal(int n);
//  Returns the hexadecimal numeral that represents n.
//  PRECONDITION: n >= 0
//  POSTCONDITION: each character in the returned string is a
//    hexadecimal digit and that string is the dexadecimal
//    equivalent of n
//  EXAMPLE: hexadecimal(11643) returns "2d7b"

int main()
{ for (int n=0; n<20; n++)
    cout << "\thexadecimal(" << n << ") = "
         << hexadecimal(n) << endl;
  cout << "\thexadecimal(254) = " << hexadecimal(254) << endl;
  cout << "\thexadecimal(255) = " << hexadecimal(255) << endl;
  cout << "\thexadecimal(256) = " << hexadecimal(256) << endl;
  cout << "\thexadecimal(11643) = " << hexadecimal(11643) << endl;
  while (n > 0)
  { cin >> n;
    cout << "\thexadecimal(" << n << ") = " << hex << n << dec
         << " = " << hexadecimal(n) << endl;
  }  
}

char c(int k)
{ assert(k >= 0 && k <= 15);
  if (k < 10) return char(k + '0');
  return char(k - 10 + 'a');
}

string hexadecimal(int n)
{ if (n == 0) return string(1, '0');
  string s;
  while (n > 0)
  { s = string(1, c(n%16)) + s;
    n /= 16;
  }
  return s;
}
