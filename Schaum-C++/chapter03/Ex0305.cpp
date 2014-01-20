//  Example 3.5, page 45
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

namespace X
{ int x = 22;
}

namespace Y
{ int y = 33;
  namespace Z
  { int z = 44;
  }
}

int main()
{ int x = 55;
  cout << X::x << " " << Y::Z::z << " " << x << endl;
  using namespace Y;                // after this, Y:: can be omitted
  cout << y << " " << Z::z << endl;
}
