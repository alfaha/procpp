//  Problem 11.20, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

char hex(int n)
{ assert(n >= 0 && n < 16);
  if (n < 10) return char('0' + n);
  else return char('a' + n - 10);
}

void print_hexadecimal(int n)
{ if (n >= 16) print_hexadecimal(n/16);
  cout << hex(n%16);
}

int main()
{ for (int i=0; i<64; i += 3)
  { cout << "\t" << i << "\t";
    print_hexadecimal(i);
    cout << "\n\t\t" << hex << i << dec << endl;
  }
}
