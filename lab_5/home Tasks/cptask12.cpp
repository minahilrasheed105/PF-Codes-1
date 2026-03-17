#include <iostream>
using namespace std;
main()

{
    int choice;
    string book = "";

    do
    {
        cout << "--- Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter book name: ";
            cin >> book;
            cout << "You added a book: " << book;
        }
        else if(choice == 2)
        {
             cout << "Book: " << book;
        }
        else if(choice == 3)
        {
            cout << "You selected: Borrow Book.";
        }
        else if(choice == 4)
        {
            cout << "You selected: Issue Book.";
        }
        else if(choice == 5)
        {
            cout << "Exiting Library System. Goodbye!";
        }
        

        cout << endl <<endl;

    } 

}