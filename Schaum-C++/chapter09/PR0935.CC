//  Problem 9.35, page 209
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

List::Iterator search(List::Iterator& pos1, List::Iterator& pos2,
                      List::Iterator& pos3, List::Iterator& pos4)
{ List::Iterator it=pos1;
  List::Iterator jt=pos1;
  List::Iterator kt=pos3;
  while (it != pos2)
  { jt = it;
    kt = pos3;
    while (jt != pos2 && kt != pos4 && *kt == *jt)
      ++jt, ++kt;
    if (kt == pos4) return it;
    ++it;
  }
  return pos2;
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  List y;
  append(y, "CDEFH");
  print(y);
  List::Iterator it = x.begin();
  List::Iterator jt = x.end();
  List::Iterator kt = y.begin();
  List::Iterator lt = y.end();
  List::Iterator mt = search(it,jt,kt,lt);  // CDEFH is not in ABCDEFG
  cout << "[" << *mt << "]\n";              // output: []
  --lt;
  mt = search(it,jt,kt,lt);                 // CDEF is in ABCDEFG
  cout << "[" << *mt << "]\n";              // output: [C]
  ++kt;
  mt = search(it,jt,kt,lt);                 // DEF is in ABCDEFG
  cout << "[" << *mt << "]\n";              // output: [D]
  --jt;
  --jt;
  mt = search(it,jt,kt,lt);                 // DEF is not in ABCDE
  cout << "[" << *mt << "]\n";              // output: [F]
}
