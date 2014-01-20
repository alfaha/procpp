//  Problem 5.10, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

bool are_equal(float x[], float y[], int n);
//  Returns true iff x[i] == y[i] for 0 <= i < n.
//  PRECONDITION: x and y both have at least n elements.

void print(float x[], int n);
//  Prints the first n elements of the array x.
//  PRECONDITION: x has at least n element.

int main()
{ float x[8] = {2.2, 8.8, 4.4, 6.6, 5.5, 9.9, 3.3, 7.7};
  float y[8] = {2.2, 8.8, 4.4, 6.6, 5.5, 0, 0, 0};
  print(x, 8);
  print(y, 8);
  for (int k=0; k <= 8; k++)
    if (are_equal(x, y, k))
      cout << "are_equal(x, y, " << k << ") is true\n";
    else
      cout << "are_equal(x, y, " << k << ") is false\n";  
  return 0;
}

bool are_equal(float x[], float y[], int n)
{ for (int i=0; i<n; i++)
    if (x[i] != y[i]) return false;
  return true;
}

void print(float x[], int n)
{ for (int i=0; i<n; i++)
    cout << x[i] << " ";
  cout << endl; 
}
