#include<iostream>
using namespace std;

class rectangle {

    private:
    float length;
    float breadth;

    public:
    void getData(){
        cout<<"Enter lenght:";
        cin>>length;
        cout<<"Enter breadth:";
        cin>>breadth;
    }
    float area(){
        return length*breadth;
    }
};

int main(){
    rectangle rect;
    rect.getData();
    cout<<"Area is:"<<rect.area()<<endl;
    return 0;
}