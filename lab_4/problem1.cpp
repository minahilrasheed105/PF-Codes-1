#include <iostream>
using namespace std;
main()

{
  string name;
  int price, discount, dis_price;
  
  cout<<"Enter country name: ";
  cin>>name;

  cout<<"Enter ticket price in dollar: ";
  cin>>price;

  if(name == "Ireland"){
  discount = price * 10/100;
  dis_price = price - discount;
  }

  else{
  discount = price * 5/100;
  dis_price = price - discount;  
  }

  cout<<"Discount price: "<<dis_price;
}