#include <iostream>
using namespace std;
main()

{
  int age, w_price, t_price;
  
  cout<<"Enter Lilly's age: ";
  cin>>age;

  cout<<"Enter the price of washing machine:  ";
  cin>>w_price;
  
  cout<<"Enter the unit price of each toy: ";
  cin>>t_price;

  int money=0, toys=0, saving;
  int i=1, j=1;

  while(i<=age)
{
    if(i%2==0)
    {
        money += (10*j)-1;
        j++;
    }
    else{
        toys++;
    }
    i++;
}

    saving = money + (toys * t_price);
    if(saving>=w_price)
    {
        cout<<"Yes! \n"<<saving-w_price;
    }
    else
    {
        cout<<"No! \n"<<w_price-saving;
    }
  
}