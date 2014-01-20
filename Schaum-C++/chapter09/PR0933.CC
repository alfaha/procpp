//  Problem 9.33, page 209
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void count(List::Iterator& pos1, List::Iterator& pos2, T& t, int& n)
{ n = 0;
  for (List::Iterator it = pos1; it != pos2; ++it)
     if (*it == t) ++n;
}

int main()
{ List x;
  append(x, "ABCDECDEFGDEFBCD");
  print(x);
  List::Iterator it = x.begin();
  List::Iterator jt = x.end();
  int n;
  count(it, jt, 'D', n);
  cout << "n = " << n << endl;
  count(it, jt, 'H', n);
  cout << "n = " << n << endl;
}
