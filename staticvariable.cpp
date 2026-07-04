#include <iostream>
using namespace std;

class student{
public:
    static int count;
    student(){
        count++;
    }

    void display(){
        cout<<"Number of object created:"<<count <<endl;
    }
};

int student::count=0;

int main(){
    student s1,s2,s3;
    s1. display();
    s2. display();
    s3. display();
    
    return 0;
}
