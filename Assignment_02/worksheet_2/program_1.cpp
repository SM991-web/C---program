// This worksheet will teach you how to overload various operators to be used with user defined data types.

// 1.	Overload the operator ‘-‘(unary operator) via member function and friend function.



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
    void show(){
        cout<<real<<"-"<<img<<"i"<<endl;
    }
   friend Demo operator-(const Demo& obj);
};

// Friend function definition
Demo operator-(const Demo& obj) {
    return Demo(-obj.real, -obj.img);
}
int main(){
    Demo d1;
    d1.get();
    d1.show();
    Demo result = operator-(d1); 
    cout<<"Two complex numbers subtraction is : ";
    result.show();

    return 0;
}
