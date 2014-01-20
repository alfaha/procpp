//  Problem 3.26, page 64
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n;
  cout << "How many lines? (1-40): ";
  cin >> n;
  for (int i=0; i<n; i++)           // i = number of lines printed
  { for (int j=1; j <= 2*n; j++)    // j = current column number
      cout << (i > 0 && i < n-1 && j > 1 && j < 2*n ? ' ' : '*');
    cout << endl;
  }
}
