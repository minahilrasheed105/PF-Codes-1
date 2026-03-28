#include <iostream>
using namespace std;

void even_number(int arr[], int s) 
{
    int count_even = 0;
    for(int i=0; i < s; i++)
    {
        if(arr[i]%2==0)
        {
            count_even++;
        }
    }
    cout  << "total even numbers : " << count_even << endl;
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
     even_number(num, n);
    
}