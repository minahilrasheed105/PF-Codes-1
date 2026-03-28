#include <iostream>
using namespace std;

void sum_of_array(int arr[], int s)
{
    int sum=0;
    for(int i=0; i<s; i++)
    {
        sum += arr[i];
    }
    cout<<"Sum of all numbers: "<<sum;
}

main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int num[n];
    cout << "Enter " << n << " Numbers: " << endl;
    for(int i=0;i < n; i++)
    {
        cin>>num[i];
    }
    sum_of_array(num, n);

}