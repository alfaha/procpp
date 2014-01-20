//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 14.3 on page 321

const int SIZE=12;
int target = 66;
int a[SIZE] = { 22, 33, 33, 33, 44, 55, 66, 66, 77, 88, 88, 99 };
int loc = find(a, 0, SIZE, target);
if (loc == SIZE) cout << target << " was not found\n";
else cout << target << " was found at location " << loc << endl;
