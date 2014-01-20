//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.14 on page 151
//  A copy constructor

class Ratio
{   friend Ratio operator+(Ratio, Ratio);
    friend istream& operator>>(istream&, Ratio&);
    friend ostream& operator<<(ostream&, const Ratio&);
  public:
    Ratio(int=0, int=1);    // default constructor
    Ratio(const Ratio&);    // copy constructor
  private:
    _reduce();    // enforces the class invariants
    int _num;    // numerator
    int _den;    // denominator
};

Ratio::Ratio(const Ratio& r) : _num(r._num), _den(r._den)
{
}
