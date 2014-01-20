//  Example 7.01b, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

void swap(int& x, int& y)
{ int t = x;
  x = y;
  y = t;
}

void sort(int& x, int& y, int& z)
{ if (y < x) swap(x, y);
  if (z < y) swap(y, z);
  if (y < x) swap(x, y);
}
