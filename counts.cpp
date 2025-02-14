#include <iostream>
using namespace std;
class counts{
    private:
    static int count;
    public:
    count(){
        count++;

    }
    static int getcount(){
        return count;
    }
};

int counts::count=0;

int main(){
    static counts staticobj;
    counts obj1,obj2;
    cout << "Total counted:"<<counts::getcount()<<endl;
    return 0;
}