//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.7 on page 163
//  A Queue class

class Queue
{ public:
    Queue(int s=100);    // sets the default maximum number at 100
    ~Queue();
    char front() const;  // returns the element at the front
    char back() const;   // returns the element at the back
    bool is_empty() const;
    bool is_full() const;
    void enter(const char&);
    char leave();
  private:
    char* _a;     // the queue itself: a dynamic array of char
    int _max;     // the maximum number of elements on the queue
    int _front;   // the location of the next element to leave
    int _back;    // the location for the next element to enter
};

Queue::Queue(int m) : _max(m), _front(0), _back(0)
{ _a = new char[_max];
  assert(_a != 0);
}

Queue::~Queue()
{ delete [] _a;
}

char Queue::front() const
{ assert (_back > _front);
  return _a[_front];
}

char Queue::back() const
{ assert (_back > _front);
  return _a[_back-1];
}

bool Queue::is_empty() const
{ return bool(_back == _front);
}

bool Queue::is_full() const
{ return bool(_back == _max);
}

void Queue::enter(const char& item)
{ assert(_back < _max);
  _a[_back++] = item;
}

char Queue::leave()
{ assert(_front < _back);
  return _a[_front++];
}
