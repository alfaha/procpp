//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  CompleteBinaryTree.h
//  Binary Tree class on page 290

typedef short T;
class CompleteBinaryTree
{ public:
    class Iterator
    { public:
        enum Order { END, PRE, IN, POST, LEVEL };
        Iterator(CompleteBinaryTree&, Order=IN);
        Order order();
        bool reset();
        bool operator!();         // returns true iff iterator is null
        bool is_root();
        bool is_leaf();
        T& operator*();        // read-write access to current element
        Iterator parent();
        Iterator left_child();
        Iterator right_child();
        void operator++();
        void operator--();
        friend bool operator==(Iterator&, Iterator&);
        friend bool operator!=(Iterator&, Iterator&);
      private:
        CompleteBinaryTree* _p;            // the tree being traversed
        int _k;            // index locating current element in _p->_v
        Order _order;                  // END, PRE, IN, POST, or LEVEL
        int _start(int);
        int _next_pre(int, int);
        int _next_in(int, int);
        int _next_post(int, int);
    };
    friend class Iterator;
    CompleteBinaryTree();
    CompleteBinaryTree(T*, int);
    ~CompleteBinaryTree();
    bool is_empty();
    int size();
    int height();
    Iterator preorder();
    Iterator inorder();
    Iterator postorder();
    Iterator levelorder();
    Iterator end();
  protected:
    const int _CAP=2;                              // initial capacity
    T* _v;                            // the dynamic array of elements
    int _size;                         // the number of elements in _v
    int _cap;                // the number of elements allocated to _v
    _reallocate();                        // doubles the capacity _cap
};
