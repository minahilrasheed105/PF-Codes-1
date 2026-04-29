#include <iostream>
using namespace std;
 
string toWords(int n);

main()
{
    int num;
    cout<<"Enter a number(1-99): ";
    cin>>num;

    cout << toWords(num);
}

string toWords(int n)
{
     string ones[] = {"", "One", "Two", "Three", "Four", "Five",
                     "Six", "Seven", "Eight", "Nine"};

    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                      "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    string tens[] = {"", "", "Twenty", "Thirty", "Forty",
                     "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (n >= 1 && n <= 9)
        return ones[n];

    else if (n >= 10 && n <= 19)
        return teens[n - 10];

    else if (n >= 20 && n <= 99)
        return tens[n / 10] + " " + ones[n % 10];


}