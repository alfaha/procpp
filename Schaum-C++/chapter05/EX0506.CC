//  Example 5.6, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ double list[6] = {101.01, 202.02, 303.03, 404.04, 505.05, 606.06};
  for (int i=0; i<1000; i++)
    cout << list[i] << endl;
  return 0;
}
