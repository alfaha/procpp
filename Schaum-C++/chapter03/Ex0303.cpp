//  Example 3.3, page 44
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

//  This will not compile under CodeWarrior 3.0

#include <iostream.h>

int main()
{ namespace Block1
  { int x = 44;
    cout << x << endl;        // prints 44
  }
  namespace Block2
  { int x = 66;
    cout << x << endl;        // prints 66
  }
  cout << Block1::x << endl;  // prints 44
  cout << Block2::x << endl;  // prints 66
}