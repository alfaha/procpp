//  Problem 5.19, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

const int SIZE = 5;

typedef float Matrix[SIZE][SIZE];

void transpose(Matrix m);
//  Transposes the matrix by swapping the elements that are 
//  symmetrically opposite the diagonal: m[i][j] <-> m[j][i].

void print(Matrix);
//  Prints the matrix.

int main()
{ Matrix x = { {4.4, 6.6, 7.7, 3.3, 2.2},
               {7.7, 5.5, 8.8, 5.5, 6.6},
               {8.8, 2.2, 1.1, 2.2, 1.1},
	       {3.3, 3.3, 6.6, 4.4, 7.7},
	       {6.6, 4.4, 9.9, 5.5, 3.3} };
  cout << "The given matrix is:\n";
  print(x);
  transpose(x);
  cout << "Its transpose is:\n";
  print(x);
  return 0;
}

void swap(float& x, float& y)
{ float t = x;
  x = y;
  y = t;
}

void transpose(Matrix m)
{ for (int i=1; i<SIZE; i++)
    for (int j=0; j<i; j++)
      swap(m[i][j], m[j][i]);
}

void print(Matrix x)
{ for (int i=0; i<SIZE; i++)
  { for (int j=0; j < SIZE; j++)
      cout << setw(5) << x[i][j];
    cout << endl;
  }
}
