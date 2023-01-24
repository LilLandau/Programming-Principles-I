#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int sumOfDig(int n) {
    int sum = 0;
    do
    {
        sum += n % 10;
        n /= 10;

    } while (n > 0);
    
    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << sumOfDig(n);
}