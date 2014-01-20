//  Example 6.6, page 118
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

const int LEN=32;       // maximum word length
const int SIZE=10;      // array size
typedef char Name[LEN]; // defines Name to be a C-string type

int main()
{ Name king[SIZE];  // defines king to be an array of 20 names
  int n=0;          // the number of names read
  while(cin.getline(king[n++], LEN) && n<SIZE)
    ;
  --n;
  for (int i=0; i<n; i++)
    cout << '\t' << i+1 << ". " << king[i] << endl;
}
