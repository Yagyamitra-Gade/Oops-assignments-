#include<iostream>
using namespace std;

class calculate_average
{public:
  void average(int a,int b)
  {
    cout<<"AVERAGE OF TWO INTEGER NUMBER IS :"<<(a+b)/2<<endl;
  }
  void average(int x,int y, int z)
  {
    cout<<"AVERAGE OF THREE INTEGER NUMBER IS :"<<(x+y+z)/3<<endl;
  }
  void average(float p, float q)
  {
    cout<<"AVERAGE OF TWO FLOAT NUMBER IS : "<<(p+q)/2<<endl;
  }
};
int main()
{
  calculate_average c1;
  cout<<"##### STUDENT RESULT ##### "<<endl;
  c1.average(10,12);
  c1.average(10,20,30);
  c1.average(10.5f,20.5f);

  return 0;
}
