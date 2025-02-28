// 2.	What are virtual functions? Manipulate the above program to discuss the concept of run time polymorphism through virtual functions. 

#include<iostream>
using namespace std;

class Base
{
    public:
    void virtual show()
    {cout<<"This is a base class\n";}
};
class Derived:public Base{

    public:
    void show()
    {cout<<"This is derived Class\n";}
};

int main()
{
    Base b;
    Derived d;
    Base *bptr;
    bptr = &b;
    bptr->show();
    bptr = &d;
    bptr->show();
    
    return 0;
}



