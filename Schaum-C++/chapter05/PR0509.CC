//  Problem 5.9, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ const int SIZE = 128;
  int freq[SIZE] = {0};
  char c;
  cin >> c;
  while (!!cin)
  { if (c >= 'a' && c <= 'z')
      ++freq[c];
    cin >> c;
  }
  char m = 'a';
  for (c='b'; c <= 'z'; c++)
    if (freq[c] > freq[m]) m = c;
  cout << "The first most frequent letter was " << m << endl;
  cout << "It occurred " << freq[m] << " times.\n";
  return 0;
}
