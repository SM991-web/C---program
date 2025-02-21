#include<iostream>
using namespace std;

class Student{
    private:
    int roll_no;
    char name[20];
    int marks[3];
    int Total(void);

    public:
    inline int set_data(int r, const char n[], int m[]);
    void display_data();
};
inline int Student::set_data(int r, const char n[], int m[]){
    roll_no = r;
    for (int i=0;i<20;i++){
        name[i]=n[i];
        if (name[i]=='\0'){
            break;
        }
        for (int i=0; i<3;i++){
            marks[i]=m[i];
        }
    }
    return 0;
    
}
int Student::Total(){
    int sum=0;
    for (int i=0;i<3;i++){
        sum+=marks[i];
    }
    return sum;
}
void Student::display_data(){
    cout<<"roll no:"<<roll_no<<endl;
    cout<<"Name:"<<name<<endl;
    for (int i=0;i<3;i++){
        cout<<"Marks in subject "<<i+1<<":"<<marks[i]<<endl;
    }
    cout<<"Total:"<<Total()<<endl;
    
}


int main(){
    Student s;
    int marks_arr[]={90, 80, 70};
    s.set_data(1, "John", marks_arr);
    s.display_data();
    Student s2;
    int marks_arr2[]={85, 75, 65};
    s2.set_data(2, "Jane", marks_arr2);
    s2.display_data();
    return 0;
}