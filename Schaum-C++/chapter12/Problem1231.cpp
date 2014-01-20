//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.31 on page 301

int _start(int size) 
// returns number of start node:
{ if (_order == PRE || _order == LEVEL) return 1;
  else return last_power(size);
}
