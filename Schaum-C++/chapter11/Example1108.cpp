//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.8 on page 262

#include <iostream>

void print(int n, char x, char y, char z);
// prints the solution for moving n disks from peg x to peg y:

int main()
{ print(4, 'A', 'C', 'B');
}

void print(int n, char x, char y, char z)
// prints the solution for moving n disks from peg x to peg y:
  if (n > 0)
  { hanoi(n-1, x, z, y);
    cout << "Move top disk from peg " << x " to peg " << y << endl;
    hanoi(n-1, z, y, x);
  }
}
