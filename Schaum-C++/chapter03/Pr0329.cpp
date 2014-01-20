//  Problem 3.29, page 65
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>

int main()
{ setiosflags(ios::right);
  cout.setf(ios::fixed, ios::floatfield);
  cout << setprecision(14);
  int f0=0, f1=1, f2, n;
  cout << "How many Fibonacci numbers do you want? ";
  cin >> n;
  cout << setw(8) << "f1 =" << setw(12) << "1\n";
  for (int i=2; i <= n; i++)
  { f2 = f1 + f0;
    cout << setw(5) << "f" << i << " ="
         << (i < 10 ? setw(11) : setw(10)) << f2
         << setw(9) << "f" << i << "/f" << i-1
	 << (i == 10 ? " " : "") << " = " 
         << (i<10? setw(18): setw(16)) << double(f2)/f1 << endl;
    f0 = f1;
    f1 = f2;
  }
  double phi = (1 + sqrt(5))/2;
  cout << " The Golden Mean = (1 + sqrt(5))/2 = " << phi << endl;
}
