//Diference between Function overloading and Function overriding with the help of the example
#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void show()
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
    bptr = &d;
    bptr->show();
    
    return 0;
}

#include<iostream>
using namespace std;

class Demo{
    int real;
    int img;

    public:
    Demo() : real(0), img(0) {}
    
    Demo(int r,int i):real(r),img(i){}

    void get(){
        cout<<"Enter Real Number:";
        cin>>real;
        cout<<"Enter Imaginary Number:";
        cin>>img;
    }
    void get(int r,int i){
        real=r;
        img=i;
    }
    Demo operator+(const Demo& obj) {
        return Demo(real + obj.real, img + obj.img);
    }
    void show(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};
int main(){
    Demo d1,d2;
    d1.get();
    d1.show();
    d2.get();
    d2.show();
    Demo result = d1.operator+(d2); 
    cout<<"Two complex numbers sum is : ";
    result.show();

    return 0;
}
