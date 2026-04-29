#include <iostream>
using namespace std;

string OddishOrEvenish(int num);

int main()
{
    int number;
    cout << "Enter a 5-digit number: ";
    cin >> number;

   OddishOrEvenish(number);

    return 0;
}
string OddishOrEvenish(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum = sum + (num % 10);  // get last digit
        num = num / 10;          // remove last digit
    }

    if (sum % 2 == 0)
     cout<< "Evenish";
    else
      cout<< "Oddish";
}

