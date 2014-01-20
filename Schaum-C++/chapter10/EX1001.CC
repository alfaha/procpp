//  Example 10.1, page 221
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"

template <class T>
void swap(T& x, T& y)
{ T temp = x;
  x = y;
  y = temp;
}

int main()
{ int m=22, n=44;
  cout << "m = " << m << ", n = " << n << endl;
  swap(m, n);
  cout << "m = " << m << ", n = " << n << endl;
  string r="Washington", s="Jefferson";
  cout << "r = " << r << ", s = " << s << endl;
  swap(r, s);
  cout << "r = " << r << ", s = " << s << endl;
}
