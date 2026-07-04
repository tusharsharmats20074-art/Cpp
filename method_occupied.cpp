#include <iostream>
using namespace std;

class A
{
    int a;
    int b;
    int sum;

public:
    void add()
    {
        a = 20;
        b = 30;
        sum = a + b;
    }

    int add(int x)
    {
        sum = sum + x;
        return sum;
    }
};

int main()
{
    A obj;
    obj.add();

    cout << obj.add(50);

    return 0;
}