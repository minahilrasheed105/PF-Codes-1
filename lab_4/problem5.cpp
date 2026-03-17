#include <iostream>
using namespace std;
 main()
 
{
    int holidays, w_days, time, diff, t_time, t2;

    cout << "Enter holidays: ";
    cin >> holidays;

    w_days = 365 - holidays;

    time = w_days * 63 + holidays * 127;

    diff = abs(30000 - time);

    t_time = diff / 60;
    t2 = diff % 60;

    if (time <= 30000)
    {
        cout << "Tom sleeps well\n";
        cout << t_time << " hours and " << t2 << " minutes less for play";
    }
    else
    {
        cout << "Tom will run away\n";
        cout << t_time << " hours and " << t2 << " minutes more for play";
    }

}