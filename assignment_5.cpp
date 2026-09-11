#include <iostream>
using namespace std;

class student
{ 
public:
    string name;
    int rollno;
    float percentage;
    int marks;

    void display()
    {
        cout << "NAME OF STUDENT IS :" <<this-> name << endl;
        cout << "ROLL.NO OF STUDENT IS : " << this->rollno << endl;
        cout << "PERCENTAGE OF STUDENT IS : " << this->percentage << endl;
        cout << "MARKS OF STUDENT IS : " << this->marks << endl;
    }
};
student(string name, int rollno,float percentage,  int marks) {
    this->name = name;
    this->rollno = rollno;
    this->percentage = percentage;
    this->marks = marks;
}
int main() {
    student s1("JAY",56,86.5,450);
    s1.display();
    return 0;
}
