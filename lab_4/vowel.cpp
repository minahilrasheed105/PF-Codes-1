#include <iostream>
using namespace std;
main()

{
char n1;
cout<<" Enter any character in lower case: ";
cin>>n1;

if (n1 >= '0' && n1 <= '9'){
cout<<"It is a number." ; 
}

else if (n1 == 'a' || n1 =='e' || n1 == 'i' || n1 =='o' || n1 == 'u' ){
cout<<"It is a vowel.";   
}

else{
cout<<"It is a consonant.";
}

}