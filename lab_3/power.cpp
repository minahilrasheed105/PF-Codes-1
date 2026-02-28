#include <iostream>
using namespace std;
main()

{
int voltage, current;
cout<< " Enter voltage (in volts):";
cin>>voltage;
cout<<" Enter current (in Amperes):";
cin>>current;
int Power;
Power= voltage * current;
cout<< " The power is "<< Power<<" watts";
}