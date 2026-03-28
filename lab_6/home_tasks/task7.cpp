#include <iostream>
using namespace std;
main()

{
    int n;
    cout<<"Enter number of products: ";
    cin>>n;

    string productNames[n];
    float prices[n];
    int quantity[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter name of product "<<i+1 << " : ";
        cin >> productNames[i];
        cout<<"Enter price of " << productNames[i] << " : ";
        cin >> prices[i];
        cout<<"Enter quantity of " << productNames[i] << " : ";
        cin >> quantity[i];
        cout << endl;
    }

    cout << "Product Inventory Report\n------------------\n";
     for(int i=0; i<n; i++)
     {
        cout << productNames[i] << ": $" << prices[i] << ", " << quantity[i] << " in Stock, Total Value: $" << prices[i]*quantity[i] << endl;
     }

}