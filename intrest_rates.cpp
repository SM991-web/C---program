#include <iostream>
#include <cmath>

int main(){
    int a,b,c;
    std::cout<<"Enter Principal amount:"<<std::endl;
    std::cin>>a;
    std::cout<<"Enter Rate of Interest:"<<std::endl;
    std::cin>>b;
    std::cout<<"Enter Time Period:"<<std::endl;
    std::cin>>c;
    std::cout<<"Simple Interest is:"<<(a*b*c)/100<<std::endl;
    std::cout<<"Compound Interest is:"<<a*(pow((1+b/100),c))<<std::endl; 
    return 0;

}