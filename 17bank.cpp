#include <iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount)
    {
        balance += amount;
        std::cout << "Deposit successful. Current balance: " << balance << endl;
    }

    // Member function to withdraw money
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrawal successful. Current balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        }
    }
};

int main()
{
    // Create a bank account object
    int sacno = 123;
    double Opening_balance, deposit_amt, withdrawal_amt;
    Opening_balance = 1000;
    cout << "A/c. No." << sacno << " Balance: " << Opening_balance << endl;

    BankAccount account(sacno, 1000.0);

    // Deposit money into the account
    deposit_amt = 1500;
    cout << "Deposit Amount: " << deposit_amt << endl;
    account.deposit(deposit_amt);

    // Withdraw money from the account
    withdrawal_amt = 750;
    cout << "Withdrawal Amount: " << withdrawal_amt << endl;
    account.withdraw(withdrawal_amt);

    // Attempt to withdraw more money than the balance
    withdrawal_amt = 1800;
    cout << "Attempt to withdraw Amount: " << withdrawal_amt << endl;
    account.withdraw(withdrawal_amt);

    return 0;
}
