#include<iostream>
using namespace std;
main()

{
float lbsweight = 0.45;
int lbs;
cout<<" Enter weight in lbs:";
cin>>lbs;
int kgs;
kgs = lbs * lbsweight;

cout<< lbs << " lbs" <<" is equal to "<<kgs <<" kgs";
}