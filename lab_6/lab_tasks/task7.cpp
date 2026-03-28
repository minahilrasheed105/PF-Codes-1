#include <iostream>
using namespace std;
bool check(string word, char letter)

{
   bool isFound = false;
   for(int idx=0; word[idx] != '\0'; idx++)
   {
    if (word[idx] == letter)
        {
            isFound = true;
            break;
        }
   }
   return isFound;
}

main()
{
    string word;
    char letter;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Enter the character you want to find: ";
    cin>>letter;
    if (check(word, letter))
    {
        cout << letter << " is found in " <<word;
    }
    else
     {
        cout << letter << " isn't found in "<< word;
     }
    }
