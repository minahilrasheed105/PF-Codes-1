#include<iostream>
using namespace std;
main()

{
float charge,time,Current;
cout<<" Enter the charge (Q) in Coulombs: ";
cin>>charge;
cout<<" Enter the time (t) in seconds:";
cin>>time;
Current = charge / time;
cout<<" The Current is= "<<Current<<" Amperes";
} 
