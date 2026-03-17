#include <iostream>
using namespace std;
main()

{
   int n1, n2;
   cout<<"Enter length of fibonacci series: ";
   cin>>n1;
   
   int num=0;
   int num1=1;

   for(int i=1; i<=n1; i++)
   {
    cout << num << " ";

    n2 = num + num1;
    num = num1;
    num1 = n2;
   }

}