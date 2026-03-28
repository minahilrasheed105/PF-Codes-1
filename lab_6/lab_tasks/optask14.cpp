#include <iostream>
using namespace std;
main()

{
    int correctPIN = 1234;
    int pin[3];           
    int choice;
    int balance = 1000;   
    int amount;
    bool login = false;
    
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter ATM PIN: ";
        cin >> pin[i];
        if(pin[i] == correctPIN)
        {
            login = true;
            cout << "Login Successful\n";
            break;
        }
        else
        {
            cout << "Incorrect PIN\n";
        }
    }
  
    if(login == true)
    {
        while(true)
        {
            cout << "\n--- ATM Menu ---\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            if(choice == 1)
            {
                cout << "Current Balance: " << balance << endl;
            }
            else if(choice == 2)
            {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << "Updated Balance: " << balance << endl;
            }
            else if(choice == 3)
            {
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if(amount <= balance && amount > 0)
                {
                    balance = balance - amount;
                    cout << "Remaining Balance: " << balance << endl;
                }
                else
                {
                    cout << "Insufficient Balance\n";
                }
            }
            else if(choice == 4)
            {
                cout << "Thank you for using ATM\n";
                break;   
            }
            else
            {
                cout << "Invalid Choice\n";
            }}}
    else
    {
     cout << "Too many incorrect attempts. Access Denied.\n";
    }
    
        return 0;
}