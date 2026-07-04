#include <iostream>
using namespace std;

class Demo
{
    int *ptr;

public:
    
    Demo()
    {
        ptr = new int;  
        *ptr = 100;
        cout << "Memory Allocated, value = " << *ptr << endl;
    }

    // Destructor
    ~Demo()
    {
        delete ptr;   
        cout << "Memory Released" << endl;
    }
};

int main()
{
    Demo obj; 

    return 0;
}