#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

double roots(float a, float b, float c);

double solution;

float root1, root2;
int main()
{
    float a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
     cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
     roots(a, b, c);
}
double roots(float a, float b, float c)
{
    float determinant= (b*b)-4*a*c;
    if (determinant > 0){
         root1 = (-b + sqrt(determinant))/ 2*a;
         root2 = (-b - sqrt(determinant))/ 2*a;

         cout<<"Solutions: x = "<< root1 <<"and x = " <<root2;
    }
    else if(determinant == 0){
        root1 = root2 = -b / 2*a;
    }
    else {
          float realPart = -b / (2*a);
        float imagPart = sqrt(-determinant) / (2*a);

        cout << "Complex roots:\n";
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}
