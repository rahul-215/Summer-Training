// Implement deposit() and withdraw() methods.Display final balance


#include<iostream>
using namespace std;

class BankAccount
{
    public:
    double balance = 0;

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }

    void display()
    {
        cout << "Balance : " << balance;
    }
};


int main(){
    BankAccount b;
    b.deposit(7000);
    b.withdraw(2500);
    b.display();
    return 0;
}
