#include <iostream>
using namespace std;
main()

{
    int n1;
    cout<<"Enter a number: ";
    cin>>n1;

    int count=0;
    for(int i=n1; i>0; i/=10)
    {
    count++;
    }
    cout<<"Total number of digits: "<<count;
}