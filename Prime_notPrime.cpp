#include <iostream>

class Prime_notPrime {
private:
    int num;
public:
    Prime_notPrime(int n);
};

Prime_notPrime::Prime_notPrime(int n) {
    num = n; 

    if (num <= 1) {
        std::cout << num << " is not prime" << std::endl;
        return;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        std::cout << num << " is prime" << std::endl;
    } else {
        std::cout << num << " is not prime" << std::endl;
    }
}

int main() {
    Prime_notPrime p1(10); 
    return 0;
}