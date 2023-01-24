#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum, i;
    cin >> n;

    sum = 0;
    i = 0;
    while (i != n) {
        ++i;
        sum = sum + i;
    }

    cout << sum;
}