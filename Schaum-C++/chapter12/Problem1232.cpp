//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.32 on page 301

void CBTI::operator++()
{ if (_order == PRE)
  { if (size+1 == 2*last_power (size)
    || (_k >= last_power (size)  && _k < size))
    { if (_k == size) return 0;        // last is youngest daughter
      if (2*_k <= size) return 2*_k;   // interior node returns son
      ++_k;                            // male leaf's sister
      while (_k%2 == 0)                // while male
        _k /= 2;                       //   move to parent
    }
    else               // tree is not full
    { if (_k == last_power (size) - 1) return 0;
      if (_k >= last_power (size) && _k%2 == 0)
      { _k += 2;
        while (_k%2 == 0)               // while male
          _k /= 2;                      //   move to parent
      }
      else
      { if (_k == size) return 0;       // last is youngest daughter
        if (2*_k <= size) return 2*_k;  // interior node returns son
        ++_k;                           // male leaf's sister
        while (_k%2 == 0)               // while male
          _k /= 2;                      //   move to parent
      }
    }
  else if (_order == IN)
  { if (size+1 == 2*last_power (size))  // tree is full
    { if (_k == size) return 0;         // last is youngest daughter
      if (2*_k <= size)                 // interior node:
      { _k = 2*_k + 1;                  // move to daughter
        while (2*_k <= size)            // while not a leaf
          _k *= 2;                      //   move to son
      }                                 //   male leaf descendant
      if (_k%2 == 0) return _k/2;       // male leaves return parent
      ++_k;                             // move to male cousin
      while (_k%2 == 0)                 // while male
        _k /= 2;                        //   move to parent
      _k /= 2;                          // return aunt
    }
    else    // tree is not full
    { if (_k == last_power (size) - 1) return 0;
      if (_k >= size/2 && _k < last_power (size))
      { ++_k;                            // move to male cousin
        while (_k%2 == 0)                // while male
          _k /= 2;                       //   move to parent
        _k /= 2;                         // return aunt
      }
      else
      { if (_k == size) return _k/2;
        if (2*_k <= size)                // interior node:
        { _k = 2*_k + 1;                 // move to daughter
          while (2*_k <= size)           // while not a leaf
            _k *= 2;                     //   move to son
      }                                  //   male leaf descendant
        if (_k%2 == 0) return _k/2;      // male leaves return parent
        ++_k;                            // move to male cousin
        while (_k%2 == 0)                // while male
          _k /= 2;                       //   move to parent
        _k /= 2;                         // return aunt
      }
    }
  }
  else if (_order == POST)
  { if (size+1 < 2*last_power (size) && _k == size) return _k/2;
    if (_k == 1) return 0;               // last is root
    if (_k%2 == 1) return _k/2;          // return parent of females
    ++_k;                                // move to sister
    if (2*_k > size) return _k;          // return leaf
    while (2*_k <= size)                 // while not a leaf
      _k *= 2;                           //   move to son
  }
  else _k = (_k + 1)%(_p->_size + 1);
}
