#include <iostream>
using namespace std;

int main(){
    float num = 123.456789;
    
    cout<<"Default output:"<<num<<endl;

    cout<<fixed<<setprecision(2);
    cout<<"Fixed with precision(2):"<<num<<endl;

    cout<<setw(10)<<"Width(10):"<<num<<endl;

    cout<<setfill('*')<<setw(10)<<num<<endl;

    cout<<left<<setw(10)<<num<<endl;

    cout<<right<<setw(10)<<num<<endl;

    return 0;
}