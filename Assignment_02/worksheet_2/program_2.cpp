// 2.	Overload the operator ++ as both prefix and postfix via the use of member function.

#include<iostream>
using namespace std;

class Pre_post {
    int a;
public:
    Pre_post() : a(0) {}
    Pre_post(int value) : a(value) {}

    void get() {
        cout << "Enter a number: ";
        cin >> a;
    }

    Pre_post operator++() { return Pre_post(++a); }  
    Pre_post operator++(int) { Pre_post temp = *this; a++; return temp; }  

    void show() { cout << "Value: " << a << endl; }
};

int main() {
    Pre_post p;
    p.get();
    p.show();

    p = p++;
    p.show();

    p = ++p;
    p.show();

    return 0;
}
