#include <iostream>
using namespace std;

class Bankaccount {
private:
    double Balance;

public:
    Bankaccount(double initBal) {
        if (initBal > 0) {
            Balance = initBal;
        } else {
            Balance = 0;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {  // Fixed syntax
            Balance += amount;
        } else {
            cout << "Amount must be positive" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= Balance) {
            Balance -= amount;
        } else {
            cout << "Withdrawal amount exceeded account balance" << endl;
        }
    }

    double getBalance() {
        return Balance;
    }
};

int main() {
    Bankaccount myAccount(100);

    myAccount.deposit(2000);
    cout << "Balance is: " << myAccount.getBalance() << endl;

    myAccount.deposit(200);
    cout << "Balance is: " << myAccount.getBalance() << endl;

    return 0;
}
