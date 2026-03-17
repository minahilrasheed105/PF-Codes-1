#include <iostream>
using namespace std;
main()
 {
    int n, count = 0;

    cout << "Enter number: ";
    cin >> n;

    for(int i = n; i > 0; i = i / 10) {
        count = count + 1;
    }

    cout << "Total Number of Digits: " << count;

}