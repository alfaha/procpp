//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.24 on page 176
//  A Deque class

class Deque
{ public:
    Deque(int s=100);    // sets the default maximum number at 100
    ~Deque() { delete [] _a; }
    char left() const { return _a[0]; }
    char right() const { return _a[_max-1]; }
    bool is_empty() const;
    bool is_full() const { return bool(_left == _right-1); }
    void enter_left(const char&);
    void enter_right(const char&);
    char leave_left();
    char leave_right();
  private:
    char* _a;    // the Deque itself: a dynamic array of char
    int _max;    // the maximum number of elements on the Deque
    int _left;   // the next available element of the left
    int _right;  // the next available element of the left
};

Deque::Deque(int m) : _max(m), _left(0), _right(m-1)
{ _a = new char[_max];
  assert(_a != 0);
}

inline bool Deque::is_empty() const
{ return bool(_left == 0 && _right == _max-1);
}

void Deque::enter_left(const char& item)
{ assert(_left != _right-1);
  for (int i=_left; i>0; i--)
    _a[i] = _a[i-1];  // shift all the left elements right
  ++_left;
  _a[0] = item;
}

void Deque::enter_right(const char& item)
{ assert(_left != _right-1);
  for (int i=_right; i < _max-1; i++)
    _a[i] = _a[i+1];  // shift all the right elements left
  --_right;
  _a[_max-1] = item;
}

char Deque::leave_left()
{ assert(_left > 0);
  char temp = _a[0];
  for (int i=0; i < _left-1; i++)
    _a[i] = _a[i+1];  // shift all the left elements left
  --_left;
  return temp;
}

char Deque::leave_right()
{ assert(_right < _max-1);
  char temp = _a[_max-1];
  for (int i=_max-1; i > _right+1; i--)
    _a[i] = _a[i-1];  // shift all the right elements right
  ++_right;
  return temp;
}
