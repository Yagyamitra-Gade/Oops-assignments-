#include <iostream>
using namespace std;

class calculate_bill
{ public:
  void product(float a,float b)
  {
   cout<<"BILL OF TWO PRODUCTS IS "<<(a+b)<<endl;
   cout<<endl;
  }

  void product(float d ,float e ,float f)
  {
   cout<<"BILL OF THREE PRODUCT IS "<<(d+e+f)<<endl;
   cout<<endl;
  }
  
  void product(float g,float h, float i,float j )
  {
   cout<<"BILL OF FOUR PRODUCTS IS "<<(g+h+i+j)<<endl;
   cout<<endl;
  }
};

int main()
{
 cout<<"#######################################"<<endl;
 cout<<"##### TOTAL BILLS FOR CUSTOMERS   #####"<<endl;
 cout<<"##### PURCHING DIFFERENT PRODUCTS #####"<<endl;
 cout<<"#######################################"<<endl;
 cout<<endl;
 calculate_bill bill;
 bill.product(500.5f,450.5f);
 bill.product(982.8,678.2f,850);
 bill.product(500,400,600,800);
 return 0;
}
 