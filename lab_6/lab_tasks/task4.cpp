#include <iostream>
using namespace std;
main()

{
    int numbers[5];

    for(int count = 0; count < 5; count ++)
    {
        cout << "Enter number: ";
        cin >> numbers[count];
    }
    cout<<"The 1st element in array is: "<<numbers[0] <<endl;
    cout<<"The last element in array is: "<<numbers[4] <<endl;
}