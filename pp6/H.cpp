#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

string validNum(int n) {
    int dig;
    do
    {
        dig = n % 10;
        n /= 10;
        if (dig % 2 != 0) {return "Not valid"; }
    } while (n > 0);
    
    return "Valid";
}

int main() {
    int n;
    cin >> n;

    cout << validNum(n);
}