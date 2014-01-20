//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.18 on page 169
//  A Distance class

class Distance
{   friend Distance operator*(double, Distance);
    friend Distance operator/(Distance, double);
  public:
    Distance(double m=0) : _m(m) { }
    double cm() const { return 100*_m; }
    double km() const { return _m/100; }
    double in() const { return _m/0.0254; }  // 1 in == 0.0254 m
    double ft() const { return _m/0.0254/12; }
    double mi() const { return _m/0.0254/12/5280; }
    void add_cm(double cm) { _m = cm/100; }
    void add_km(double km) { _m = 100*km; }
    void add_in(double in) { _m = 0.0254*in; }
    void add_ft(double ft) { _m = 0.0254*12*ft; }
    void add_mi(double mi) { _m = 0.0254*12*5280*mi; }
    void add_cm(double cm) { _m += cm/100; }
    void add_km(double km) { _m += 100*km; }
    void add_in(double in) { _m += 0.0254*in; }
    void add_ft(double ft) { _m += 0.0254*12*ft; }
    void add_mi(double mi) { _m += 0.0254*12*5280*mi; }
    void subtract_cm(double cm) { _m -= cm/100; }
    void subtract_km(double km) { _m -= 100*km; }
    void subtract_in(double in) { _m -= 0.0254*in; }
    void subtract_ft(double ft) { _m -= 0.0254*12*ft; }
    void subtract_mi(double mi) { _m -= 0.0254*12*5280*mi; }
    Distance& operator=(const Distance&);
    Distance& operator*=(const double);
    Distance& operator/=(const double);
  private:
    double _m;  // meters
};

Distance operator*(double t, Distance x)
{ assert(t >= 0.0);
  Distance y(t*x._m);
  return y;
}

Distance operator/(Distance x, double t)
{ assert(t > 0.0);
  Distance y(x._m/t);
  return y;
}

Distance& Distance::operator=(const Distance& x)
{ _m = x._m;
  return *this;
}

Distance& Distance::operator*=(const double t)
{ assert(t >= 0.0);
  _m *= t;
  return *this;
}

Distance& Distance::operator/=(const double t)
{ assert(t > 0.0);
  _m /= t;
  return *this;
}
