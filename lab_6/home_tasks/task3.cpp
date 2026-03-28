#include <iostream>
using namespace std;

void largest_smallest(int arr[], int s)
{
   int largest = 0;
   int smallest = arr[0];
    
   for(int i=0; i<s; i++)
   {
      if(largest < arr[i])
      {
        largest = arr[i];
      }
      if(smallest > arr[i])
      {
        smallest = arr[i];
      }
   }
   cout  << "Largest Number: "
 << largest << endl;
    cout << "Smallest Number: " << smallest << endl; 
}


main()

{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int num[n];
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    largest_smallest(num, n);
}
