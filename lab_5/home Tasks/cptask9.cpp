#include <iostream>
#include <iomanip>
using namespace std;
main()

{
  int money, year;
  cin>>money;
  cin>>year;

  int age=18;
  int currentYear=1800;
  float total = 0;

  while(currentYear <= year)
  {
    if(currentYear % 2 == 0)
    {
        total = total + 12000;
    }
    else
   {
    total = total + 12000 + (50*age);
   }
   age++;
   currentYear++;
  }
  float rem = money - total;

  if (rem >= 0)
  {
    cout<<"Yes! He will live a carefree life and will have " << rem<< " dollars left.";
  }
  else
  {
    cout << "He wil need " << -rem << " dollars to survive.";
  }
   
}