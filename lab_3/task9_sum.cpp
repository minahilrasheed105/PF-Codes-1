#include<iostream>
using namespace std;
main()

{
int num;
cout<<"Enter a 4-digit number: ";
cin>>num;
int digit1= num % 10;
num = num/10;
int digit2= num % 10;
num= num / 10;
int digit3= num % 10;
num= num / 10;
int digit4= num % 10;
int sum= digit1 + digit2 + digit3 + digit4;
cout<<"Sum of the invidual digits:" <<sum;
} 

