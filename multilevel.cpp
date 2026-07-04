#include <iostream>
using namespace std;
class grandparent{
    public:
    int a=2;
};
class parent: public grandparent{
    public:
    int b=3;
};
class parent: public parent{
    public:
        void show(){
            cout<<"product="<<a*b;
        }
};
int main(){
    child obj;
    obj.show();

    return 0;
}