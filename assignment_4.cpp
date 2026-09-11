#include <iostream>
using namespace std;

class book
{ private:
    string book_name;
    int book_ID;
    string book_publisher;

  public:
    book()
    {
       book_name = " SCIENCE ";
       book_ID = 96;
       book_publisher = "NCERT";
    }
    void display()
    {
       cout<<"#### BOOK STORE ####"<<endl;
       cout<<"BOOK NAME IS "<<book_name<<endl;
       cout<<"BOOK ID IS : "<<book_ID<<endl;
       cout<<"BOOK PUBLISHER IS : "<<book_publisher<<endl;
    }
    book(string n ,int id ,string p )
    {
       book_name = n;
       book_ID = id;
       book_publisher = p;
    }
};
int main()
{
    book b1;
    book b2("MATHS",95,"ARIHANT");
    b1.display();
    b2.display();

    return 0;
}
