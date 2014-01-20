//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.4 on page 256

void reverse()
{ char c;
  cin.get(c);
  if (c == '\n') return;
  reverse();
  cout << c;
  return;
}

int main()
{ cout << "Enter a string:\n";
  reverse();
}
