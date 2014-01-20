//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.36 on page 302

int height(CBT& x)
{ int max=0, depth_it;
  for (CBTI it(x); !!it; ++it)
  { depth_it = depth(it);
    if (depth_it > max) max = depth_it;
  }
  return max;
}
