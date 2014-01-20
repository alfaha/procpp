//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.11 on page 148
//  Enforcing class invariants

class Ratio
{   friend Ratio operator+(Ratio, Ratio);
    friend istream& operator>>(istream&, Ratio&);
    friend ostream& operator<<(ostream&, const Ratio&);
  public:
    Ratio(int, int);       // constructor
  private:
    void _reduce();        // enforces the class invariants
    int _num;              // numerator
    int _den;              // denominator
};

Ratio operator+(Ratio x, Ratio y)
{ int num = x._num*y._den + x._den*y._num;
  int den = x._den*y._den;
  Ratio temp(num, den);
  temp._reduce();
  return temp;
}

istream& operator>>(istream& istr, Ratio& x)
{ char ch;         // used to eat the slash character '/'
  istr >> x._num;
  if (istr.peek() == '/') istr >> ch >> x._den;
  else x._den = 1;
  x._reduce();
  return istr;
}

Ratio::Ratio(int num, int den)
{ _num = num;
  _den = den;
  _reduce();
}
int gcd(int m, int n)
{ assert(m > 0 && n > 0);
  while (m > 0)
  { if (m < n) swap(m,n);
    m -= n;
  }
  return n;
}

void Ratio::_reduce()
{ if (_num == 0 || _den == 0)
  { _num = 0;
    _den = 1;
    return;
  }
  if (_den < 0)                   // enforces constraint: _den > 0
  { _num *= -1;
    _den *= -1;
  }
  int abs_num = (_num < 0 ? -_num : _num);             // = |_num|
  int g = gcd(abs_num, _den);
  _num /= g;  // enforces constraint that ratio be in lowest terms
  _den /= g;
}
