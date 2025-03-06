#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    char* ownerName;
    
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
        ownerName = new char[1];
        ownerName[0] = '\0';
    }

public:

    static BankAccount createDefaultAccount() {
        return BankAccount();
    }


    BankAccount(int accNum, double bal, const char* name) {
        accountNumber = accNum;
        balance = bal;
        ownerName = new char[strlen(name) + 1];
        strcpy(ownerName, name);
    }
    

    BankAccount(const BankAccount& other) {
        accountNumber = other.accountNumber;
        balance = other.balance;
        ownerName = new char[strlen(other.ownerName) + 1];
        strcpy(ownerName, other.ownerName);
    }

    ~BankAccount() {
        delete[] ownerName;
        cout << "Destructor called for Account: " << accountNumber << endl;
    }


    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, 5000.0, "John Doe");
    cout << "\nAccount 1 Details:" << endl;
    acc1.display();

    // Using Copy Constructor (Deep Copy)
    BankAccount acc2 = acc1;
    cout << "\nAccount 2 (Copied from Account 1):" << endl;
    acc2.display();

    // Using Default Constructor (Through Static Function)
    BankAccount acc3 = BankAccount::createDefaultAccount();
    cout << "\nAccount 3 (Default Account):" << endl;
    acc3.display();
    
    return 0;
}
