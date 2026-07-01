// Create a class BankAccount that demonstrates encapsulation using private data members and public methods.


#include<iostream>
using namespace std;

class BankAccount
{
    private:
    double balance;
    
    public:
    BankAccount (double b)
    {
        balance = b;
    }

    void deposit(double a)
    {
        balance += a;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount a(500);
    a.deposit(250);
    cout << a.getBalance() << endl;
    
    return 0;
}