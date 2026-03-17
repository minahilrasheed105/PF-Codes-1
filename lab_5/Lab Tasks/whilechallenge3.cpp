#include <iostream>
using namespace std;

int main()
{
    int pin, c_pin = 1234;
    int balance = 1000;
    int choice, amount;

    
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter ATM PIN: ";
        cin >> pin;

        if(pin == c_pin)
        {
            cout << "Login Successful" << endl;
                break;
        }
        else
        {
            cout << "Wrong PIN" << endl;
        }

        if(i == 3)
        {
            cout << "Too many attempts. Card Blocked." << endl;
            return 0;
        }
    }

    // ATM Menu
    while(true)
    {
        cout << "\n------ ATM MENU ------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Current Balance: " << balance << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter amount to Deposit: ";
            cin >> amount;

            balance = balance + amount;

            cout << "Money Deposited Successfully" << endl;
        }
        else if(choice == 3)
        {
            cout << "Enter amount to Withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance = balance - amount;
                cout << "Please collect your cash" << endl;
            }
            else
            {
                cout << "Insufficient Balance" << endl;
            }
        }
        else if(choice == 4)
        {
            cout << "Thank you for using ATM!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}