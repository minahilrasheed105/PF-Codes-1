#include <iostream>
using namespace std;
main()

{
    int n;
    cout<<"Enter number of flight: ";
    cin>>n;
    cout<<endl;

    string flightNumber[n];
    string destination[n];
    int seatsAvailible[n];


    for(int i=0;i < n;i++)
    {
        cout << "Enter the number for flight "<< i+1 << " : ";
        cin >> flightNumber[i];
        cout << "Enter the destination of flight " << flightNumber[i] << " : ";
        cin >> destination[i];
        cout << "Enter the seats availible for flight " << flightNumber[i] << " : ";
        cin >> seatsAvailible[i];
        cout << endl;
    }

    cout << "Flight Information\n------------\n";

    for(int i=0; i < n; i++)
    {
        cout << "Flight " << flightNumber[i] << " to " << destination[i] << " has " << seatsAvailible[i] << " Seats Availible." << endl;
    }

    cout << "Flight With Less Than 5 Seats Availible\n---------------------------------\n";
    bool check=true;
    for(int i=0; i < n; i++)
    {
        if(seatsAvailible[i] < 5)
        {
            cout << "Flight " << flightNumber[i] << " to " << destination[i] << " has only " << seatsAvailible[i] << " Seats Left!." << endl;
            check = false;
        }
    }
    if(check)
    {
        cout << "No Flight Availible with less than 5 seats!" << endl;
    }

}