#include <iostream>
using namespace std;
main()

{
 int salary = 10000;
 int laptop_price = 50000;
 
 int advance_salary = salary * 50/100;
 int advance_6_months = 6 * advance_salary;

 if ( advance_6_months >= laptop_price){
 cout<<"Ali can buy the laptop.";
 }
 else{
  int months = laptop_price / advance_salary;  
 
 cout<<"Months required to buy laptop: " <<months;
}
}