#include<iostream>
using namespace std;
main()

{
int v, a, t, v2;
cout<<"Enter initial velocity (m/s): ";
cin>>v;
cout<<"Enter Acceleration (m/s^2) : ";
cin>>a;
cout<<"Enter Time (s) : ";
cin>>t;
v2 = (a*t)+v;
cout<<"Final velocity (m/s) : " << v2;
}

