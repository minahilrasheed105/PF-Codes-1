#include<iostream>
using namespace std;
main()

{
int n, w, h, paint;
cout<<"Number of square walls you can paint: ";
cin>>n;
cout<<"Width of the single wall: ";
cin>>w;
cout<<"Height of the single wall: ";
cin>>h;
paint= n/(w*h);
cout<<"Number of walls you can paint: "<<paint;
}