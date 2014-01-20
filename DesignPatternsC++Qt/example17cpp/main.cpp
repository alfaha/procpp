#include <iostream>
#include <string>


using namespace std;

int main()
{
    string s1("This "), s2("is"), s3(" a String.");
    s1 += s2;
    string s4=s1+s3;
    cout << s4 << endl;

    string s5("The length of this string is: ");
    cout << s5 << s4.length() << " characters. " << endl;

    cout << "Enter a sentence: " << endl;
    getline(cin, s2);

    cout << "Here is your sentence: \n" << s2 << endl;
    cout << "The length of your sentence is: " << s2.length() << endl;
    return 0;
}
