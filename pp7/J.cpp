#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int sumOfHalf(int num) {
    if (num == 0) { return 0;}
    else { return ((num % 10)/2) + sumOfHalf(num/10);}
}


int main() {
    int num;
    cin >> num;

    cout << sumOfHalf(num);
    return 0;
}