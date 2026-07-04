#include <iostream>
#include <string>
using namespace std;

class Demo
{
    string str;

public:
    void getData()
    {
        getline(cin, str);
    }

    void display()
    {
        cout << str;
    }

    Demo operator+(Demo obj)
    {
        Demo temp;
        temp.str = str + " " + obj.str;  
        return temp;
    }
};

int main()
{
    Demo s1, s2, s3;

    cout << "Enter first string: ";
    s1.getData();

    cout << "Enter second string: ";
    s2.getData();

    s3 = s1 + s2;  

    cout << "Result: ";
    s3.display();

    return 0;
}