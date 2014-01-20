//  Example 3.25, page 53
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int product=1, factor, count=0;
  cout << "Enter factors. Terminate with 0: ";
  for (;;)
  { cin >> factor;
    if (factor == 0) break;
    product *= factor;
    ++count;
  }
  cout << "The product of the " << count << " factors is " 
       << product << endl;
}
