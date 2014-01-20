//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.12 on page 167
//  An Address class

class Address
{ public:
    Address(string="",string="",string="",string="",string="");
    string street() { return _street; }
    string city() { return _city; }
    string state() { return _state; }
    string code() { return _code; }
    string country() { return _country; }
    void set_street(string street) { _street = street; }
    void set_city(string city) { _city = city; }
    void set_state(string state) { _state = state; }
    void set_code(string code) { _code = code; }
    void set_country(string country) { _country = country; }
  private:
    string _street;
    string _city;
    string _state;
    string _code;
    string _country;
};

Address::Address(string street, string city, string state,
  string code, string country) : _street(street), _city(city), 
  _state(state), _code(code), _country(country) { }
