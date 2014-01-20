//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.34 on page 302

int leaves(CBT& x)
{ int count=0;
  for (CBTI it = x.preorder(); it != x.end(); ++it)
    if (it.is_leaf()) ++count;
  return count;
}
