//  Problem 11.27, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"
#include "/home/MCS-Fac/hubbard/c++/swap"

void print(string s, int k, int n)
{ if (k == n)
  { for (int i=0; i<=n; i++)
      cout << s[i];
    cout << endl;
  }
  else
    for (int i=k; i <= n; i++)
    { swap(s[i], s[k]);
      print(s, k+1, n);
      swap(s[i], s[k]);
    }
}

int main()
{ int n;
  cin >> n;
  print("ABCDEFG", 0, n-1);
}
