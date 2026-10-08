#include <iostream>
using namespace std;

class employee
{ public:
    string e_name;
    int e_id;
    float e_salary;

    employee(string n,int i,float s)
    {
        e_name = n;
        e_id = i;
        e_salary = s;
        cout<<"##### EMPLOYEE DETAILS ARE SHOWN ##### "<<endl;
    }

    ~employee()
    {
        cout<<"##### EMPLOYEE DETAILS ARE DELETED ##### "<<endl;
    }

    void display_information()
    {
        cout<<"EMPLOYEE NAME IS :     "<<e_name<<endl;
        cout<<"EMPLOYEE ID IS :       "<<e_id<<endl;
        cout<<"EMPLOYEE SALARY IS : "<<e_salary<<endl;
    }
};

int main()
{
    employee e1("RAJ",201,65000);
    e1.display_information();
    return 0;
} 