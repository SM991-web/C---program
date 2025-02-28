// 3.	Overload the / and % (binary operators) via the use of member function and friend function.

#include<iostream>
using namespace std;

class d_and_b {
    int a;
    public:
    d_and_b() : a(0) {}
    d_and_b(int value) : a(value) {}

    void get() {
        cout << "Enter a number: ";
        cin >> a;
    }
    d_and_b operator/(const d_and_b& obj) {
        return d_and_b(a / obj.a);
    }
    friend d_and_b operator%(const d_and_b& obj1, const d_and_b& obj2);
    
    void show() { cout << "Value: " << a << endl; }

};   
d_and_b operator%(const d_and_b& obj1, const d_and_b& obj2) {
    return d_and_b(obj1.a % obj2.a); 
}
int main(){
    d_and_b d1,d2;
    d1.get();
    d1.show();
    d2.get();
    d2.show();
    d_and_b result = d1.operator/(d2); 
    cout<<"Two numbers division is : ";
    result.show();
    result = d1%d2; 
    cout<<"Two numbers modulus is : ";
    result.show();

    return 0;
}