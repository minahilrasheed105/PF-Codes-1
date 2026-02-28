#include<iostream>
using namespace std;
main()

{
string name;
float matric,intermediate,Ecat;
cout<<" Enter the student's name:";
cin>>name;
cout<<" Enter matriculation marks (out of 1100):";
cin>>matric;
cout<<" Enter intermediate marks (out of 550):";
cin>>intermediate;
cout<<" Enter ECAT marks (out of 400):";
cin>>Ecat;
float Aggregate;
Aggregate= ((matric/1100)*0.25+ (intermediate/550)*0.45 + (Ecat/400)*0.30) * 100;

cout<<" Aggregate score for "<<name <<" is "<< Aggregate;
}