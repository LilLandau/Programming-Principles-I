#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << sum(a, b);
    return 0;
}