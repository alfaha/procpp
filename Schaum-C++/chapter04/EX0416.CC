//  Example 4.16, page 77
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

void swap(int&x, int&y)
{ int temp = x;
  x = y;
  y = temp;
}

void swap(float&x, float&y)
{ float temp = x;
  x = y;
  y = temp;
}

int main()
{ int m=22, n=44;
  cout << "m = " << m << ", n = " << n << endl;
  swap(m, n);
  cout << "m = " << m << ", n = " << n << endl;
  float s=2.2, t=4.4;
  cout << "s = " << s << ", t = " << t << endl;
  swap(s, t);
  cout << "s = " << s << ", t = " << t << endl;
}
