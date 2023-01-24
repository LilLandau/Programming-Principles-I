#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    float x, y;
    cin >> x;
    cin >> y;

    int days = 1;
    while (y > x)
    {
        x += 0.1*x;
        ++days;
    }

    cout << days;
    return 0;
}