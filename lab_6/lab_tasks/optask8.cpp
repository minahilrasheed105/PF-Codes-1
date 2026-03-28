#include<iostream>
using namespace std;
int main()

{
    int arr1[1000];
    cout<<"Enter 2 elements for array 1: "<<endl;
    for(int i=0;i<2;i++)
    {
     cin>>arr1[i];
    }
    int n2;
    cout<<"Enter number of elements for second array: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter "<<n2<<" elements for second array, one per line: "<<endl;
   for(int i=0;i<n2;i++)
   {
    cin>>arr2[i];
   }
   cout<<"Resulting array: ["<<arr1[0];
   for(int i=0;i<n2;i++)
   {
    cout<<", "<<arr2[i];
   }
   cout<<", "<<arr1[1]<<"]";
    
}