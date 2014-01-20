#include "SpreadsheetCell.h"
#include <iostream>
#include <sstream>

using namespace std;



SpreadsheetCell::SpreadsheetCell()
{
    //ctor

}

SpreadsheetCell::~SpreadsheetCell()
{
    //dtor
}

void SpreadsheetCell::setValue(double inValue)
{
    mValue = inValue;
    mString = doubleToString(mValue);
    // print
    // cout << *this << endl;
}

double SpreadsheetCell::getValue() const
{
    return mValue;
}

void SpreadsheetCell::setTring(string inString)
{
    mString = inString;
    mValue = stringToDouble(mString);
    // print cell
    // cout << *this >> endl;
}

string SpreadsheetCell::getString() const
{
    return mString;
}

string SpreadsheetCell::doubleToString(double inValue) const
{
    ostringstream ostr;
    ostr << inValue
    return ostr.str();
}

double SpreadsheetCell::stringToDouble(string inString) const
{
    double temp;
    istringstream istr(inString);
    istr >> temp;
    if (istr.fail() || !istr.eof()) {
        return 0; }
    return temp;
}