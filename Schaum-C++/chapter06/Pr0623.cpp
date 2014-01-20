//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.23 on page 135

#include <iostream>
using namespace std;

bool is_palindrome(string s);
//  Returns true iff s is a palindrome
//  EXAMPLES: is_palindrome("RADAR") returns true,
//    is_palindrome("ABCD") returns false

int main()
{ string s = "A";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
  s = "AB";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
  s = "AA";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
  s = "ABA";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
  s = "RADAR";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
  s = "MADAMIMADAM";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
  s = "ABBACADABRA";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
  s = "wasiteliotstoiletisaw";
  cout << "is_palindrome(" << s << ") = " << is_palindrome(s) << endl;
}

bool is_palindrome(string s)
{ int len = s.length();
  for (int i=0; i<len/2; i++)
    if (s[i] != s[len-i-1]) return false;
  return true;
}
