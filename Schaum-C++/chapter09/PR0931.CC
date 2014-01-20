//  Problem 9.31, page 209
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

List complement(List& x, List& y)
{ List z = x;
  z.remove_all_duplicates();
  for (List::Iterator it = y.begin(); it != y.end(); ++it)
     z.remove(*it);
  return z;
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  List y;
  append(y, "ADGJMP");
  print(y);
  List z = complement(x, y);
  print(x);
  print(y);
  print(z);
}
