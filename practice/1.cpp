#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }

    cout << sum;
    return 0;
}