#include <iostream>
using namespace std;

class ClassA {
private:
    int privateData;
    
protected:
    int protectedData;
    
public:
    ClassA(int p,int q){
        privateData= p;
        protectedData= q;
    }    

    friend class ClassB;
};

class ClassB{
public:
    void display(ClassA obj){
        cout<<"Private Data:" <<obj.privateData <<endl;
        cout<<"Protected Data:" <<obj.protectedData <<endl;
    }    
};

int main(){
    ClassA a1(50,100);
    ClassB b1;

    b1.display(a1);

    return 0;
}