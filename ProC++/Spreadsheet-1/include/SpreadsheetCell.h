#ifndef SPREADSHEETCELL_H
#define SPREADSHEETCELL_H
#include <string>
using std::string;

class SpreadsheetCell
{
    public:
        SpreadsheetCell();
        virtual ~SpreadsheetCell();

        void setValue(double inValue);
        double getValue() const;
        void setString(string inString);
        string getString() const;


    protected:
        double mValue;
        string doubleToString(double inValue) const;
        double stringToDouble(string inString) const;
        string mString;

    private:
};

#endif // SPREADSHEETCELL_H
