#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

string degreeOfTwo(int n) {
    if (n == 1) { return "Yes"; }

    if (n % 2 == 0) { return degreeOfTwo(n/2); }
    else {return "No"; }
}

int main() {
    long long n;
    cin >> n;

    cout << degreeOfTwo(n);
    return 0;
}