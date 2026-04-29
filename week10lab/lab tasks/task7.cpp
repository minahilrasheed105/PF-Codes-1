#include <iostream>
#include <cmath>

using namespace std;

double heightCalculate(float distance, float angle);

int main()
{
     cout<<"Enter distance: ";
     float distance;
     cin>>distance;
     cout<<"Enter angle: ";
     float angle;
     cin>>angle;
     heightCalculate (distance, angle);
}
double heightCalculate(float distance, float angle)
{
     cout<<"Height is "<< distance * tan(angle/57.2958);

}

