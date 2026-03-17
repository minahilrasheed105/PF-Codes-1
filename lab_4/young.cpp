#include <iostream> 
using namespace std;
int main()

{
  string n1, n2, n3, n4, n5, n6;
   
  cout<<"Enter name of 1st brother: ";
  cin>>n1;
  cout<<"Enter age of 1st brother: ";
  cin>>n2;

  cout<<"Enter name of 2nd brother: ";
  cin>>n3;
  cout<<"Enter age of 2nd brother: ";
  cin>>n4;

  cout<<"Enter name of 3rd brother: ";
  cin>>n5;
  cout<<"Enter age of 3rd brother: ";
  cin>>n6;

  if(n2<n4 && n4<n6 ){
  cout<< n1 <<" is the youngest";
  }

  else if(n4<n2 && n2<n6){ 
  cout<<n3 <<" is the youngest";  
  }

  else
  {
  cout<<n5 <<" is the youngest";  
  }
}
