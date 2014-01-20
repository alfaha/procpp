//  Example 5.13, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

void swap(float& x, float& y)
{ float temp = x;
  x = y;
  y = temp;
}

void sort(float a[], int n)
{ for (int i=1; i < n; i++)
    for (int j=1; j <= n-i; j++)
      if (a[j-1] > a[j]) swap(a[j-1], a[j]);
}

void print(float a[], int n)
{ for (int i=0; i<n; i++)
    cout << a[i] << " ";
  cout << endl; 
}

int main()
{ float num[8] = { 6.6, 4.4, 8.8, 2.2, 5.5, 7.7, 9.9, 3.3 };
  print(num, 8);
  sort(num, 8);
  print(num, 8);
  return 0;
}
