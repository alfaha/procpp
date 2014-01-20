//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.16 on page 167
//  A class for modular arithmetic

const int N = 7;
class ModN
{   friend ModN operator+(ModN, ModN);
    friend ModN operator-(ModN, ModN);
    friend ModN operator*(ModN, ModN);
    friend ModN operator/(ModN, ModN);
    friend ModN operator%(ModN, ModN);
    friend istream& operator>>(istream&, ModN&);
    friend ostream& operator<<(ostream&, const ModN&);
  public:
    ModN(int n=0) : _n(n) { }
    ModN(const ModN& x) : _n(x._n) { }
    ModN& operator=(const ModN& x) { _n = x._n; return *this; }
    ModN& operator=(const int n) { _n = n%N; return *this; }
    int value() const { return _n; }
  private:
    int _n;
};

ModN operator+(ModN x, ModN y)
{ ModN z;
  z._n = (x._n + y._n)%N;
  return z;
}

ModN operator-(ModN x, ModN y)
{ ModN z;
  z._n = (x._n - y._n + N)%N;
  return z;
}

ModN operator*(ModN x, ModN y)
{ ModN z;
  z._n = (x._n * y._n)%N;
  return z;
}

ModN operator/(ModN x, ModN y)
{ assert(y._n != 0);
  ModN z;
  z._n = x._n / y._n;
  return z;
}

ModN operator%(ModN x, ModN y)
{ assert(y._n != 0);
  ModN z;
  z._n = x._n % y._n;
  return z;
}

istream& operator>>(istream& istr, ModN& x)
{ int n;
  istr >> n;
  x._n = n%N;
  return istr;
}

ostream& operator<<(ostream& ostr, const ModN& x)
{ ostr << x._n;
  return ostr;
}
