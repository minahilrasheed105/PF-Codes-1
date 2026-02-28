#include<iostream>
#include<iomanip>
using namespace std;

main()
{
	float megabytes,bits;
	cout<<" Enter the size in megabytes (MB): ";
	cin>>megabytes;
	bits=1024*1024*8*megabytes;
	
	cout<< megabytes << " MB is equivalent to bits: " << fixed << setprecision(2) << bits << " bits";
	
}
