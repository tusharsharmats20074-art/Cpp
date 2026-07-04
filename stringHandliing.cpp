#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;

    cout << "Length of str1: " << str1.length() << endl;

    str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

    string copyStr = str1;
    cout << "Copied string: " << copyStr << endl;

    if (str1 == str2)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    cout << "First character of str1: " << str1[0] << endl;

    str1.append(" Everyone");
    cout << "After append: " << str1 << endl;

    cout << "Substring of str3 (0,5): " << str3.substr(0,5) << endl;

    return 0;
}
