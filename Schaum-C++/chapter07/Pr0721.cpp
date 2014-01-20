//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.21 on page 171
//  A Date class

const int FIRST_YEAR = 1601;
const int LAST_YEAR = 10000;
class Date
{   friend istream& operator>>(istream&, Date&);
    friend ostream& operator<<(ostream&, const Date&);
    friend bool operator==(const Date&, const Date&);
    friend bool operator!=(const Date&, const Date&);
    friend bool operator<(const Date&, const Date&);
    friend bool operator>(const Date&, const Date&);
    friend bool operator<=(const Date&, const Date&);
    friend bool operator>=(const Date&, const Date&);
    friend Date operator+(const Date&, const int);
    friend Date operator-(const Date&, const int);
    friend int operator-(const Date&, const Date&);
  public: 
    Date(int =1601, int =1, int =1);
    int day_of_year() const;
    int year() const;
    int month() const;
    int day() const;
    int days() const;
    string weekday() const;
    Date operator++();
    Date operator--();
    Date& operator+=(const int);
    Date& operator-=(const int);
  private:
    int _days;  // number of days elapsed since Dec 31 1600
};

bool is_leap_year(int year)
{ if (year % 400 == 0) return true;   // 2000 is a leap year
  if (year % 100 == 0) return false;  // 1900 is not a leap year
  if (year % 4 == 0) return true;     // 1996 is a leap year
  return false;                       // 1999 is not a leap year
}

int days_in_month(int m, int y)
{ if (m == 2) return (is_leap_year(y) ? 29 : 28);
  if (m == 9 || m == 4 || m == 6 || m == 11) return 30;
  return 31;
}

int elapsed(int y, int m, int d)
// returns the number of days between 1600-12-31 and y-m-d
{ int n = 0;
  for (int yy=FIRST_YEAR; yy<y; yy++)
    n += (is_leap_year(yy) ? 366 : 365);
  for (int mm=1; mm<m; mm++)
    n += days_in_month(mm, y);
  return n + d;
}

istream& operator>>(istream& istr, Date& x)
{ int year, month, day;
  char c;  // to eact the '-'
  cin >> year >> c >> month >> c >> day;
  x._days = elapsed(year, month, day);
  return istr;
}

ostream& operator<<(ostream& ostr, const Date& x)
{ ostr << x.year() << "-";
  int m = x.month();
  if (m < 10) ostr << "0";
  ostr << m << "-";
  int d = x.day();
  if (d < 10) ostr << "0";
  ostr << d;
  return ostr;
}

inline bool operator==(const Date& x, const Date& y)
{ return bool(x._days == y._days);
}

inline bool operator!=(const Date& x, const Date& y)
{ return bool(x._days != y._days);
}

inline bool operator<(const Date& x, const Date& y)
{ return bool(x._days < y._days);
}  

inline bool operator<=(const Date& x, const Date& y)
{ return bool(x._days <= y._days);
}

inline bool operator>(const Date& x, const Date& y)
{ return bool(x._days > y._days);
}

inline bool operator>=(const Date& x, const Date& y)
{ return bool(x._days >= y._days);
}

inline Date operator+(const Date& x, const int n)
{ Date y = x;
  y._days += n;
  return y;
}

inline Date operator-(const Date& x, const int n)
{ Date y = x;
  y._days -= n;
  return y;
}

inline int operator-(const Date& x, const Date& y)
{ return x._days - y._days;
}

Date::Date(int y, int m, int d)
{ assert(y >= FIRST_YEAR);
  assert(1 <= m && m <= 12);
  assert(1 <= d && d <= days_in_month(m, y));
  _days = elapsed(y, m, d);
}

int Date::day_of_year() const
{ int diy;  // number of days in year
  int n = _days;
  for (int y=FIRST_YEAR; y<LAST_YEAR; y++)
  { diy = (is_leap_year(y) ? 366 : 365);
    if (n <= diy) return n;
    n -= diy;
  }
  return n;
}

int Date::year() const
{ int diy;  // number of days in year
  int n = _days;
  for (int y=FIRST_YEAR; y<LAST_YEAR; y++)
  { diy = (is_leap_year(y) ? 366 : 365);
    if (n <= diy) return y;
    n -= diy;
  }
  return LAST_YEAR;
}

int Date::month() const
{ int dim;  // number of days in month
  int y = year();
  int n = day_of_year();
  for (int m=1; m<12; m++)
  { dim = days_in_month(m, y);
    if (n <= dim) return m;
    n -= dim;
  }
  return 12;
}

int Date::day() const
{ int dim;  // number of days in month
  int y = year();
  int n = day_of_year();
  for (int m=1; m<12; m++)
  { dim = days_in_month(m, y);
    if (n <= dim) return n;
    n -= dim;
  }
  return n;
}

inline int Date::days() const
{ return _days;
}

string Date::weekday() const
// Zeller's Algorithm (see Reilly & Federighi, p.309)
{ const string WEEKDAY[7]
    = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
  int y = year();
  int m = month();
  int d = day();
  m = 1 + (m + 9)%12;
  if (m > 10) --y;
  int c = y/100;
  y %= 100;
  int i = ((13*m - 1)/5 + d + y + y/4 + c/4 + 5*c)%7;
  return WEEKDAY[i];
}

inline Date Date::operator++()
{ ++_days;
  return *this;
}

inline Date Date::operator--()
{ --_days;
  return *this;
}

inline Date& Date::operator+=(const int n)
{ _days += n;
  return *this;
}

inline Date& Date::operator-=(const int n)
{ _days -= n;
  return *this;
}
