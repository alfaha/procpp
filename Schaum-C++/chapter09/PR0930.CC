//  Problem 9.30, page 209
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

List intersection(List& x, List& y)
{ List z;
  List xx = x;
  xx.remove_all_duplicates();
  for (List::Iterator it = xx.begin(); it != xx.end(); ++it)
    for (List::Iterator jt = y.begin(); jt != y.end(); ++jt)
      if (*it == *jt)
      { z.push_back(*it);
        break;
      }
  return z;
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  List y;
  append(y, "ADGJMP");
  print(y);
  List z = intersection(x, y);
  print(x);
  print(y);
  print(z);
}
