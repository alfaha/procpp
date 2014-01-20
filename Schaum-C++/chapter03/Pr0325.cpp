//  Problem 3.25, page 64
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n;
  cout << "How many lines? (1-40): ";
  cin >> n;
  for (int i=0; i<n; i++)           // i = number of lines printed
  { for (int j=1; j <= n + i; j++)    // j = current column number
      cout << (j < n - i ? ' ' : '*');   // print n - i - 1 blanks
    cout << endl;
  }
}
