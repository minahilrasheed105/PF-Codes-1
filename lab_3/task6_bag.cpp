#include<iostream>
using namespace std;
main()

{
float f_bag, bag, area, fertilizer, f_per_square;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>f_bag;
cout<<"Enter the cost of the bag: $";
cin>>bag;
cout<<"Enter the area in square feet that can be covered by the bag:";
cin>>area;
fertilizer=bag/f_bag;
f_per_square= bag/area;
cout<<"Cost of fertilizer per pound is: $" <<fertilizer<<endl;
cout<<"Cost of fertilizing per square foot is: $" <<f_per_square;
}   
  