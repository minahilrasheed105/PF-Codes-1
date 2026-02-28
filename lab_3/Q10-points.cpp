#include<iostream>
using namespace std;
main()

{
int wins,draws,losses;
float wins_points, draws_points;
cout<<"Enter the number of wins:";
cin>>wins;
cout<<"Enter the number of draws:";
cin>>draws;
cout<<"Enter the number of losses:";
cin>>losses;
wins_points = wins * 3;
draws_points = draws * 1;
float total_points = wins_points + draws_points;
cout << "Team Has Obtained " << total_points << " in Asia Cup Tournament" << endl;
}

