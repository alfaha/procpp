//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 12.15 on page 288
//  Test driver for the CompleteBinaryTree class

#include "CompleteBinaryTree.h"

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
