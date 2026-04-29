#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string pyramidVolume(double l, double w, double h, string unit) {
    double volume = (l * w * h) / 3.0;

    if (unit == "millimeters")
        volume *= 1000000000.0;
    else if (unit == "centimeters")
        volume *= 1000000.0;
    else if (unit == "kilometers")
        volume *= 0.000000001;

    stringstream ss;
    ss << fixed << setprecision(3) << volume;

    return ss.str() + " cubic " + unit;
}

int main() {
    double l, w, h;
    string unit;

    cout << "Enter length, width, height (in meters): ";
    cin >> l >> w >> h;

    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    cout << pyramidVolume(l, w, h, unit);
}