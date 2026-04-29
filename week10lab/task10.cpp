#include <iostream>
using namespace std;

void checkAlphabetCase(char n);

int main()
{
    char num;
    cout<<"Enter a character (A/a): ";
    cin>>num;

    checkAlphabetCase(num);
    return 0;
}
void checkAlphabetCase(char n)
{
    
    if(n== 'A'){
       cout<<"You have entered captital A"; 
    }
    else{
       cout<<"You have entered small a";  
    }
    
}