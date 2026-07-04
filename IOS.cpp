#include <iostream>
using namespace std ; 

int main(){
    float num = 123.456789;

    cout<<"Default output:"<<num<<endl;

    cout.setf(ios::fixed);
    cout<<"Fixed format:"<<num<<endl;

    cout.setf(ios::showpoint);
    cout<<"Showpoint:"<<num<<endl;

    cout.precision(2);
    cout<<"Precision(2)"<<num<<endl;

    cout.width(10);
    cout<<"Width(10):"<<num<<endl;
    
    cout.fill('*');
    cout<<"Fill with*:"<<num<<endl;

    return 0;
}