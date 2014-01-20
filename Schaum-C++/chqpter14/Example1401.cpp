//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 14.1 on page 319

const int SIZE=12;
int a[SIZE] = { 44, 66, 77, 33, 88, 66, 99, 55, 66, 66, 44, 88 };
int target=66;
int loc=0;
for (;;)
{ loc = find(a, loc, SIZE, target);
  if (loc == SIZE) break;
  cout << target << " was found at location " << loc++ << endl;
}
