// This worksheet will help you with the basic concept of inheritance, pointers to derived class, run time polymorphism, virtual functions, pure virtual functions, abstract base class. 

// 1.	Write a program where you have a Base class publicly inherited by the 
// Derived class and both the classes having print() publicly defined. 
// Define a pointer of the base class and derived class. 
// Pass objects of base class and derived class to pointer variables and discuss the outcomes thereby accessing the print().


#include<iostream>
using namespace std;

class Base
{
    public:
    void print()
    {cout<<"This is a base class\n";}
};
class Derived:public Base{

    public:
    void print()
    {cout<<"This is derived Class\n";}
};

int main()
{
    Base b;
    Derived d;
    Base *bptr;
    Derived *dptr;
    
    bptr = &b;
    bptr->print();

    dptr = &d;
    bptr->print();
    
    return 0;
}



