#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    double n;
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0/i)*(1.0/i);
    }

    cout << sum;
    return 0;
}