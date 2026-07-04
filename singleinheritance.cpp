#include<iostream>
using namespace std;
class parent{
    public:
    int a=10;
};
class child: public parent{
    public:
    void show(){
        cout<<"value of a="<<a;
    }
};
int main(){
    child obj;
    obj.show()

    return 0;
}