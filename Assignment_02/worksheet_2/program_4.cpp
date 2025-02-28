// 4.	Overload the special operators >> and << to perform the intended task.


#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out; 
}
istream& operator>>(istream& in, Complex& c) {
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imag;
    return in; 
}

int main() {
    Complex c1;
    cin>>c1;
    cout << "Complex Number: " << c1 << endl;
    return 0;
}