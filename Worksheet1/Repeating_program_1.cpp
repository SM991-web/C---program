#include<iostream>
using namespace std;

class rectangle {

    private:float length;
            float breadth;

    public:
    void getData();
    float area();
};

void rectangle::getData(){
        cout<<"Enter lenght:";
        cin>>length;
        cout<<"Enter breadth:";
        cin>>breadth;
} 

float rectangle::area(){
    return length*breadth;
}

int main(){
    rectangle rect;
    rect.getData();
    cout<<rect.area()<<endl;
    return 0;
}