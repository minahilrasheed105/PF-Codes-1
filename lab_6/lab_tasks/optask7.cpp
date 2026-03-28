#include <iostream>
using namespace std;
main() 

{
    int n;
    cout<<"Enter number of resistors in series: ";
    cin>>n;

    float r[n];
    for(int i=0;i<n;i++)
    {
        cin>>r[i];
    }
    
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+r[i];
    }
    cout<<"Total Resistance of the series circuit is: "<<sum<<" ohms."<<endl;
}