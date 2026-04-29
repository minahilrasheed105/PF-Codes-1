#include <iostream>
#include <string>
using namespace std;

int timeTravel(int h, int m);

int main()
{
    int hours, mins;
    cout<<"Enter hours: ";
    cin>>hours;
    cout<<"Enter Minutes: ";
    cin>>mins;
    
     timeTravel(hours, mins);
     return 0;
}
int timeTravel(int h, int m)
{
    m = m + 15;
    if(m>=60){
        m = m - 60;
        h = h +1;
      }
    if(h>=24){
        h = 0;
    }

    string hh = to_string(h);
    string mm = to_string(m);

    if (h < 10){
        hh = "0" + hh;
    }
    if (m < 10){
        mm = "0" + mm;
    }
     
    cout<< hh << ":" <<mm;
}
