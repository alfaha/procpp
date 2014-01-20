//  Test driver for Date class
//  Problem 9.13, page 206
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

//////////////////////////////////////////////////////////////////////
//    CLASS: List
//     FILE: ~/books/FOCWCPP/source/UNIX/chap09/List.h
//  PURPOSE: complete definition for a List class
//   AUTHOR: John R. Hubbard
//     DATE: Mon Nov 3 1997
//  REVISED: Tue Feb 10 1998
//////////////////////////////////////////////////////////////////////
//  Implementation: non-template
//                  doubly-linked circular list with dummy node
//////////////////////////////////////////////////////////////////////

#ifndef LIST
#define LIST

#include <assert.h>
#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

typedef char T;

class List
{ private:
    struct Node
    { friend class Iterator;
      Node(T data=0, Node* prev=0, Node* next=0) : _data(data)
        { _prev = (prev ? prev : this); _next = (next ? next: this); }
      T _data;
      Node* _prev;
      Node* _next;
    };
  public:
    class Iterator
    {   friend class List;
      public:
        Iterator(Node* p) : _p(p) { }
        bool operator!() const { return bool(!_p || !_p->_data); }
        T& operator*() const { return _p->_data; }
        Iterator& operator++() { _p = _p->_next; return *this; }
        Iterator& operator--() { _p =_p->_prev; return *this; }
        Iterator& operator=(const Iterator& it)
          { _p = it._p; return *this; }
        friend bool operator==(const Iterator& it, const Iterator& jt)
          { return bool(it._p == jt._p); }
        friend bool operator!=(const Iterator& it, const Iterator& jt)
          { return bool(it._p != jt._p); }
      private:
        Node* _p;  // points to list node
    };
  public:
    List() : _size(0) { _dum = new Node(); }
    List(const List&);
    ~List() { clear(); }
    List& operator=(const List&);
    int size() const { return _size; }
    bool empty() const { return bool(_size == 0); }
    T& front() const { return _dum->_next->_data; }
    T& back() const { return _dum->_prev->_data; }
    void push_front(const T&);
    void push_back(const T&);
    void pop_front();
    void pop_back();   
    Iterator begin() { return Iterator(_dum->_next); }
    Iterator end() { return Iterator(_dum); }
    Iterator insert(Iterator&, const T&);
    void erase(Iterator&);
    void remove(const T&);
    void clear();
  private:
    Node* _dum;
    int _size;
};

List::List(const List& x) : _size(x._size)
{ _dum = new Node();
  if (x._size == 0) return;
  Node* p = x._dum->_next;
  Node* q = _dum->_prev = _dum->_next = new Node(p->_data, _dum,_dum);
  for (int i=1; i<_size; i++)
  { p = p->_next;
    q = q->_next = _dum->_prev = new Node(p->_data, q, _dum);
    assert(q);
  }
}

List& List::operator=(const List& x)
{ clear();
  _size = x._size;
  _dum = new Node();
  if (x._size == 0) return *this;
  Node* p = x._dum->_next;
  Node* q = _dum->_prev = _dum->_next = new Node(p->_data, _dum,_dum);
  for (int i=1; i<_size; i++)
  { p = p->_next;
    q = q->_next = _dum->_prev = new Node(p->_data, q, _dum);
    assert(q);
  }
  return *this;
}

void List::push_front(const T& t)
{ if (_size == 0) _dum->_next = _dum->_prev = new Node(t, _dum, _dum);
  else _dum->_next = _dum->_next->_prev = new Node(t, _dum, _dum->_next);
  ++_size;
}

void List::push_back(const T& t)
{ if (_size == 0) _dum->_next = _dum->_prev = new Node(t, _dum, _dum);
  else _dum->_prev = _dum->_prev->_next = new Node(t, _dum->_prev, _dum);
  ++_size;
}

void List::pop_front()
{ if (_size == 0) return;
  Node* p = _dum->_next;
  _dum->_next->_next->_prev = _dum;
  _dum->_next = _dum->_next->_next;
  delete p;
  --_size;
}

void List::pop_back()
{ if (_size == 0) return;
  Node* p = _dum->_prev;
  _dum->_prev->_prev->_next = _dum;
  _dum->_prev = _dum->_prev->_prev;
  delete p;
  --_size;
}

Iterator List::insert(Iterator& pos, const T& t)
{ if (!pos || _size == 0) return pos;
  Node* p = pos._p;
  pos._p = p->_prev = p->_prev->_next = new Node(t, p->_prev, p);
  ++_size;
  return pos;
}

void List::erase(Iterator& pos)
{ if (!pos || _size == 0) return;
  Node* p = pos._p;
  p->_prev->_next = p->_next;
  p->_next->_prev = p->_prev;
  pos._p = 0;
  delete p;
  --_size;
}

void List::remove(const T& t)
{ Node* p_next;
  for (Node* p=_dum->_next; p != _dum; p = p_next)
  { p_next = p->_next;
    if (p->_data == t)
    { p->_prev->_next = p->_next;
      p->_next->_prev = p->_prev;
      delete p;
      --_size;
    }
  }
}

void List::clear()
{ Node* p_next;
  for (Node* p=_dum->_next; p != _dum; p = p_next)
  { p_next = p->_prev->_next = p->_next;
    p->_next->_prev = p->_prev;
    delete p;
  }
  _size = 0;
}

#endif

void print(List& x)
{ if (x.empty()) cout << "\tThe list is empty.\n";
  else
  { cout << "\tfront = " << x.front()
         << ", back = " << x.back()
         << ", size = " << x.size() << ":\t";
    for (List::Iterator it = x.begin(); it != x.end(); ++it)
      cout << *it << " ";
    cout << endl;
  }
}

int main()
{ List x;
  cout << "Testing list x:\n";
  x.push_front('C');
  print(x);
  x.push_front('B');
  print(x);
  x.push_front('A');
  print(x);
  x.push_front('X');
  print(x);
  x.push_back('D');
  print(x);
  x.push_back('E');
  print(x);
  x.push_back('F');
  print(x);
  x.pop_front();
  print(x);
  x.pop_back();
  print(x);
  List y = x;  // test copy constructor
  cout << "Testing list y (same as x?):\n";
  print(y);
  x.clear();
  cout << "Testing list x (empty?):\n";
  print(x);
  x = y;       // test assignment operator
  cout << "Testing list x (same as y?):\n";
  print(x);
  List::Iterator it = x.begin();
  ++it;
  ++it;
  x.insert(it, 'X');
  cout << "After inserting 'X' in front of 'C':\n";
  print(x);
  it = x.end();
  List::Iterator jt = x.insert(it, 'Z');
  cout << "After inserting 'Z' in front of x.end():\n";
  print(x);
  x.insert(jt, 'Y');
  cout << "After inserting 'Y' in front of 'Z':\n";
  print(x);
  --jt;
  --jt;
  x.erase(jt);
  cout << "After erasing 'D':\n";
  print(x);
  x.remove('X');
  cout << "After removing 'X':\n";
  print(x);  
}
