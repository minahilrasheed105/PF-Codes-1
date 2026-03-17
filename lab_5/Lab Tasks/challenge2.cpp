#include <iostream>
using namespace std;
main()
{
   int n1, n2;
   int count = 0;

   cout<<"Enter number: ";
   cin>>n1;

   cout<<"Enter digit: ";
   cin>>n2;

for(int i=n1; i> 0; i/=10)
{            
   if(i%10 == n2)
   {                     
    count++;
   }
}
cout<<"Frequency of "<<n2<<" in "<<n1<<" is: "<<count;

}