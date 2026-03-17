#include <iostream>
using namespace std;
main()

{
string my_pw, user_enter;
my_pw = "Pass@123!";
cout<<"Enter the password:";
cin>>user_enter;

if(user_enter == my_pw)
{
cout<<"Wow ! You have cracked the code!";
}
else{
cout<<"It's not that simple, Try Again";
}
}