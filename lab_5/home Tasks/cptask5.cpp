#include <iostream>
using namespace std;
main()

{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
     for(int i=n; i>0; i/=10)
     {
        sum += (i%10);
     }
     cout<<"Sum : "<<sum;
}