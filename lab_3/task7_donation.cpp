#include<iostream>
using namespace std;
main()

{
string name;
cout<<"Enter the movie name: ";
cin>>name;
int adult, child, sold1, sold2, charity,t_sales, donation, remaining;
cout<<"Enter the adult ticket price: $";
cin>>adult;
cout<<"Enter the child ticket price: $";
cin>>child;
cout<<"Enter the number of adult tickets sold: ";
cin>>sold1;
cout<<"Enter the number of child tickets sold: " ;
cin>>sold2;
cout<<"Enter the percentage of amount to be donated to charity:";
cin>>charity;
t_sales= (adult*sold1) + (child*sold2);
donation=(t_sales*charity)/100;
remaining= t_sales - donation;
cout<<"------------------------------------------"<<endl; 
cout<<"Movie:" <<name<<endl;
cout<<"Total amount generated from ticket sale: $" <<t_sales<<endl;
cout<<"Donation to charity (10%): $"<<donation <<endl;
cout<<"Remaining amount after donation: $"<<remaining;
}