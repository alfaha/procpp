//  Problem 3.21, page 64
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n, sum=0;
  cout << "Enter n: ";
  cin >> n;
  for (int i=1; i <= n; i++)
    sum += i*i*i;
  cout << "1 + 8 + 27 + ... + n*n*n =  " << sum << endl;             
  cout << "n*n*(n+1)*(n+1)/4        =  " <<n*n*(n+1)*(n+1)/4<<endl;
}
