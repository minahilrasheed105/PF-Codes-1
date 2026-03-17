#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;

    if(name == "ali")
{ 
    cout<<"Welcome "<<name;
    }
if (name != "ali"){
    cout<<"Try again";
}
}