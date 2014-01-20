//  Problem 11.18, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>

void print_binary(int n)
{ if (n >= 2) print_binary(n/2);
  cout << n%2;
}

int main()
{ for (int i=0; i<64; i += 3)
  { cout << "\n\t" << i << "\t";
    print_binary(i);
  }
  cout << endl;
}
