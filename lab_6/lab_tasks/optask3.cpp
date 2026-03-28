#include <iostream>
using namespace std;
main() 

{
    char word[100];
    cout<<"Enter a string: ";
    cin>>word;

    int i=0;

    while (word[i] != '\0')
    {
        if (word[i] == 'z')
        word[i] = 'a';
    else
    {
       word[i]= word[i] + 1;
       i++;
    }
        }
        cout << "Changed letters: "<<word;
}