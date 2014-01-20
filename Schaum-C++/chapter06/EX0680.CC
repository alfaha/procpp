//  Example 6.9, page 119
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"

int main()
{ Name king[SIZE];  // defines king to be an array of 20 names
  int n=0;          // the number of names read
  while(cin.getline(king[n++], LEN) && n<SIZE)
    ;
  --n;
  for (int i=0; i<n; i++)
    cout << '\t' << i+1 << ". " << king[i] << endl;
}
