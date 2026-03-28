#include <iostream>
using namespace std;
main()

{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    int num[n];

    for (int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    int largest=num[0];
      for(int i=1; i<n; i++)
      {
        if (num[i]>largest)
        {
            largest = num[i];
        }
      }
    cout<<"The largest number is: "<<largest;

}