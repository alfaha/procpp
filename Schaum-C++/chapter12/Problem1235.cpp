//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.35 on page 302

int depth(CBTI& it)
{ if (it.is_root()) return 0;
  return 1 + depth(it.parent());
}
