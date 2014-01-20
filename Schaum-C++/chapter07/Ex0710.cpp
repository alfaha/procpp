//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.10 on page 146
//  Overloading input and output operators

class Ratio
{   friend Ratio operator+(Ratio, Ratio);
    friend istream& operator>>(istream& istr, Ratio& r);
    friend ostream& operator<<(ostream& ostr, const Ratio& r);
  public:
    Ratio(int, int);       // constructor
  private:
    int _num;              // numerator
    int _den;              // denominator
};

istream& operator>>(istream& istr, Ratio& x)
{ char ch;         // used to eat the slash character '/'
  istr >> x._num;
  if (istr.peek() == '/') istr >> ch >> x._den;
  else x._den = 1;
  return istr;
}

ostream& operator<<(ostream& ostr, const Ratio& x)
{ if (x._den == 1) ostr << x._num;
  else ostr << x._num << '/' << x._den;
  return ostr;
}
