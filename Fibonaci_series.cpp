#include <iostream>

int main(){
    int num1=0,num2=1,num3=0,n;
    std::cout<<"Enter the number of terms";
    std::cin>>n;
    std::cout<<"fibonacci series"<<num1<<","<<num2<<","<<std::endl;
    num3=num1+num2;
    if (n<1){
        std::cout<<"please enter a positive number"<<std::endl;
        return 1;
    }
    std::cout<<"Fibonacci Series"<<num1<<","<<num2<<std::endl;
    for (int i=3;i<=n;++i){
        num3=num1+num2;
        std::cout<<","<<num3;
        num1=num2;
        num2=num3;
    }
    std::cout<<std::endl;

}