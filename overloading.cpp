#include <iostream>
using namespace std;

class Demo 
{
private:
    int a;
    int b;
public:
    void getData() 
    {
        cin>>a>>b;
    }

    Demo operator+() 
    {
        Demo temp;
        temp.a = +a;
        temp.b = +b;
        return temp;
    }

    void display() 
    {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() 
{
    Demo obj1, obj2;
    cout << "Enter values for a and b: ";
    obj1.getData();

    cout << "Original values: ";
    obj1.display();

    obj2 = +obj1; 

    cout << "Values after unary minus: ";
    obj2.display();

    return 0;
}