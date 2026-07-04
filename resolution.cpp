#include <iostream>
using namespace std;

int x=50;

namespace demo{
    int x=40;
}
int main(){
    int x=10;

    cout<<"LocalValueofx="<<x;

    cout<<"\nGlobalValueofx="<<x;
    cout<<"\ndemonamespacevalueofx="<<demo::x;
    return 0;
}