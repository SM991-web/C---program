#include<iostream>
using namespace std;

class Memory
{
    void* operator new[](size_t size) {
        cout << "Custom new[] called. Allocating " << size << " bytes.\n";
        return ::operator new(size);  
    }

    
    void operator delete[](void* ptr) {
        cout << "Custom delete[] called. Freeing memory.\n";
        ::operator delete(ptr);  
    }
};

int main() {
    
    CustomArray* arr = new CustomArray[3];

    
    delete[] arr;

    return 0;
}