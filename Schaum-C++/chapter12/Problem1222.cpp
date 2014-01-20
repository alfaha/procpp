//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.22 on page 300

bool operator!()
{ return bool(_k < 1 || _k > _p->_size);
}
