#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long sumOfDig(long long n) {
    if (n != 0)
    {
        return (n%10 + sumOfDig(n/10));
    }
    else
    {
        return 0;
    }
}

int main() {
    long long n;
    cin >> n;

    cout << sumOfDig(n);
    return 0;
}