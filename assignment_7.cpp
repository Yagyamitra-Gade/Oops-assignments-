#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
    long contact;

    void display()
    {
        cout<<"##### STUDENT DETAILS #####"<<endl;
        cout<<"NAME OF STUDENT IS     : "<<name<<endl;
        cout<<"AGE OF STUDENT IS      : "<<age<<endl;
        cout<<"CONTACT OF STUDENT IS  : "<<contact<<endl;
    }
};

class student:public person
{
public:
    int rollno;
    string branch;

    void showdata()
    {
        cout<<"ROLL.NO OF STUDENT IS  : "<<rollno<<endl;
        cout<<"BRANCH OF STUDENT IS   : "<<branch<<endl;
    }
};

int main()
{
    student s1;
    s1.name = "prince";
    s1.age = 18;
    s1.contact = 9632514875;
    s1.rollno = 23;
    s1.branch = "CSE";
    s1.display();
    s1.showdata();
    return 0;
}