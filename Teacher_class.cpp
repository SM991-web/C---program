#include <iostream>
#include <string>
using namespace std;

class Teacher {
    // properties
    public:
    string name;
    string dept;
    string subject;
    float salary;
     
    //  methods
    void changeDept(string newDept) {
        dept = newDept;
    }

};

int main() {
    Teacher t1;
    // Teacher t2;
    // Teacher t3;
    t1.name = "Mr. John";
    t1.dept = "Math";
    t1.subject = "Algebra";
    t1.salary = 50000;
    
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;

    return 0;

}