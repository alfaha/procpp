//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.13 on page 131

#include <iostream>
using namespace std;

int main()
{ string word, first, last;
  char c;
  bool is_first, is_last = true;
  string name[32];
  int n=0;
  while (cin >> word)
  { cin.get(c);               // should be either a blank or a newline
    is_first = is_last;               //  current word is a first name
    is_last = bool(c == '\n');         //  current word is a last name
    if (is_first) first = word;
    else if (is_last) name[n++] = word + ", " + first;
    else first += " " + word.substr(0,1) + ".";  // add middle initial
  }
  --n;
  for (int i=0; i<n; i++)
    cout << '\t' << i+1 << ". " << name[i] << endl;
}
