#include <iostream>
using namespace std;

string calculatePoolState(int V, int P1, int P2, int H);

main()
{
   int v, p1, p2, h;
   cout<<"Enter volume of the pool in letters: ";
   cin>>v;
   cout<<"Enter flow rate of the 1st pipe per pipe: ";
   cin>>p1;
   cout<<"Enter flow rate of the 2nd pipe per pipe: ";
   cin>>p2;
   cout<<"Enter hours that the worker is absent: ";
   cin>>h;

   cout << calculatePoolState(v,p1,p2,h);
}
string calculatePoolState(int V, int P1, int P2, int H)
{

    float totalWater = (P1 + P2) * H;

    // Case 1: Pool NOT overflowing
    if (totalWater <= V)
    {
        int poolPercent = (totalWater / V) * 100;
        int pipe1Percent = ((P1 * H) / totalWater) * 100;
        int pipe2Percent = ((P2 * H) / totalWater) * 100;

        return "The pool is " + to_string(poolPercent) +
               "% full. Pipe 1: " + to_string(pipe1Percent) +
               "%. Pipe 2: " + to_string(pipe2Percent) + "%.";
    }

    // Case 2: Pool OVERFLOW
    else
    {
        float overflow = totalWater - V;

        return "For " + to_string(H) +
               " hours the pool overflows with " +
               to_string(overflow) + " liters.";
    }
}
