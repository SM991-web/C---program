// 4.What is a pure virtual function? 
// Write a program where you have a Base class publicly inherited by the Derived class and both the classes having print() publicly defined. 
// Redefine print() in Base class as pure virtual function. 
// Define a pointer of the base class and derived class. 
// Pass objects of base class and derived class to pointer variables and discuss the outcomes thereby accessing the print(). 
// Point out the abstract class in the program and features of the abstract class.

#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void print()=0;
    // {cout<<"This is a base class\n";}
};
class Derived:public Base{

    public:
    void print()
    {cout<<"This is derived Class\n";}
};

int main()
{
    //Base b; will give error 
    Derived d;
    Base *bptr;
    Derived *dptr;

    bptr = &b;
    bptr->print();

     dptr=&d;
    dptr->print();
    
    return 0;
}



