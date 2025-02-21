// Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that allows a class to inherit properties and behaviors (methods) from another class. This promotes code reusability and establishes a relationship between classes.

// Types of Inheritance in C++
// Single Inheritance: A class inherits from one base class.
// Multiple Inheritance: A class inherits from more than one base class.
// Multilevel Inheritance: A class is derived from another derived class.
// Hierarchical Inheritance: Multiple classes inherit from a single base class.

#include <iostream>
using namespace std;

class Base {
public:
    void display(){
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); // Base class function
    obj.show();    // Derived class function
    return 0;
}



