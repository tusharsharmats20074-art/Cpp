include <iostream>
using namespace std ; 

int main (){
    char ch;
    char str[100];

    cout<<"Enter a character";
    ch = cin.get();
    cout<<"You entered character:"<<ch <<endl;

    cin.ignore();

    cout<<"Enter a string:";
    cin.getline(str,100);
    cout<<"You entered string:" <<str<<endl;

    return 0;

}