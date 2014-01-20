//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.22 on page 134

#include <iostream>
using namespace std;

void reverse(string& s);
//  Reverses the string s.
//  POSTCONDITION: s[i] <--> s[len-i-1]
//  EXAMPLE: reverse(s) changes s = "ABCDEFG" into "GFEDCBA"

int main()
{ string s = "ABCDEFG";
  cout << "\ts = " << s << endl;
  reverse(s);
  cout << "\ts = " << s << endl;
  s = "UVWXYZ";
  cout << "\ts = " << s << endl;
  reverse(s);
  cout << "\ts = " << s << endl;
}

void reverse(string& s)
{ string temp = s;
  int len = s.length();
  for (int i=0; i<len; i++)
    s[i] = temp[len-i-1];
}
