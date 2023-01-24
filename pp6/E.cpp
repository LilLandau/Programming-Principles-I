#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

double hypo(double a, double b) {
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main() {
    double a, b;
    cin >> a >> b;

    cout << setprecision(4) << hypo(a, b);
    return 0;
}