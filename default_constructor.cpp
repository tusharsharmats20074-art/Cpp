#include <iostream.h>
using namespace std;

class example{
    int a,b;
    public:
    example(){
        a=10;
        b=20;
    }
    example(){
        cout<<"Im constructor\n"
    }
    
    
    void display()
    {
        cout<<"a="<<a<<"\n";
        cout<<"b="<<b<<"\n";
    };
    int main()
    {
        example e1;
        e1.display();
        return 0;
    }
}