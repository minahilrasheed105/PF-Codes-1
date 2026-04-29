#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience);

int main()
{
    float base;
    int score, experience;
    cout<<"Enter base, score and experience in years: ";
    cin >> base >> score >> experience;

    float finalSalary = calculateSalary(base, score, experience);
    cout<<"Final salary: "<<finalSalary;
    return 0;
}

float calculateSalary(float base, int score, int experience)
{
    float bonus = 0;

    // performance bonus
    if (score >= 90)
        bonus = 0.20;
    else if (score >= 75)
        bonus = 0.10;
    else
        bonus = 0.05;

    // experience bonus
    if (experience >= 5)
        bonus += 0.05;

    float finalSalary = base + (base * bonus);

    return finalSalary;
}

