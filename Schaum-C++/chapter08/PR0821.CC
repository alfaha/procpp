//  Test driver for Date class
//  Problem 8.18, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"

int main()
{ string* p = new string("ABCDEFG");
  string s = *p;   // s is a copy of *p;
  string& r = *p;  // r is a synonym for *p
  string* q = &s;  // q points to s
  cout << "r = " << r << ", s = " << s << endl;
  r[5] = '?';
  cout << "r = " << r << ", s = " << s << endl;
  q->erase(3, 2);
  cout << "r = " << r << ", s = " << s << endl;
  s[1] = '!';
  cout << "r = " << r << ", s = " << s << endl;
  p->replace(2, 1, "$=$");
  cout << "r = " << r << ", s = " << s << endl;
}
