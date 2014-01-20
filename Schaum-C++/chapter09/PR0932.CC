//  Problem 9.32, page 209
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

List::Iterator find(List::Iterator& pos1, List::Iterator& pos2, T& t)
{ for (List::Iterator it = pos1; it != pos2; ++it)
     if (*it == t) return it;
  return pos2;
}

int main()
{ List x;
  append(x, "ABCDEFGABCDEFG");
  print(x);
  List::Iterator it = x.begin();
  List::Iterator jt = x.end();
  cout << "*it = " << *it << endl;
  it = find(it, jt, 'D');
  cout << "*it = " << *it << endl;
  ++it;
  cout << "*it = " << *it << endl;
  it = find(it, jt, 'D');
  cout << "*it = " << *it << endl;
  ++it;
  cout << "*it = " << *it << endl;
  it = find(it, jt, 'D');
  cout << "*it = " << *it << endl;
  ++it;
  cout << "*it = " << *it << endl;
}
