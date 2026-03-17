#include <iostream>
using namespace std;
int main()
{
    int num,even;
    cout<<"Please Enter the number: ";
    cin>>num;
    even=num%2;
    if(even == 0){ 
        cout<<"The number is even";

    }
else {
    cout<< "The number is odd";
}
}