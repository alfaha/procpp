//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.16 on page 153
//  Integer overflow

int main()
{ long n=1;
  for (int i=0; i < 20; i++)
  { n *= 4;
    cout << n << endl;
  }
  return 0;
}
