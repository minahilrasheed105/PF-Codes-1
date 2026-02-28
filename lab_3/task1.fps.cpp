#include<iostream>
using namespace std;
main()

{ 
int minutes, fps,  frames;
cout<<"Number of minutes:";
cin>>minutes;
cout<<"Frames per second:";
cin>>fps;
frames= minutes * 60 * fps;
cout<<"Total number of frames:" << frames;
}