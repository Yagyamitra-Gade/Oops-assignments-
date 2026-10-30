#include <iostream>
#include <string> 
using namespace std;

class vehicle
{ 
public:
    string brand;

    void display()
    {  
        cout << "VEHICLE BRAND IS : " << brand << endl;
    }
};

class car : public vehicle
{
public:
    int c_model;
    string c_colour;
    int c_speed;

    void showcar()
    {  
        cout << "##### CAR DETAILS #####" << endl;
        display();
        cout << "CAR MODEL IS : " << c_model << endl;
        cout << "CAR COLOUR IS : " << c_colour << endl;
        cout << "CAR SPEED IS : " << c_speed << endl;
        cout << endl;
    }
};

class bike : public vehicle
{
public:
    int b_model;
    string b_colour;
    int b_speed;

    void showbike()
    { 
        cout << "##### BIKE DETAILS #####" << endl;
        display(); 
        cout << "BIKE MODEL IS : " << b_model << endl;
        cout << "BIKE COLOUR IS : " << b_colour << endl;
        cout << "BIKE SPEED IS : " << b_speed << endl;
        cout << endl;
    }
};

class bus : public vehicle
{
public:
    int bus_model;
    string bus_colour;
    int bus_speed;

    void showbus()
    { 
        cout << "##### BUS DETAILS #####" << endl;
        display();
        cout << "BUS MODEL IS : " << bus_model << endl;
        cout << "BUS COLOUR IS : " << bus_colour << endl;
        cout << "BUS SPEED IS : " << bus_speed << endl;
        cout << endl;
    }
};

int main()
{
    car c1;
    bike b1;
    bus bus1;
    
    c1.brand = "HYUNDAI";
    c1.c_model = 2024;
    c1.c_colour = "BLACK";
    c1.c_speed = 120;
    
    b1.brand = "KAWASAKI";
    b1.b_model = 2019;
    b1.b_colour = "WHITE";
    b1.b_speed = 375;
    
    bus1.brand = "TATA";
    bus1.bus_model = 2020;
    bus1.bus_colour = "GRAY";
    bus1.bus_speed = 90;
    
    c1.showcar();
    b1.showbike();
    bus1.showbus();

    return 0;
}
   