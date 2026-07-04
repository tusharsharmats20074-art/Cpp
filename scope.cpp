#include <iostream>
using namespace std;

int x = 50;

int main(){
    int x= 10;

    cout<<"LocalValueofX="<<x;
    cout<<"\nGlobalvalueofx="<<::x;

    return 0;
}
