#include <iostream>
using namespace std;

class Task{
private:
    int privateData;

protected:
    int protectedData;
    
public:
    Task(int pvt, int prot){
        privateData = pvt;
        protectedData = prot;
    }  

    friend void display(Task obj);  
};

void display (Task obj) {
    cout<< "Private Data:" <<obj.privateData <<endl;
    cout<< "Protected Data:" <<obj.protectedData <<endl;
}

int main(){
    Task t1(10,20);
    display(t1);

    return 0;
}