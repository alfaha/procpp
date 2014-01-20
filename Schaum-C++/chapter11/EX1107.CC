//  Example 11.7, page 252
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int find(float* a, int start, int stop, float x)
{ if (start > stop) return -1;
  int mid = (start + stop)/2;
cout << "start = " << start << ", stop = " << stop << ", mid = "
     << mid << endl;
  if (x == a[mid]) return mid;
  if (x < a[mid]) return find(a, start, mid-1, x);
  if (x > a[mid]) return find(a, mid+1, stop, x);
}

int main()
{ float a[] = { 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9 };
  int k = find(a, 0, 8, 77.7);
  cout << "k = " << k << endl;
  k = find(a, 0, 8, 99.9);
  cout << "k = " << k << endl;
  k = find(a, 0, 8, 22.2);
  cout << "k = " << k << endl;
  k = find(a, 0, 8, 50.0);
  cout << "k = " << k << endl;
}
