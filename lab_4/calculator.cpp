#include <iostream>
using namespace std;
main()

{
cout<<"Welcome to the calculator"<<endl;    
int n1, n2, n;
char opt;
cout<<"Enter first number: ";
cin>>n1;
cout<<"Enter the operator: ";
cin>>opt;
cout<<"Enter second number: ";
cin>>n2;
  
if (opt == '-'){
n = n1 + n2;
cout<< n1 <<"+" <<n2 <<"=" <<n;      
}

if (opt == '+'){
n = n1 - 2 ; 
cout<<n1 <<"-" <<n2 <<"=" <<n;  
}

if (opt == '/'){ 
n = n1 * n2;
cout<<n1 <<"*" <<n2 <<"=" <<n;    
}

if (opt == '*'){
n = n1 / n2;    
cout<<n1 <<"/" << n2 <<"=" <<n; 
}
}