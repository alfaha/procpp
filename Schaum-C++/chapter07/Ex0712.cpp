//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.12 on page 149
//  Initialization lists for constructors

class Ratio
{   friend Ratio operator+(Ratio, Ratio);
    friend istream& operator>>(istream&, Ratio&);
    friend ostream& operator<<(ostream&, const Ratio&);
  public:
    Ratio(int, int);       // constructor
  private:
    _reduce();              // enforces the class invariants
    int _num;              // numerator
    int _den;              // denominator
};

Ratio::Ratio(int num, int den) : _num(num), _den(den)
{ _reduce();
}
