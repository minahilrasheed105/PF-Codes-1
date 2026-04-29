#include <iostream>
using namespace std;

void add(int num1,int num2);
int main()
{
    int num1, num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    add(num1, num2);

    return 0;

}

void add(int num1,int num2)
{
    cout<<"Sum: "<<num1 + num2;
}