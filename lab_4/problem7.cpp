#include <iostream>
using namespace std;
main()

{
  string shape;
  double s, l, w, r, b, h, area;
  cin >> shape;
  
  if(shape == "square"){
    cin>>s;
    area = s * s;
   }
   else if (shape == "rectangle"){
    cin >> l;
    cin >> w;
    area = l * w;
   }
   else if (shape == "circle"){
    cin>>r;
    area = 3.1416 * r * r; 
   }
   else if (shape == "triangle"){
    cin>>b;
    cin>>h;
    area = 0.5 * b * h;
   }
   cout << area;
}