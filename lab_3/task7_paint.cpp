#include<iostream>
using namespace std;
main()

{
int n, w, h, formula;
cout<<"Enter paint area:";
cin>>n;
cout<<"Enter width:";
cin>>w;
cout<<"Enter height:";
cin>>h;
formula= n/(w*h);
cout<<"Walls painted = " <<formula;
}