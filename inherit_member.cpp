#include<iostream>
using namespace std;

class Demo{
    protected:
        int a;

    public:
        void showvalue(){
            cout<<"Value of a is = "<<a<<endl;
        }
};
class show:public Demo{
    public:
        void getdata(){
            cout<<"Enter the value of a: ";
            cin>>a;
        }
        void showdata(){
            this->a = a;
        }
};

int main(){
     
    show s1;
    s1.getdata();
    s1.showvalue();
    
    return 0;

}

