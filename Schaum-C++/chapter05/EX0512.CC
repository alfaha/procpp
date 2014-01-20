//  Example 5.12, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

int main()
{ const int MAX = 1000;
  bool prime[MAX];
  prime[0] = prime[1] = false;
  for (int i=2; i<MAX; i++)
    prime[i] = true;
  for (int j=2; 2*j < MAX; j++)
    prime[2*j] = false;
  int p = 3;
  while (p <= MAX/2)
  { for (int j=2; p*j < MAX; j++)
      prime[p*j] = false;
    while (!prime[++p])  // set p = next prime
      ;
  }
  for (i=2; i<MAX; i++)
  { if (prime[i]) cout << i << " ";
    if (i%80 == 0) cout << endl;
  }
  cout << endl;
  return 0;
}
