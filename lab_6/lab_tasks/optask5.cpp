#include <iostream>
using namespace std;
main() 

{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int count = 0;
    int num[n];

    for (int i=0; i<n; i++)
    {
        int input;
        cin >> input;
    

    bool alreadyExists = false;
    for(int j = 0; j < count; j++)
    {
        if(num[j] == input)
        {
            alreadyExists = true;
            break;
        }
    }
    if (alreadyExists)
    {
        cout << "Already entered: "<<input << endl;
    }
    else 
    {
        num[count] = input;
        count ++;
    }
    }

    cout << "Unique numbers: ";
    for(int j=0; j<count; j++)
    {
        cout << num[j] << " ";
    }
}