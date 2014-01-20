//  Problem 11.19, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

void print_octal(int n)
{ if (n >= 8) print_octal(n/8);
  cout << n%8;
}

int main()
{ for (int i=0; i<64; i += 3)
  { cout << "\t" << i << "\t";
    print_octal(i);
    cout << "\n\t\t" << oct << i << dec << endl;
  }
}
