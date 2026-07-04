#include <iostream>
using namespace std;
 
inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 10, y = 20;
    int result;

    result = add(x, y);

    cout << "Sum is: " << result << endl;

    return 0;
}
