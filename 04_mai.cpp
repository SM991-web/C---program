#include <iostream>
using namespace std;

class cse {
    public:
        int roll; 
        void Print() {
            cout << "Roll: " << roll << endl;
        }
};

int main() {
    cse student;
    student.roll = 1;
    student.Print();
    return 0;
}