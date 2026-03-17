#include <iostream>
using namespace std;
main()

{
    for ( int i=1; i <= 6; i++)
    {
        for(int j=1; j <=i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=6; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" * "; 
        }
     cout<<endl;
    }
    
}