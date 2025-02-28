// 5.	Overload the new and delete operators to perform the intended task

#include<iostream>
using namespace std;

class DMA{
    int a;
    public:
    DMA() : a(0) {}

    void get() { 
        cout << "Enter a number: "; 
        cin >> a; 
    }
    void show() { 
        cout << "Value: " << a << endl; 
    }

    void* operator new(size_t size) {
        cout << "Overloaded new operator" << size << endl;
        return ::operator new(size);
    }
    void operator delete(void* p) {
        cout << "Overloaded delete\n";
        ::operator delete(p);
    }
    void* operator new[](size_t size) {
        cout << "Overloaded new[] operator: " << size<<endl;
        return ::operator new(size);
    }
    void operator delete[](void* p) {
        cout << "Overloaded delete[]"<<endl;
        ::operator delete[](p);
    }
};

int main() {
    DMA* d = new DMA();
    d->get();
    d->show();
    delete d;

    DMA* d_array = new DMA[5];
    delete[] d_array;

    return 0;
}