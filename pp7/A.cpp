#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int recDeg(int degree) {
    if (degree == 0) { return 1; }
    if (degree == 1) { return 2; }

    return 2*recDeg(degree-1);
}

int main() {
    int degree;
    cin >> degree;

    cout << recDeg(degree);
    return 0;
}