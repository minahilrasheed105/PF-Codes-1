#include<iostream>
using namespace std;
main()

{
int population,birth;
int years = 30;
int months = 30 * 12;
cout<<"Enter the current world population:";
cin>>population;
cout<<"Enter the monthly birth rate (number of births per months):";
cin>>birth;
int total_births = months * birth;
int total_population=total_births + population;
cout<<"Population in three decades will be:" << total_population;       
}