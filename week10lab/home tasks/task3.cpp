#include <iostream>
using namespace std;

float taxCalculator(char type , float price);

int main()
{
    char type1;
    float price1, final;

    cout << "Enter vehicle type(M/E/S/V/T): ";
    cin >> type1;

    cout << "Enter vehicle price: ";
    cin >> price1;

    final = taxCalculator(type1, price1);

    cout << "The final price on a vehicle of type " 
         << type1 
         << " after adding the tax is $" 
         << final;

    return 0;
}

float taxCalculator(char type , float price)
{
    float taxRate = 0;

    if(type == 'M') 
        taxRate = 0.06;
    else if(type == 'E') 
        taxRate = 0.08;
    else if(type == 'S') 
        taxRate = 0.10;
    else if(type == 'V') 
        taxRate = 0.12;
    else if(type == 'T') 
        taxRate = 0.15;

    float taxAmount = price * taxRate;
    float final = price + taxAmount;

    return final;
}