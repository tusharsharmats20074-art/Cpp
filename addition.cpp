#include <iostream>
using namespace std;

class Addition {
private:
    int num1;
    int num2;

public:
    
    Addition(int a, int b) {
        num1 = a;
        num2 = b;
    }

   
    int add() {
        return num1 + num2;
    }

    void display() {
        cout << "Sum of " << num1 << " and " << num2 << " is: " << add() << endl;
    }
};

int main() {
    Addition obj(10, 20);
    obj.display();

    return 0;
}