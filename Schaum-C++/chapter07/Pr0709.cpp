//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.9 on page 164
//  An Hour class

class Hour
{   friend Hour operator+(const Hour&, const Hour&);
    friend Hour operator-(const Hour&, const Hour&);
    friend Hour operator*(const unsigned&, const Hour&);
    friend istream& operator>>(istream&, Hour&);
    friend ostream& operator<<(ostream&, const Hour&);
  public:
    Hour(int=0);    // constructor
  private:
    short _value;
    void _reduce();
};

Hour operator+(const Hour& h1, const Hour& h2)
{ Hour sum = h1 + h2;
  sum._reduce();
  return sum;
}

Hour operator-(const Hour& h1, const Hour& h2)
{ Hour difference = h1 - h2;
  difference._reduce();
  return difference;
}

Hour operator*(const unsigned& n, const Hour& h)
{ Hour product = n*h;
  product._reduce();
  return product;
}

istream& operator>>(istream& istr, Hour& h)
{ istr >> h;
  h._reduce();
}

ostream& operator<<(ostream& ostr, const Hour& h)
{ ostr << h._value << ":00";
}

Hour::Hour(int value) : _value(value)
{ _reduce();
}

void Hour::_reduce()
{ while (_value < 1)
    _value += 12;
  while (_value > 12)
    _value -= 12;
}
