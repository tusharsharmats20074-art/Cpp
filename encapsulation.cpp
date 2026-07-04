#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;
    char grade;

public:
    
    void setData(int r, float m, char g) {
        rollNo = r;
        marks = m;
        grade = g;
    }

    
    void displayData() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;  
    s.setData(101, 89.5, 'A'); 
    s.displayData(); 
    
    return 0;
}
