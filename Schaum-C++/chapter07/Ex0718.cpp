//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.18 on page 154
//  A Stack class

class Stack
{ public:
    Stack(int s=100);    // sets the default maximum number at 100
    ~Stack();
    char top() const;
    bool is_empty() const;
    bool is_full() const;
    void push(const char);
    char pop();
  private:
    char* _a;     // the stack itself: a dynamic array of char
    int _max;     // the maximum number of elements on the stack
    int _count;   // the number of elements on the stack
};

Stack::Stack(int m) : _max(m), _count(0)
{ _a = new char[_max];
  assert(_a != 0);
}

Stack::~Stack()
{ delete [] _a;
}

char Stack::top() const
{ assert (_count > 0);
  return _a[_count-1];
}

bool Stack::is_empty() const
{ return bool(_count == 0);
}

bool Stack::is_full() const
{ return bool(_count == _max);
}

void Stack::push(const char x)
{ assert(_count < _max);
  _a[_count++] = x;
}

char Stack::pop()
{ assert(_count > 0);
  return _a[--_count];
}
