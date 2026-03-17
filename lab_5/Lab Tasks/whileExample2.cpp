#include <iostream>
using namespace std;
main()
{
    int value;
   cout<<"Enter a positive number: ";
   cin >> value;

while(value <= 0)
   {
    cout<<"Error: "<< value <<" is a not a positive number."<<endl;
    cout<<"Enter a positive number: ";
    cin >> value;

   }

cout<<"Program Ends";

}