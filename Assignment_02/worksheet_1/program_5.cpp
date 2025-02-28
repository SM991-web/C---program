// 5.	Demonstrate the concept of Constructors and Destructors in Single Inheritance. 
// Discuss the need of virtual destructor. 
// Point out the execution sequence of constructors and destructors during the program execution.

#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor\n";
    }
    ~Base()
    {
        cout<<"Base Destructor\n";
    }
};
class Derived:public Base{

    public:
    Derived()
    {
        cout<<"Derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived Destructor\n";
    }
};

int main()
{
    Derived d;
    return 0;
}

#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor\n";
    }
    virtual ~Base()
    {
        cout<<"Base Destructor\n";
    }
};
class Derived:public Base{

    public:
    Derived()
    {
        cout<<"Derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived Destructor\n";
    }
};
int main(){
    Base* ptr = new Derived();
    delete ptr;
    return 0;
}
