//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.22 on page 175
//  A Person class

class Person
{ public:
    Person(string lname, string fname, string id)
     : _lname(lname), _fname(fname), _id(id) { }
    string lname() const { return _lname; }
    string fname() const { return _fname; }
    string id() const { return _id; }
    Address address() const { return _address; }
    Date dob() const { return _dob; }
    Date dod() const { return _dod; }
    string sex() const { return _sex; }
    string phone() const { return _phone; }
    string email() const { return _email; }
    string url() const { return _url; }
    int age(Date date) const ( return (date - dob)/365.2425; }
    void set_lname(string lname) { _lname = lname; }
    void set_fname(string fname) { _fname = fname; }
    void set_id(string id) { _id = id; }
    void set_address(Address address) { _address = address; }
    void set_dob(Date dob) { _dob = dob; }
    void set_dod(Date dod) { _dod = dod; }
    void set_sex(string sex) { _sex = sex; }
    void set_phone(string phone) { _phone = phone; }
    void set_email(string email) { _email = email; }
    void set_url(string url) { _url = url; }
  private:
    string _lname;
    string _fname;
    string _id;
    Address _address;
    Date _dob;
    Date _dod;
    string _sex;
    string _phone;
    string _email;
    string _url;
};
