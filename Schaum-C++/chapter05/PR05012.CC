//  Problem 5.12, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

const int SIZE = 6;
typedef int Array[SIZE];

void copy(Array b, Array a);
//  Copies the first SIZE elements of the array x into the array y;
//  PRECONDITION: x and y both have at least SIZE elements.
//  POSTCONDITION: x[i] == y[i] for 0 <= i < SIZE.

void shuffle(Array a);
//  Implements the perfect shuffle of the first SIZE elements of a.
//  EXAMPLE: if a[] = {22, 33, 44, 55, 66, 77, 88, 99} then the call
//  shuffle(a, 8) changes a to {22, 55, 33, 66, 44, 77, 55, 88}.
//  PRECONDITION: a has at least SIZE elements.
//  POSTCONDITION: a[i] -> a[2*i] and a[SIZE/2+i] -> a[2*i+1]
//    for 0 <= i < SIZE/2.

bool are_equal(Array a, Array b);
//  Returns true iff x[i] == y[i] for 0 <= i < SIZE.
//  PRECONDITION: x and y both have at least SIZE elements.

void print(Array a);
//  Prints the first SIZE elements of the array a.
//  PRECONDITION: a has at least SIZE element.

int main()
{ Array a = {22, 33, 44, 55, 66, 77};
  Array b;
  cout << "a =\t";
  print(a);
  copy(b, a);
  cout << "b =\t";
  print(b);
  int count = 0;
  do
  { shuffle(b);
    ++count;
    cout << count << ":\t";
    print(b);
  } while (!are_equal(a, b));
  cout << "It took " << count << " perfect shuffles to restore the "
       << SIZE << "-element array to its original state.\n";
  return 0;
}

void copy(Array b, Array a)
{ for (int i=0; i<SIZE; i++)
    b[i] = a[i];
}

void shuffle(Array a)
{ int temp[SIZE];
  const half = SIZE/2;
  for (int i=0; i<half; i++)
  { temp[2*i] = a[i];
    temp[2*i+1] = a[half+i];
  }
  for (i=0; i<SIZE; i++)
    a[i] = temp[i];
}

bool are_equal(Array a, Array b)
{ for (int i=0; i<SIZE; i++)
    if (a[i] != b[i]) return false;
  return true;
}

void print(Array a)
{ for (int i=0; i<SIZE; i++)
    cout << a[i] << "\t";
  cout << endl; 
}
