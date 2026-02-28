#include<iostream>
using namespace std;
main()

{
float veg, fruits, t_veg;
int t_fruits, coins, rps;
cout<<"Enter vegetable price per kg (in coins): ";
cin>>veg;
cout<<"Enter fruit price per kg (in coins): ";
cin>>fruits;
cout<<"Enter total kilograms of vegetables: ";
cin>>t_veg;
cout<<"Enter total kilograms of fruits: ";
cin>>t_fruits;
coins= (veg * t_veg) + (fruits * t_fruits);
rps=coins/1.94;
cout<<"Total earnings in Rupees (Rps): "<<rps;
}