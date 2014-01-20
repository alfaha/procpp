//  Problem 5.18, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

const int SIZE = 5;

typedef float Matrix[SIZE][SIZE];

float trace(Matrix p);
//  Returns the sum of the diagonal elements:
//  p[0][0] + p[1][1] + ... + p[SIZE-1][SIZE-1].

void print(Matrix);
//  Prints the matrix.

int main()
{ Matrix x = { {4.4, 6.6, 7.7, 3.3, 2.2},
               {7.7, 5.5, 8.8, 5.5, 6.6},
               {8.8, 2.2, 1.1, 2.2, 1.1},
	       {3.3, 3.3, 6.6, 4.4, 7.7},
	       {6.6, 4.4, 9.9, 5.5, 3.3} };
  print(x);
  cout << "Trace = " << trace(x) << endl;
  return 0;
}

float trace(Matrix p)
{ float sum = p[0][0];
  for (int i=1; i<SIZE; i++)
    sum += p[i][i];
  return sum;
}

void print(Matrix x)
{ for (int i=0; i<SIZE; i++)
  { for (int j=0; j < SIZE; j++)
      cout << setw(5) << x[i][j];
    cout << endl;
  }
}
