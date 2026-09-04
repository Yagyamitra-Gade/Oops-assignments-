#include<iostream>
using namespace std;

class book_details
{
  public:
  int bookID;
  string name;
  string publisher;
  float price;

  void display_information()
  {
     cout<<" #### BOOK_DETAILS #### "<<endl;
     cout<<"Book Id is : "<<bookID<<endl;
     cout<<"Book name is : "<<name<<endl;
     cout<<"Book Publisher :
"<<publisher<<endl;
     cout<<"Book Price is : "<<price<<endl;
  }
};

int main()
{
    book_details b1;
    b1.bookID=98;
    b1.name="coumpter Science";
    b1.publisher="Arihant";
    b1.price=450.60;
    b1.display_information();

    return 0;
}
