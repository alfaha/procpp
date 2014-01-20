//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.15 on page 132

#include <iostream>
using namespace std;

void reduce(string& s);
// Changes all capital letters in s to lower case
// and removes all non-letters from the beginning and end.
// EXAMPLE: if s == "'Tis,", then reduce(s) makes it "tis"

int main()
{ string s = "!!!!ABcdEfGh::&";
  cout << "s = " << s << endl;
  reduce(s);
  cout << "s = " << s << endl;
}

bool is_upper(char c)
{ return bool(c >= 'A' && c <= 'Z');
} 

bool is_lower(char c)
{ return bool(c >= 'a' && c <= 'z');
} 

bool is_letter(char c)
{ return bool(is_upper(c) || is_lower(c));
} 

void reduce(string& s)
{ while (s.length() > 0 && !is_letter(s[0]))
    s.erase(0, 1);
  int k = s.length() - 1;
  while (k > 0 && !is_letter(s[k--]))
    s.erase(k+1, 1);
  int len = s.length();
  if (len == 0) return;
  for (int i=0; i<len; i++)
    if (is_upper(s[i])) s[i] += 'a' - 'A';
}
