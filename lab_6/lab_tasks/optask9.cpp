#include<iostream>
using namespace std;
int main()

{
    float num[4];
    cout<<"Enter quarters: ";
    cin>>num[0];
    cout<<"Enter dimes: ";
    cin>>num[1];
    cout<<"Enter nickels: ";
    cin>>num[2];
    cout<<"Enter pennies: ";
    cin>>num[3];

    cout<<endl;
    
    float total=num[0]*0.25+num[1]*0.10+num[2]*0.05+num[3]*0.01;
    float totalamount=0;
    cout<<"Enter the total amount due: ";
    cin>>totalamount;

    if(totalamount<=total)
    {
        cout<<"Can you pay the amount? : YES";
    }
    else
    {
        cout<<"Can you pay the amount? : NO";
    }
    

}
    