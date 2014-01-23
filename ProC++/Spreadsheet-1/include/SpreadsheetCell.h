#ifndef SPREADSHEETCELL_H
#define SPREADSHEETCELL_H
#include <string>
using std::string;

class SpreadsheetCell
{
    public:
        SpreadsheetCell();
        SpreadsheetCell(double initialValue);
        SpreadsheetCell(const string& initialValue);
        SpreadsheetCell(const SpreadsheetCell& src);

        virtual ~SpreadsheetCell();

        void setValue(double inValue);
        double getValue() const;
        void setString(const string& inString);
        string getString() const;


    protected:
        double mValue;
        string doubleToString(double inValue) const;
        double stringToDouble(const string& inString) const;
        string mString;

    private:
};

#endif // SPREADSHEETCELL_H
