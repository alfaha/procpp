//  Problem 9.34, page 209
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

bool equal(List::Iterator& pos1, List::Iterator& pos2,
           List::Iterator& pos3)
{ List::Iterator it = pos1;
  List::Iterator jt = pos3;
  while (it != pos2)
  { if (*it != *jt) return false;
    ++it;
    ++jt;
  }
  return true;
}

int main()
{ List x;
  append(x, "ABCDEFGHI");
  print(x);
  List y;
  append(y, "YCDEFGHZ");
  print(y);
  List::Iterator it = x.begin();
  ++it;
  ++it;
  List::Iterator jt = x.end();
  --jt;
  List::Iterator kt = y.begin();
  if (equal(it, jt, kt)) cout << "equal(it, jt, kt) is true\n";
  else cout << "equal(it, jt, kt) is false\n";
  ++kt;
  if (equal(it, jt, kt)) cout << "equal(it, jt, kt) is true\n";
  else cout << "equal(it, jt, kt) is false\n";
  ++jt;
  if (equal(it, jt, kt)) cout << "equal(it, jt, kt) is true\n";
  else cout << "equal(it, jt, kt) is false\n";
}
