#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

double maxOfFour(double n1, double n2, double n3, double n4) {
    n1 = max(n1, n2);
    n3 = max(n3, n4);
    n1 = max(n1, n3);

    return n1;
}

int main() {
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    cout << maxOfFour(n1, n2, n3, n4);
}