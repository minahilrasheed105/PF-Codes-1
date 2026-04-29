#include <iostream>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers)
{
    double workingDays = days * 0.9;

    double totalHours = workingDays * workers * 10;

    int hours = (int)totalHours;  // round down

    if (hours >= neededHours)
    {
        int left = hours - neededHours;
        return "Yes!" + to_string(left) + " hours left.";
    }
    else
    {
        int needed = neededHours - hours;
        return "Not enough time!" + to_string(needed) + " hours needed.";
    }
}

int main()
{
    int neededHours, days, workers;
    cout<<"Enter needed hours: ";
    cin >> neededHours;
    cout<<"Enter number of days of firm: ";
    cin >> days;
    cout<<"Enter number of workers: ";
    cin >> workers;

    cout << projectTimeCalculation(neededHours, days, workers);

    return 0;
}
