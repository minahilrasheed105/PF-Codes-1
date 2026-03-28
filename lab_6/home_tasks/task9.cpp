
#include<iostream>
using namespace std;
main()

{
    string Books[100];
    int total_books = 0;
    for(int choice=0; choice != 4;)
    {
        cout<<"\n-----Library System------\n";
        cout << "\n1. Add Book\n2. View Books\n3. Borrow Book\n4. Exit\n\nEnter Your Choice: ";
        cin >> choice;
        if(choice==1)
        {
            cout << "Enter the name of Book: ";
            cin.ignore();
            getline(cin, Books[total_books]);
            total_books++;
            cout<<"Book added successfully!\n";
        }
        else if(choice==2)
        {
            cout << "All Books\n";
            for(int j=0;j<total_books;j++)
            {
                cout<< "Book " << j+1 <<" : " << Books[j] << endl;
            }
            if(total_books==0)
            {
                cout << "No Books Are Inserted Yet!\n";
            }

        }
        else if(choice==3)
        {
             if(total_books==0)
            {
                cout << "No Books Are Inserted Yet!\n";
                continue;
            }
             cout << "All Book:s\n";
            for(int k=0;k<total_books;k++)
            {
                cout<< "Book " << k+1 <<" : " << Books[k] << endl;
            }
            cout << "Enter the Number Of Book to Borrow: ";
            int ch;
            cin >> ch;
            ch--;
            if (ch < 1 || ch > total_books+1)
            {
                cout << "Invalid Choice" << endl;
                continue;
            }
            cout << "Book " << Books[ch] << " Borrowd Successfully!" << endl;
            for(int l=ch;l<total_books;l++)
            {
                Books[l] = Books[l+1];
            }
            total_books--;
        }
        else
        {
            if(choice==4)
            cout << "Existing Library System" << endl;
        }
    }
}