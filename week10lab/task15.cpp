#include <iostream>
using namespace std;

void createAccount(string &name, string &accNum);
void deposit(double &balance);
void withDraw(double &balance);
void checkBalance(double balance);
void showInfo(string name, string accNum, double balance);

int main()
{
    string name, accNo;
    double balance = 0;

    while(true)
    {
        cout << "\n=== BANK MANAGEMENT SYSTEM ===\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit\n";
        cout<<"3. Withdraw\n";
        cout<<"4. Check Balance\n";
        cout<<"5. Show Account Info\n";
        cout<<"6. Exit\n";

        int choice;
        cout<<"\nEnter your choice: ";
        cin>>choice;

        if(choice == 1)
        {
           createAccount(name, accNo);
        } 
        else if (choice == 2)       
        {
           deposit(balance);
        }
        else if (choice == 3)  
        {
            withDraw(balance);
        }
        else if (choice == 4)
        {
            checkBalance(balance); 
        }
        else if (choice == 5)
        {
            showInfo(name, accNo, balance);
        }
        else if (choice == 6)
        {
            break;
        }
    }

} 

// Create Account
void createAccount(string &name, string &accNum)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accNum;
}

// Deposit
void deposit(double &balance)
{
    double amount;
    cout << "Enter amount: $";
    cin >> amount;

    if(amount > 0)
    {
        balance += amount;
        cout << "New balance: $" << balance << endl;
    }
}

// Withdraw
void withDraw(double &balance)
{
    double amount;
    cout << "Enter amount: $";
    cin >> amount;

    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "New balance: $" << balance << endl;
    }
    else
    {
        cout << "Insufficient balance!\n";
    }
}

// Balance check
void checkBalance(double balance)
{
    cout << "Current balance: $" << balance << endl;
}

// Show Info
void showInfo(string name, string accNum, double balance)
{
    cout << "\n--- Account Info ---\n";
    cout << "Name: " << name << endl;
    cout << "Account Number: " << accNum << endl;
    cout << "Balance: $" << balance << endl;
}