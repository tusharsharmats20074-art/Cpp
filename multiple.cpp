#include<iostream>
using namespace std;
class parent{
    public:
    int a=5;
};
class parent2{
    public:
    int b=10;
};
class child:public parent 1, public parent 2{
    public:
    void show(){
        cout<<"SUM"=<<a+b;
    }
};
int main(){
    child obj;
    obj.show();
    return 0;
}