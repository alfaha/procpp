//  Example 5.14, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

void swap(float& x, float& y)
{ float temp = x;
  x = y;
  y = temp;
}

void reverse(float a[], int n)
{ for (int i=0; i < n/2; i++)
    swap(a[i], a[n-i-1]);
}

void print(float a[], int n)
{ for (int i=0; i<n; i++)
    cout << a[i] << " ";
  cout << endl; 
}

int main()
{ float a[4] = {2.2, 4.4, 6.6, 8.8};
  print(a, 4);
  reverse(a, 4);
  print(a, 4);
  float b[5] = {1.1, 3.3, 5.5, 7.7, 9.9};
  print(b, 5);
  reverse(b, 5);
  print(b, 5);  
  return 0;
}
