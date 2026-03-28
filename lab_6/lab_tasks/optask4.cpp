#include <iostream>
using namespace std;
main() 
{
    string num; 

    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    if(n>0)
    {
      cout<<"Enter "<< n <<" numbers" <<", one per line: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }
     cout<<"Numbers in reverse order: ";
    for(int j=n-1 ; j>=0 ; j--)
    {
        cout<<num[j]<<" ";
    }
}

else
 {
    cout<<"Invalid input. Numbers of element should be greater than 0. ";
 }
    
}