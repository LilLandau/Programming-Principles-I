#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int AlisaFunction(int number) {
    return abs(number);
}

int main() {
    int number;
    cin >> number;

    cout << AlisaFunction(number);
    return 0;
}