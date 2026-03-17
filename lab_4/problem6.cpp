#include <iostream>
using namespace std;
main()

{
float s;
cout<<"Input speed: ";
cin>>s;

if(s<=10){
cout<<"slow";    
} 
if(s>10 && s<=50){
cout<<"average";    
}
if(s>50 && s<=150){
cout<<"fast";    
}
if(s>150 && s<=1000){
cout<<"ultra fast";    
}
if(s>1000){
cout<<"Extremely fast";    
}

}