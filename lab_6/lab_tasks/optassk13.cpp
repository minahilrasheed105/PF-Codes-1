#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the number of chords: ";
    cin>>n;

    string chords[n];
    cout<<"Enter "<<n<<" chords, one per line: "<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>chords[i];
    }
    cout<<"Result: [";
    for(int i=0;i<n;i++)
    {
        string s=chords[i];
        if(s[s.length()-1]!='7')
        {
            s=s+'7';
        }
    
    }
    cout<<"]";
}