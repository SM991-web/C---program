#include<iostream>
#include<string>

class Calculator{


    private:
    int num1 , num2;

    public:
        Calculator(int n1 , int n2);
};
Calculator::Calculator(int n1 , int n2){
    num1 = n1;
    num2 = n2;
    std::cin>>num1;
    std::cin>>num2;
}
int main(){
    Calculator c1(10,20);
    return 0;
}