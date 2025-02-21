#include<iostream>
using namespace std;

class rectangle{
    protected:
        int length;
        int breadth;

    public:
        void getdata(int l, int b){
            length = l;
            breadth = b;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
        }
};

class area:public rectangle{
    public:
        void getarea(){
            cout << "Area of rectangle is: " << length*breadth << endl;
        }
};
class perimeter:public rectangle{
    public:
        void getperimeter(){
            cout << "Perimeter of rectangle is: " << 2*length+2*breadth << endl;
        }
};

int main(){
    area a;
    perimeter p;
    a.getdata(0, 0);
    a.getarea();
    p.getdata(0, 0);
    p.getperimeter();
    return 0;
}

