//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 12.15 on page 288

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

const int SIZE=20;
void print_family(CBTI& it)
{ CBTI pt = it.parent();
  CBTI lt = it.left_child();
  CBTI rt = it.right_child();
  cout << *it << " has";
  if(!pt) cout << " no parent ";
  else cout << " parent " << *pt;
  if(!lt) cout << ", no left child ";
  else cout << ", left child " << *lt;
  if(!rt) cout << ", and no right child.\n";
  else cout << ", and right child " << *rt << ".\n";
}
int main()
{ short a[SIZE+1];
  for (int i=1; i<SIZE+1; i++)
    a[i] = i;
  CBT x(a, SIZE);
  cout << "\nPreorder traversal:\n";
  for (CBTI it(x, CBTI::PRE); it != x.end(); ++it)
    cout << *it << " ";
  cout << "\nInorder traversal:\n";
  for (it = x.inorder(); it != x.end(); ++it)
    cout << *it << " ";
  cout << "\nPostorder traversal:\n";
  for (it = x.postorder(); it != x.end(); ++it)
    cout << *it << " ";
  cout << "\nLevel-order traversal:\n";
  for (it = x.levelorder(); it != x.end(); ++it)
    cout << *it << " ";
  cout << endl;
  cout << "The tree has " << x.size() << " elements.\n";
  cout << "The tree has " << leaves(x) << " leaves.\n";
  cout << "The height of the tree is " << height(x) << ".\n";
  it = x.preorder();  print_family(it);
  ++it;  print_family(it);
  ++it;    ++it;    ++it;    ++it;
  ++it;  print_family(it);
  ++it;  print_family(it);
  ++it;  print_family(it);
  ++it;  print_family(it);
  ++it;  print_family(it);
}
