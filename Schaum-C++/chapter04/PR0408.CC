//  Problem 4.8, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

void print_dollars(float x);
//  Prints x in literal form as a dollar amount, as in a bank check.
//  EXAMPLE: print_dollars(123.45) would print
//           one hundred twenty-three dollars and 45 cents
//  PRECONDITION: x >= 0.00 && x < 1000.00

int main()
{ double x = 1.0;
  while (x > 0.0)
  { cin >> x;
    print_dollars(x);
    cout << endl;
  }
  return 0;
}

void print_literal_digit(int n)
{ assert(n >= 0 && n <= 9);
  if (n == 0) cout << "zero";
  else if (n == 1) cout << "one";
  else if (n == 2) cout << "two";
  else if (n == 3) cout << "three";
  else if (n == 4) cout << "four";
  else if (n == 5) cout << "five";
  else if (n == 6) cout << "six";
  else if (n == 7) cout << "seven";
  else if (n == 8) cout << "eight";
  else cout << "nine";
}

void print_literal_tens(int n)
{ assert(n >= 2 && n <= 9);
  if (n == 2) cout << "twenty";
  else if (n == 3) cout << "thirty";
  else if (n == 4) cout << "fourty";
  else if (n == 5) cout << "fifty";
  else if (n == 6) cout << "sixty";
  else if (n == 7) cout << "seventy";
  else if (n == 8) cout << "eighty";
  else cout << "ninety";
}

void print_literal_teens(int n)
{ assert(n >= 0 && n <= 9);
  if (n == 0) cout << "ten";
  else if (n == 1) cout << "eleven";
  else if (n == 2) cout << "twelve";
  else if (n == 3) cout << "thirteen";
  else if (n == 4) cout << "fourteen";
  else if (n == 5) cout << "fifteen";
  else if (n == 6) cout << "sixteen";
  else if (n == 7) cout << "seventeen";
  else if (n == 8) cout << "eighteen";
  else cout << "nineteen";
}

void print_dollars(float x)
{ assert(x >= 0.00 && x < 1000.00);
  int hundreds = int(x)/100;
  int tens = int(x)%100/10;
  int ones = int(x)%10;
  int cents = int(100*x)%100;
  if (hundreds >= 1)
  { print_literal_digit(hundreds);
    cout << " hundred ";
  }
  if (tens >= 2)
  { print_literal_tens(tens);
    if (ones >= 1)
    { cout << "-";
      print_literal_digit(ones);
    }
  }
  else if (tens == 1) print_literal_teens(ones);
  else if (ones >= 1) print_literal_digit(ones);
  if (x < 1.0) cout << "no";
  cout << " dollars and " << cents << " cents";
}
