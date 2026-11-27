#include<iostream>
using namespace std;

template<typename T>

void larger(T a,T b)
{
  if(a > b)
  {
    cout<<"A IS GREATER NUMBER "<<endl;
  }
  else
  {
    cout<<"B IS GREATER NUMBER "<<endl;
  }
};
int main()
{
  cout<<"##### GREATER NUMBER BETWEEN A AND B #####"<<endl;
  larger(45,35);
  larger(65.5f,80.5f);
  larger(45.65f,67.55f);
  return 0;
}
