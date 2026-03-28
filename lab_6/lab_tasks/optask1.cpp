#include <iostream>
using namespace std;
main() 

{
    cout<<"Enter a word: ";
    char word[100];
    cin>>word;

    for(int i=0; word[i]!='\0';i++)
    {
        cout << word[i]<<" is found at position "<<i<<endl;
    }
}