#include <iostream>
using namespace std;
class sum{
    int a,b;
    public:
    inline int add(int a,int b) {
        return a + b;
    }
    int display(int a, int b) {
        return add(a, b);
    }

};


int main() {
    sum obj;
    cout << obj.display(10, 20);
    return 0;
    
}
