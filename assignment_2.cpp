#include<iostream>
using namespace std;

class employee_information
{ public:
  int emp_ID;
  string emp_name;
  int emp_age;
  string emp_gender;

  void display()
  {
    cout<<"#### EMPLOYEE DETAILS ####"<<endl;
    cout<<"EMPLOYEE ID IS : "<<emp_ID<<endl;
    cout<<"EMPLOYEE NAME IS : "<<emp_name<<endl;
    cout<<"EMPLOYEE AGE IS : "<<emp_age<<endl;
    cout<<"EMPLOYEE GENDER IS : "<<emp_gender<<endl;
  }
};
int main()
{
  employee_information i1;
  i1.emp_ID=101;
  i1.emp_name="sarthak";
  i1.emp_age=35;
  i1.emp_gender="M";
  i1.display();

  return 0;
}