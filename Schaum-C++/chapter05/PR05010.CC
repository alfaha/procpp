//  Problem 5.10, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

void shuffle(int a[], const int n);
//  Implements the perfect shuffle of the first n elements of a.
//  EXAMPLE: if a[] = {22, 33, 44, 55, 66, 77, 88, 99} then the call
//  shuffle(a, 8) changes a to {22, 55, 33, 66, 44, 77, 55, 88}.
//  PRECONDITION: a has at least n elements.
//  POSTCONDITION: a[i] -> a[2*i] and a[n/2+i] -> a[2*i+1] for i < n/2.

void print(int a[], int n);
//  Prints the first n elements of the array a.
//  PRECONDITION: a has at least n element.

int main()
{ int a[100] = {22, 33, 44, 55, 66, 77, 88, 99};
  print(a, 8);
  for (int i=0; i<6; i++)
  { shuffle(a, 8);
    print(a, 8);
  }
  return 0;
}

void shuffle(int a[], const int n)
{ int temp[n];
  const half = n/2;
  for (int i=0; i<half; i++)
  { temp[2*i] = a[i];
    temp[2*i+1] = a[half+i];
  }
  for (i=0; i<n; i++)
    a[i] = temp[i];
}

void print(int a[], int n)
{ for (int i=0; i<n; i++)
    cout << a[i] << "\t";
  cout << endl; 
}
