#include<iostream>
using namespace std;

class Overload
{
    private:
        int real;
        int img;

    public: 
    void Complex (int r, int i)
    {
        real = r;
        img = i;
        cin>>real>>img;
    }
    Overload operator-(const Overload &obj)
    {
        Overload temp;
        temp.real = real - obj.real;
        temp.img = img - obj.img;
        return temp;
    }
    void display()
    {
        cout<<real<<"-i"<<img<<endl;
        
    }

};

int main()
{
    int x = 0, y = 0;
    Overload obj1, obj2, obj3;
    obj1.Complex(x,y);
    obj2.Complex(x,y);
    obj3 = obj1 - obj2;
    obj3.display();
    return 0;
}