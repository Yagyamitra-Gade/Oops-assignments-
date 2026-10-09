#include <iostream>
using namespace std;
class person
{
    public:
    string first_name;
    string last_name;
    string gender;

    void display()
    {
        cout<<"##### PERSON INFORMATION ##### \n"<<endl;
        cout<<"FIRST NAME OF PERSON IS : "<<first_name<<endl;
        cout<<"LAST NAME OF PERSON IS  : "<<last_name<<endl;
        cout<<"GENDER OF PERSON IS     :\n"<<gender<<endl;
    }
};
 class employee:public person 
{
    public:
    string branch;
    int age;

    void show()
    {
        cout<<"##### EMPLOYEE INFORMATION #####\n"<<endl;
        cout<<"BRANCH OF EMPLOYEE IS    : "<<branch<<endl;
        cout<<"AGE OF EMPLOYEE IS       : \n"<<age<<endl;
    }
};

 class manager:public employee
 {
   public:
     float salary;

     void info()
     {
         cout<<"##### MANAGER INFORMATION ##### \n"<<endl;
         cout<<"SALARY OF MANAGER IS : "<<salary<<endl;
     }
};
 int main()
 {
   manager m1;
   m1.first_name = "suraj";
   m1.last_name = "patil";
   m1.gender = "MALE";
   m1.branch = "CSE";
   m1.age = 20;
   m1.salary = 65000; 
   m1.display();
   m1.show();
   m1.info();
   return 0;
}