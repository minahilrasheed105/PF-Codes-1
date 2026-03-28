#include<iostream>
using namespace std;
int main()

{
    char vowel[5]={'a','e','i','o','u'};
    string a;

    cout<<"Enter a string: ";
    getline(cin, a);

    cout<<"Vowels remove: ";
    for(int i=0;a[i]!='\0';i++)
    {
        char c=a[i];
      if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
      {
        cout<<c;
      }

    }
}