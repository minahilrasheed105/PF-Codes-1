#include <iostream>
using namespace std;
main()

{
   string students[5];
   cout<<"Enter names of 5 students: "<<endl;
   
   for(int i=0; i<5; i++)
   {
    cin>>students[i];
   }
  cout<<"Student Names are: "<<endl;
  
  for(int i=0; i<5; i++)
  {
    cout<<students[i]<<endl;
  }
}