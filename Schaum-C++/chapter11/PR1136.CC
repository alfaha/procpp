//  Problem 11.36, page 260
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <math.h>
#include <iomanip.h>
#include <iostream.h>

const double PHI = 1.618033988749895;  // the Golden Mean
const double PSI = 1.0 - PHI;  // the conjugate of the Golden Mean

double recip_sqrt5 = 1.0/sqrt(5.0);

double f(int n)
{ return recip_sqrt5*(pow(PHI,n) - pow(PSI,n));
}

int main()
{ for (int n=0; n<20; n++)
    cout << setw(10) << "f(" << n << ") =" << "\t" << setw(6)
         << setiosflags(ios::right) << f(n) << endl;
}
