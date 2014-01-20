//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  BinaryTree.cpp
//  Binary Tree class on page 290

typedef short T;
class BinaryTree
{ private:
    struct Node
    { Node(T& data, Node* left=0, Node* right=0) : _data(data) { }
      T _data;
      Node* _pre;     // points to parent
      Node* _left;
      Node* _right;
    };
  public:
    class Iterator
    {   friend class BinaryTree;
      public:
        enum Order { END, PRE, IN, POST, LEVEL };
        Iterator(BinaryTree&, Order =IN);
        	Order order();
        bool reset();
        bool operator!();
        T& operator*();
        bool is_root();
        bool is_leaf();
        	Iterator parent();
        	Iterator left_child();
        	Iterator right_child();
        void operator++();
        	friend bool operator==(Iterator&, Iterator&);
        	friend bool operator!=(Iterator&, Iterator&);
      private:
        const BinaryTree& _tree;
        Node* _p;
        	Order _order;  // END, PRE, IN, POST, or LEVEL
        	Node* _start();  // returns the index of starting element
    };
    friend class Iterator;
    BinaryTree() : _root(0) { }
    BinaryTree(T&);
    BinaryTree(T&, BinaryTree&, BinaryTree&);
    BinaryTree(T*, int);
    bool is_empty();
    int size();
    int height();
    Iterator preorder();
    Iterator inorder();
    Iterator postorder();
    Iterator levelorder();
    Iterator end();
    Iterator grow_left(Iterator, const T&);
    Iterator grow_right(Iterator, const T&);
    Iterator insert_left(Iterator, const T&);
    Iterator insert_right(Iterator, const T&);
    void prune(Iterator);
    void erase_left(Iterator);
    void erase_right(Iterator);
    void clear(Iterator);
  protected:
    Node* _root;
};