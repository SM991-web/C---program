#include<iostream>
using namespace std;

class rectangle {

    private:
    float length;
    float breadth;

    public:
    void getData(float l,float b);
    float area();
};
void rectangle::getData(float l,float b){
        length=l;
        breadth=b;
}
float rectangle::area(){
        return length*breadth;
}

int main(){
    rectangle rect;
    float x,y;

    cout<<"Enter lenght:";
    cin>>y;
    cout<<"Enter breadth:";
    cin>>x;
    rect.getData(y,x);
    cout<<"Area is:"<<rect.area()<<endl;
    return 0;
}