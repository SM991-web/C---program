#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    // Data member in class
    string name;
    int age;

    void introduce() {
        cout << "Hi, my name is " << name << " and I am "<< age << " years old." << endl;
    }
};

int main() {
    // Create an object
    Person person1;

    // Accessing data members
    person1.name = "Alice";
    person1.age = 30;

    // Call the introduce member method
    person1.introduce();

    return 0;
}