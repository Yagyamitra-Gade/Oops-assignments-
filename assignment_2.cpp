#include<iostream>
 using namespace std;

 class student_details
 {
  public:
  string s_name;
  int s_id ;
  int s_rollno;
  int s_div;
  string s_gender;

  void display()
  {
     cout<<" #### STUDENT DETAILS #### "<<endl;
     cout<<"STUDENT NAME IS : "<<s_name<<endl;
     cout<<"STUDENT ID IS : "<<s_id<<endl;
     cout<<"STUDENT ROLL.NO IS :"<<s_rollno<<endl;
     cout<<"STUDENT DIV IS : "<<s_div<<endl;
     cout<<"STUDENT GENDER IS : "<<s_gender<<endl;
  }
};

int main()
{
    student_details s1;
    s1.s_name = "SAKSHAM";
    s1.s_id = 98765;
    s1.s_rollno = 35;
    s1.s_div = 2;
    s1.s_gender = "Male";
    
    s1.display();

    return 0;
}