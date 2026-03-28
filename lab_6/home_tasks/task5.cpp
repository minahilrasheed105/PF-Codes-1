#include <iostream>
using namespace std;
main()

{
    int n;
    cout<<"Enter number of customers: ";
    cin>>n;

    string customers[n];
    cout<<"Enter the names of " <<n <<" customers: "<<endl;

    for (int i=0; i<n; i++)
    {
        cin>>customers[i];
    }
    char a;
    cout<<"Enter a letter to check: ";
    cin>>a;

    int count =0;

    for(int i=0; i<n; i++)
    { // customer[3] will return a string like "Ali" and customer[3][0] will return a charchter 'A'
        if(customers[i][0]==a)
        {
            count += 1;
        }
    }

    cout << "Total Names Starting With '" << n << "': "<<count<<endl;
}