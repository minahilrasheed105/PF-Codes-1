#include <iostream>
using namespace std;
main()

{
    int n1, n2, gcd, lcm;
    cout<<"Enter first number: ";
    cin>>n1;

    cout<<"Enter second number: ";
    cin>>n2; 

    for(int i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            gcd=i;
        }
    }
    lcm=(n1*n2)/gcd;
    cout<<"GCD of "<<n1 <<" and "<< n2 <<"is: "<<gcd<<endl;
    cout<<"LCM of "<<n1 <<" and "<<n2<<" is: "<<lcm;

    }
