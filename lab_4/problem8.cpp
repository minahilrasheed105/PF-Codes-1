#include <iostream>
using namespace std;
main()

{
    string n1="", n2 = "";
    int n;
    cout<<"Enter any number(0-100): ";
    cin >> n;

    if(n == 0){n1 = "Zero";}
    if(n == 1){n1 = "One";}
    if(n == 2){n1 = "Two";}
    if(n == 3){n1 = "Three";}
    if(n == 4){n1 = "Four";}  
    if(n == 5){n1 = "Five";}
    if(n == 6){n1 = "Six";} 
    if(n == 7){n1 = "Seven";} 
    if(n == 8){n1 = "Eight";} 
    if(n == 9){n1 = "Nine";} 
    if(n == 10){n1 = "Ten";} 
    if(n == 11){n1 = "Eleven";} 
    if(n == 12){n1 = "Twelve";}
    if(n == 13){n1 = "Thirteen";}
    if(n == 14){n1 = "Forteen";}
    if(n == 15){n1 = "Fifteen";}
    if(n == 16){n1 = "Sixteen";}
    if(n == 17){n1 = "Seventeen";}
    if(n == 18){n1 = "Eighteen";}
    if(n == 19){n1 = "Nineteen";}

    if(n >= 20 && n <= 99)
    {
        int tens = n / 10;
        int ones = n % 10;

        if(tens == 2){n1 = "Twenty";}
        if(tens == 3){n1 = "Thirty";}
        if(tens == 4){n1 = "Forty";}
        if(tens == 5){n1 = "Fifty";}
        if(tens == 6){n1 = "Sixty";}
        if(tens == 7){n1 = "Seventy";}
        if(tens == 8){n1 = "Eighty";}
        if(tens == 9){n1 = "Ninety";}
        
        if(ones == 1){n2 = " One";}
        if(ones == 2){n2 = " Two";}
        if(ones == 3){n2 = " Three";}
        if(ones == 4){n2 = " Four";}
        if(ones == 5){n2 = " Five";}
        if(ones == 6){n2 = " Six";}
        if(ones == 7){n2 = " Seven";}
        if(ones == 8){n2 = " Eight";}
        if(ones == 9){n2 = " Nine";}
    }

    if(n == 100)
    {
        n1 = "One Hundred";
    }

    cout << n1 << n2;

}