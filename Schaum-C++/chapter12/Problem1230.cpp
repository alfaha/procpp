//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.30 on page 301

Iterator left_child()
{ CBTI it(*_p);
  it._k = 2*_k;
  return it;
}
