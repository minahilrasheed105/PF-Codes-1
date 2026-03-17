#include <iostream>
using namespace std;
main()

{
    int choice;
    float n1, n2;

    while(true)
    {
        cout << "--- Simple Calculator ---"<<endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            cin >> n1;

            cout << "Enter second number: ";
            cin >> n2;
        }

        if(choice == 1)
        {
            cout << "Result: " << n1 + n2;
        }
        else if(choice == 2)
        {
            cout << "Result: " << n1 - n2;
        }
        else if(choice == 3)
        {
            cout << "Result: " << n1 * n2;
        }
        else if(choice == 4)
        {
            cout << "Result: " << n1 / n2;
        }
        else if(choice == 5)
        {
            system("cls");
            cout << "Screen cleared." << endl;
        }
        else if(choice == 6)
        {
            cout << "Exiting Calculator. Goodbye!";
            break;
        }
        
        cout << endl <<endl;
    }

}