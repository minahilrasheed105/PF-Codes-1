#include <iostream>
using namespace std;
main()

{
  int f1, f2, f3;
  float f4, f5, f6, total_f, dis, after_dis;

  cout<<"Red Roses: ";
  cin>>f1;
  
  cout<<"White Roses: ";
  cin>>f2;

  cout<<"Tulips: ";
  cin>>f3;

  f4 = f1 * 2.00;
  f5 = f2 * 4.10;
  f6 = f3 * 2.50;

total_f = f4 + f5 + f6;

if (total_f > 200){
dis = total_f * 20/100;
after_dis = total_f - dis;
}

cout<<"Original Pice: "<<total_f<<endl;
cout<<"Price after Discount: "<<after_dis;
}