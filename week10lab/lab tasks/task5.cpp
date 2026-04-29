#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num1, num2;
    cout<<"Enter the base number: ";
    cin>>num1;
    cout<<"Enter the exponent: ";
    cin>>num2;
    cout<<num1 <<" raised o the power"<<num2 <<"is: "<<pow(num1, num2);
    return 0;
}