#include <iostream>
using namespace std;
main()

{
    int n1,n2, diff;
    cout<<"Temperature city 1: ";
    cin>>n1;

    cout<<"Temperature city 2: ";
    cin>>n2;

    diff = n1 - n2; 
    if(diff > 10){ 
    cout<<"Difference is too Big.";
    }
    
    else{
     cout<<"Program Ends.";   
    }
}