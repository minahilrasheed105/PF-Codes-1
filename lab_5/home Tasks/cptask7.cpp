#include <iostream>
#include <iomanip>
using namespace std;
main()

{
    int n;
    cout<<"Enter number count: ";
    cin>>n;

    int range1=0, range2=0, range3=0, range4=0, range5=0;
    
        for(int i=0; i<n; i++)
        {
            int n1;
            cout<<"Enter a number: ";
            cin>>n1;

            if(n1>=1 && n1<=199)
            {
              range1++;
            }
            else if(n1>=200 && n1<=399)
            {
              range2++;  
            }
            else if(n1>=400 && n1<=599)
            {
              range3++;  
            }
            else if(n1>=600 && n1<=799)
            {
              range4++;  
            }
            else if(n1>=800 && n1<=1000)
            {
              range5++;  
            }
        }
    


float p1 = (range1*100.0)/n;
float p2 = (range2*100.0)/n;
float p3 = (range3*100.0)/n;
float p4 = (range4*100.0)/n;
float p5 = (range5*100.0)/n;

cout << fixed << setprecision(2);
cout << p1 << "%"<<endl;
cout << p2 << "%"<<endl;
cout << p3 << "%"<<endl;
cout << p4 << "%"<<endl;
cout << p5 << "%"<<endl;

}