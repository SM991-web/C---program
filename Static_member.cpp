#include <iostream>
#include <cstring>

class Student {
private:
    int roll_no;
    char name[20];
    int marks[3];
    static int student_count; 

    int total() const { 
        return marks[0] + marks[1] + marks[2];
    }

public:
    Student(int r, const char* n, int m1, int m2, int m3) { 
        roll_no = r;
        strncpy(name, n, 20);
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        student_count++;
    }

    static int get_student_count() { 
        return student_count;
    }

    void display_data() const; 
};


int Student::student_count = 0;


inline void Student::display_data() const {
    std::cout << "Roll No: " << roll_no << ", Name: " << name << ", Total Marks: " << total() << std::endl;
}

int main() {
    Student s1(1, "John", 85, 90, 88);
    Student s2(2, "Jane", 78, 82, 80);

    s1.display_data();
    s2.display_data();

    std::cout << "Total number of students: " << Student::get_student_count() << std::endl;

    return 0;
}