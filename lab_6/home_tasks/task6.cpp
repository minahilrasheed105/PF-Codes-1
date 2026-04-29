#include <iostream>
using namespace std;
main()

{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    string students[n];
    cout << "Enter names of "<< n << " students: ";

    for(int i=0; i<n; i++)
    {
        cin>>students[i];
    }


    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            string temp;
            if(students[i][0] > students[j][0])
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    
    cout<<"Students in alphabetical order: "<<endl;
    for(int i=0;i < n;i++)
    {
        cout<<students[i] << endl;
    }
}