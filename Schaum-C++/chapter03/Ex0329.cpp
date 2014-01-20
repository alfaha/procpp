//  Example 3.29, page 55
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ for (int i=1; i<5; i++)
    for (int j=1; j<5; j++)
      for (int k=1; k<5; k++)
        if (i + j + k > 5) break;
        else cout << '\t' << i << '\t' << j << '\t' << k << endl;
}
