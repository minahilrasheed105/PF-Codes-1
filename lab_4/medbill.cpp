#include <iostream>
using namespace std;
main()

{
int n1, discount, discount2, final;
cout<<"Enter your bill: ";
cin>>n1;
if (n1 <= 5000){
discount = n1 * 5/100;
final = n1 - discount;
}
else{
discount2 = n1 * 10/100;
final = n1 - discount2 ;   
}
cout<<"Your discount bill is :" <<final;
}    
