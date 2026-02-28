#include<iostream>
using namespace std;
main()

{
string name;
cout<<"Enter the name of the person: ";
cin>>name;
float kgs;
cout<<"Enter the target weight loss in kilograms: ";
cin>>kgs;
float days= kgs * 15;
cout<<name<<" will need "<<days<< " days"<< " to lose " << kgs<< " kg of weight by following the doctor's suggestions."; 
}  