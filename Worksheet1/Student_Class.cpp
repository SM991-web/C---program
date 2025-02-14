#include<iostream>
using namespace std;

class Student{
    private:
    int roll_no;
    char name[20];
    int marks[3];
    int Total(void);

    public:
    void set_data(int rollno, char _name[20], int _marks[3]){
        rollno = roll_no;
        for(int i=0; i<20; i++){
            _name[i] = name[i];
        }
        for(int i=0; i<3; i++){
            _marks[i] = marks[i];
        }
    }
    void display_data(){
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: ";
        for(int i=0; i<3; i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"Total: "<<Total()<<endl;
    }
};

int main(){
    Student s;
    s.set_data(1, "John", {90, 80, 70});
    s.display_data();
    return 0;
}