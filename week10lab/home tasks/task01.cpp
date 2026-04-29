#include <iostream>
using namespace std;

int x = 10;
void myFunction();
{
    cout<<"The value of x is: "<<x;
    int x = 20;
}
main()
{
    myFunction();
    int x = 20;
    cout<<"The value of x is: "<<x;
    myFunction();
}