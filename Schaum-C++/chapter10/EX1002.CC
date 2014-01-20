//  Example 10.2, page 222
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"

template <class T>
class Stack
{ public:
    Stack(int m=100) : _max(m), _count(0) { _a = new T[_max]; }
    ~Stack() { delete [] _a; }
    T top() const { return _a[_count-1]; }
    bool is_empty() const { return bool(_count == 0); }
    bool is_full() const { return bool(_count == _max); }
    void push(const T t) { _a[_count++] = t; }
    T pop() { return _a[--_count]; }
  private:
    T* _a;       // a dynamic array of elements of type T
    int _max;    // the maximum number of elements on the stack
    int _count;  // the number of elements on the stack
};

int main()
{ Stack<int> int_stack;
  int_stack.push(66);
  int_stack.push(88);
  cout << "int_stack.top() = " << int_stack.top() << endl;
  Stack<string> string_stack;
  string_stack.push("Madison");
  string_stack.push("Monroe");
  cout << "string_stack.top() = " << string_stack.top() << endl;
}
