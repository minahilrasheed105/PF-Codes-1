#include <iostream>
using namespace std;
int main()

{
    char going;
    cout<<"Are your friends going?(Press Y for yes and N for no:)";
    cin>>going;

    if (going == 'y'){
        cout<<"You are also going!";
    }
    if (going == 'n'){
        cout<<" You are not going! ";
    }
}