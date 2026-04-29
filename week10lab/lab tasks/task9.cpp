#include <iostream>
using namespace std;

int multiply(int n);

main()
{
    int num,result;
    cout<<"Enter  a value: ";
    cin>>num;
    multiply(num);
    return 0;
}

int multiply(int n)
{
    cout<<"Result: "<<n*5;
}