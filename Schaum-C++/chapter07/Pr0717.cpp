//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.17 on page 169
//  A Purse class

class Purse
{ public:
    Purse(int p=0, int n=0, int d=0, int q=0)
     : _p(p), _n(n), _d(d), _q(q) { _reduce(); }
    int pennies() const { return _p; }
    int nickels() const { return _n; }
    int dimes() const { return _d; }
    int quarters() const { return _q; }
    int value() const { return _p + 5*_n + 10*_d + 25*_q; }
    void insert(int n) { _p += n; _reduce(); }
    void remove(int n) { _p -= n; _reduce(); }
    void empty() { _p = _n = _d = _q = 0; }
  private:
    int _p;  // number of pennies in the purse
    int _n;  // number of nickels in the purse
    int _d;  // number of dimes in the purse
    int _q;  // number of quarters in the purse
    void _reduce();
};

void Purse::_reduce()
{ int v = _p + 5*_n + 10*_d + 25*_q;
  assert(v >= 0);
  _q = v/25;  v %= 25;
  _d = v/10;  v %= 10;
  _n = v/5;   v %= 5;
  _p = v;
}
