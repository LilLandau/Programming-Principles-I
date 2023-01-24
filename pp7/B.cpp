#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void binary(int n) {
    if (n/2 == 0) {}
    else { binary(n/2); }

    cout << n%2;
}

int main() {
    int a;
    cin >> a;
    binary(a);
    return 0;
}