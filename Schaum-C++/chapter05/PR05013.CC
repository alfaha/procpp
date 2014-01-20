//  Problem 5.13, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

const int SIZE = 8;
typedef int Array[SIZE];

void rotate(Array a, int k);
//  Shifts the left-most SIZE-k elements k places to the right
//  and wraps the right-most k elements around to the left.
//  EXAMPLE: if a[] = {22, 33, 44, 55, 66, 77, 88, 99} then the call
//  shift(a, 3) changes a to {77, 55, 88, 22, 55, 33, 66, 44}.
//  PRECONDITION: 0 <= k < SIZE.
//  POSTCONDITION: a[i] -> a[i+k] for 0 <= i < SIZE-k,
//    and a[i] -> a[i-SIZE+k] for SIZE-k <= i < SIZE.

void print(Array a);
//  Prints the first SIZE elements of the array a.
//  PRECONDITION: a has at least SIZE elements.

int main()
{ Array a = {22, 33, 44, 55, 66, 77, 88, 99};
  print(a);
  rotate(a, 3);
  print(a);
  return 0;
}

void copy(Array b, Array a);
//  Copies the first SIZE elements of the array x into the array y;
//  PRECONDITION: x and y both have at least SIZE elements.
//  POSTCONDITION: x[i] == y[i] for 0 <= i < SIZE.

void rotate(Array a, int k)
{ Array temp;
  copy(temp, a);
  for (int i=0; i< SIZE-k; i++)
    a[i+k] = temp[i];
  for (i=SIZE-k; i<SIZE; i++)
    a[i-SIZE+k] = temp[i];
}

void print(Array a)
{ for (int i=0; i<SIZE; i++)
    cout << a[i] << "\t";
  cout << endl; 
}

void copy(Array b, Array a)
{ for (int i=0; i<SIZE; i++)
    b[i] = a[i];
}
