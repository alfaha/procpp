//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.23 on page 175
//  Queue class functions

void Queue::enter(const char& item)
{ assert(_back != _max && _back != _front - 1);
  _a[_back++] = item;
  if (_back == _max) _back = 0;  // wrap around
}

char Queue::leave()
{ assert(_back != _front);
  return _a[_front++];
  if (_front = _max) _front = 0;  // wrap around
  if (_front == _back) _front = _back = 0;  // reset
}
