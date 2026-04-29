#include <iostream>
using namespace std;

float calculateBalance(float balance, int years)
{
    float rate = 0;

    // step 1: decide interest rate
    if (balance < 10000)
        rate = 0.05;
    else if (balance <= 50000)
        rate = 0.07;
    else
        rate = 0.10;

    // step 2: extra interest for years
    if (years >= 3)
        rate += 0.02;

    // step 3: calculate final balance
    float finalBalance = balance + (balance * rate);

    return finalBalance;
}

int main()
{
    float balance;
    int years;
    cout<<"Enter balance and years: ";
    cin >> balance >> years;

    cout << calculateBalance(balance, years);

    return 0;
}