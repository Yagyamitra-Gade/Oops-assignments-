#include<iostream>
using namespace std;

template<typename T>

void swap(T a,T b)
{
    cout<<" NUMBERS BEFORE SWAPING : "<<a<<" | "<<" "<<b<<endl;
    T c;
    c = a;
    a = b;
    b = c;
    cout<<" NUMBERS AFTER SWAPING : "<<a<<" | "<<" "<<b<<endl;
};
int main()
{cout<<"##################################"<<endl;
 cout<<"##### SWAPING OF TWO NUMBERS #####"<<endl;
 cout<<"##################################"<<endl;
 cout<<"EMPLOYEE IDS : "<<endl;
 swap(10,20);
 cout<<"ROOM NO. : "<<endl;
 swap(20.5f,40.5f);
 cout<<"TASK PRIORITY"<<endl;
 swap(65.55f,89.99f);
 return 0;
}
